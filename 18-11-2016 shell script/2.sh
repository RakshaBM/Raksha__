#!/bin/sh
#2nd question

#echo "Enter the filename and its path"
echo $1
echo $2
cd ~
if [ -e $2/$1 ]
then 
rm $2/$1
else
echo file not found. enter the arc name
read arc
tar -cf $arc.tar $2
fi

