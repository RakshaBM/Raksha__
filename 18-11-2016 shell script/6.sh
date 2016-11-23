#!/bin/sh
if [ -s $1 ];
then
cd $1
else
cd .
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
rename 's/'$2'/ /g' *.* 
mv $2 "Razorthink_${gh}"
done

