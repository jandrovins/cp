#!/bin/bash
#===============================================================================
#
#          FILE:  string_tests.sh
# 
#         USAGE:  ./string_tests.sh 
# 
#   DESCRIPTION:  
# 
#       OPTIONS:  ---
#  REQUIREMENTS:  ---
#          BUGS:  ---
#         NOTES:  ---
#        AUTHOR:   (), 
#       COMPANY:  
#       VERSION:  1.0
#       CREATED:  05/07/18 19:06:54 -05
#      REVISION:  ---
#===============================================================================

echo "Ingrese dos cadenas a cotinuación"

read str1
read str2

if [[ -n $str1 && ! -n $str2 ]]; then
    echo "str1 is empty and str2 is not"
fi

if [[ ${#str1} > ${#str2} ]]; then
    echo "str1 length is greater than str2"
elif [[ ${#str1} < ${#str2} ]]; then
    echo "str1 is not greater than str2"
else
    echo " the string lengths are equal"
fi

if [[ "$str1" == "$str2" ]];then
    echo "the strings are the same"
else
    echo "the strings are not the same"
fi


