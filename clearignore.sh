#!/bin/bash
tmp=`cat .gitignore | grep "*"`
read -a arr <<< ${tmp[@]}
length=${#arr[@]}
#let length--
for i in `seq 1 $length`
do
	long=${#arr[$i-1]}
	let long--
	find . -name "${arr[$i-1]:0:$long}" | tee log.txt | xargs rm -rf
done
cat log.txt
rm -f log.txt
#find . -name "${arr[$length]}" | tee -a log.txt | xargs rm -rf
