#!/bin/bash
#===============================================================================
#
#          FILE:  ciclos.sh
# 
#         USAGE:  ./ciclos.sh 
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
#       CREATED:  24/07/18 17:44:21 -05
#      REVISION:  ---
#===============================================================================



#
#for (( i=1;i<10;i++ ));
#do
#    echo i
#done

i=3
while [[ "$i" -lt 10 ]];
do
    echo i
    i=$i+1
done
