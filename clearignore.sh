#!/bin/bash
for i in `cat .gitignore`;
do
    echo $i | xargs find . -name
done