#!/bin/sh
if [ -s $1 ];
then
cd $1
ts=$2
else
cd .
ts=txt
fi
ls -S > kf.txt
cat kf.txt

k=$(wc -w < kf.txt)
for i in $(seq 1 $k)
do
f=$(sed -n "${i}p" kf.txt)
if [ -s $f ];
then
c2= $c1
else
rm -i $f
fi
cudr=$(pwd)
gh=$(sed "s/\//-/" $cudr)
rename 's/'$ts'/ /g' *.* 
mv "$ts" "Razorthink_${gh}"
done

