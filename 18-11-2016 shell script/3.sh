#!/bin/sh
# 3 question
echo enter the file name
read pid
ps -eo pid > $pid.txt 
