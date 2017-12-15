#!/bin/bash
cd $1
zip $1_l630003010.zip *.cpp *.txt 
mv $1_l630003010.zip ..
cd - >> /dev/null