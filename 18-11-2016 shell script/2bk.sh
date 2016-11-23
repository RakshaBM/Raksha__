#!/bin/sh
# question 1
DATE=`date +%Y%m%d%H%M%S`
mkdir $DATE
#for k in $(seq 1 $(wc -w < $1))
#do
#cp --parents -pr $(sed -n )
#done
while read p
do
cp --parents -pr $p $DATE
done < $1
ls -d 20* > dl.txt
i=20161122130000
for k in $(seq 1 $(wc -w < dl.txt))
do
j=$(sed -n "${k}p" dl.txt)
if [ $i -gt $j ] 
then
tar cf $DATE/$j.tar $j
fi
done
	

