#!/bin/sh

#question 4
read user pswd
u=$(wc -w < user.txt)
p=$(wc -w < pwd.txt)


if [ $u -eq $p ];
then
echo creating users 
for i in $(seq 1 $u)
do
echo in for loop
t=$(sed -n "${i}p" user.txt)
h=$(sed -n "${i}p" pwd.txt)
useradd $t
echo $t:$h | chpasswd
done
else
echo the number of users and passwords do not match. try again
fi

