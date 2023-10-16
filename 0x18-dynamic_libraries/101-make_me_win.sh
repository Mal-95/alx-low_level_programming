#!/bin/bash
gcc -shared -o  myprintf.so -fPIC 200-test.c
export LD_PRELOAD=./myprintf.so:$LD_LIBPART_PATH
