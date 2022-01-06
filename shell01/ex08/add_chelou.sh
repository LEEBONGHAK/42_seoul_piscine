#!/bin/bash

X=$FT_NBR1
Y=$FT_NBR2

FIV_X=$(echo $X | tr "\'" "0" | tr "\\" "1" | tr "\"" "2" | tr "?" "3" | tr "!" "4")
FIV_Y=$(echo $Y | tr "mrdoc" "01234")

RES=$(echo "ibase=5;obase=23; $FIV_X + $FIV_Y" | bc)

echo $RES | tr "0123456789ABC" "gtaio luSnemf"
