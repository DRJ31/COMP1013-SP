#!/bin/bash
for i in `cat .gitignore | grep "*"`
do
    ./clearignore.sh $i &
    echo $! | xargs wait
done