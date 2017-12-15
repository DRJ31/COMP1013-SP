#!/bin/bash
touch log.txt
gpg --sign log.txt
rm -f log.*
