#!/bin/bash
for folder in `ls`
do
    find . -name "*.java" | grep $folder >> /dev/null
    if [ 0 -ne $? ] && [ -d $folder ]
    then
        echo $folder;
    fi
done