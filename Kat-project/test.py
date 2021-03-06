from pprint import pprint

from flask import Flask, render_template, redirect, url_for
import http.client
import json

from flask import request


app = Flask(__name__)

conn = http.client.HTTPConnection("razorthinkuniversity.kickassteam.biz")
token='null'

@app.route('/login',methods = ['POST', 'GET'])
def login():
    domain = request.form['domain']
    username = request.form['username']
    password = request.form['password']
    headers = {
            'x-auth-password': "%s" % (password),
            'x-auth-domain': "%s" % (domain),
            'x-auth-username': "%s" % (username),
            'cache-control': "no-cache",
    }

    conn.request("POST", "/rest/user/login", headers=headers)
    global token
    res = conn.getresponse()
    data = res.read()
    p = data.decode("utf-8")
    #print(p)
    #print(res.headers)
    if 'Ok' in p:
        token = "7882be71-53bd-429e-bb6c-8bd983323d8a"
        return redirect(url_for('getAllCompanyUsers', new_token=token))
    else:
        return render_template('login_error.html')




@app.route('/getLoggedInUser')
def authen():
   # username = request.form['username']
    #password = request.form['password']
   # domain = request.form['domain']
    header = {
        'content-type': "application/json",
        'x-auth-token': "7882be71-53bd-429e-bb6c-8bd983323d8a"
    }
    conn.request("GET", "/rest/user/getLoggedInUser", headers=header)
    res = conn.getresponse()
    data = res.read()
    return (data)


@app.route('/work_stream')
def work_stream():
    header = {
        'content-type': "application/json",
        'x-auth-token': "7882be71-53bd-429e-bb6c-8bd983323d8a"
    }
    conn.request("GET", "/rest/workstream/getWorkStream", headers=header)
    res = conn.getresponse()
    data = res.read()
    return (data)


@app.route('/getAllCompanyUsers/<new_token>')
def getAllCompanyUsers(new_token):
    header = {
        'x-auth-token': "7882be71-53bd-429e-bb6c-8bd983323d8a",
        'content-type': "application/json"
    }
    conn.request("GET", "/rest/user/getAllCompanyUsers", headers=header)
    res = conn.getresponse()
    data = res.read()
    p = data.decode("utf-8")
    j = json.loads(p)
    pprint(j)
    j1 = j['entity']
    x = []
    for index in range(len(j1)):
        j2 = j1[index]
        x.append(j2['fname'])

    #pprint(j)
    return render_template('all_users.html', fullname=x)



@app.route('/dashboardTasks')
def getTasks():
    dt=datef()
    payload = "{\n\t\"endDate\" : \"%s\",\n\t\"offsetHour\":\"5\",\n\t\"isReport\":\"true\",\n\t\"offsetMinute\" : \"30\",\n\t\"pageNumber\" : \"0\",\n\t\"pageSize\" : \"5\",\n\t\"startDate\":\"1482172200000\",\n\t\"userId\" : \"240\"\n}" % (d)

    headers = {
        'content-type': "application/json",
        'x-auth-token': "7882be71-53bd-429e-bb6c-8bd983323d8a"
    }

    conn.request("POST", "/rest/dashboard/dashboardTasks", payload, headers)

    res = conn.getresponse()
    data = res.read()
    h=data.decode("utf-8")
    l = json.loads(h)
    pprint(l)
    k=l['entity']
    pprint(k)
    j=k['taskStatus']
    pprint(j)
    inp=com=hd=stck=nys=0
    if 'In Progress' in l:
        inp = j['In Progress']
    if 'Completed' in l:
        com = j['Completed']
    if 'On Hold' in l:
        hd = j['On Hold']
    if j['Stuck']:
        stck = j['Stuck']
    if 'Not Started' in l:
        nys = j['Not Started']
    return render_template('tasks.html', x=stck)
def rand():
    return (1482863400000)

if __name__ == '__main__':
   app.run(debug = True)
