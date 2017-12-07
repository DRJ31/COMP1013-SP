#!/bin/bash
for i in `cat .gitignore`
do
    find . -name $i
done