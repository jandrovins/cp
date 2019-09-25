#!/bin/bash
#===============================================================================
#
#          FILE:  parts_of_a_str.sh
# 
#         USAGE:  ./parts_of_a_str.sh 
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
#       CREATED:  05/07/18 22:43:39 -05
#      REVISION:  ---
#===============================================================================
echo "Ingrese una cadena y el caracter a partir del cual se imprimirá su cadena"

read cadena
read caracter

echo "${cadena#*$caracter}"

