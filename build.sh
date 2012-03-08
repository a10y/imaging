#!/bin/sh

file=$1
shift
out_file=bin/$1

#Make sure the build directory existes
mkdir -p bin

g++ -ggdb `pkg-config --cflags opencv` -o $out_file $file `pkg-config --libs opencv` --std=c++0x;
