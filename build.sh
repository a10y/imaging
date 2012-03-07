#!/bin/sh

file=$1
shift
out_file=bin/$1

g++ -ggdb `pkg-config --cflags opencv` -o $out_file $file `pkg-config --libs opencv` --std=c++0x;
