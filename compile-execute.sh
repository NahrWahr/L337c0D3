#!/bin/bash

clang++ $1 -o tmp.out
cat ./input | ./tmp.out -
