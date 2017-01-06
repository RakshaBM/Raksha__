from datetime import datetime, timedelta

N = 4

date_N_days_ago = datetime.now() + timedelta(days=N)

print (datetime.now())
print (date_N_days_ago)