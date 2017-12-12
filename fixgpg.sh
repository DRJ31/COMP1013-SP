#!/bin/bash
touch log.txt
gpg --sign log.txt
rm -f log.txt log.txt.gpg
