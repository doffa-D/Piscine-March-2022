#!/bin/sh

#Concatnating
expr=$(echo "$FT_NBR1 + $FT_NBR2")

#Substitude FT_NBR1
expr=$(echo "$expr" | tr "\'\\\\\"?\!" '01234')

#Substitude FT_NBR2
expr=$(echo "$expr" | tr 'mrdoc' '01234')

#Preparing expression for bc
expr="ibase=5; obase=23; $expr"

#Evalute expression
result=$(echo "$expr" | bc)

output=$(echo "$result" | tr '0123456789ABC' 'gtaio luSnemf')

echo "$output"