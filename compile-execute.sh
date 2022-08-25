#!/bin/bash

clang++ -std=c++1z $1 -o tmp.out
cat ./input | ./tmp.out -
