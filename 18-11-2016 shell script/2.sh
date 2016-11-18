#!/bin/sh
#2nd question

echo "Enter the filename and its path"
read file path
#cd ~
if [ -e $path/$file ]
then 
rm $path/$file
else

echo file not found. enter the arc name
read arc
tar -cf $arc.tar $path
fi

