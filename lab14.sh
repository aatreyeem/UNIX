#!/bin/bash
read N
a=0
b=1
echo "The Fibonacci series is : "
for (( i=0; i<N; i++ ))
do
echo "$a"
fib=$((a + b))
a=$b
b=$fib
done
