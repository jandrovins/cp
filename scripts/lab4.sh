#!/bin/bash
#===============================================================================
#
#          FILE:  lab4.sh
# 
#         USAGE:  ./lab4.sh 
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
#       CREATED:  03/07/18 20:59:18 -05
#      REVISION:  ---
#===============================================================================

echo "enter a number (1 or 2)"
read variable
if [[ "$variable" == "1" || "$variable" == "2" ]]; then
    if [[ "$variable" == "1" ]];then
        variable="Yes"
    else
        variable="No"
    fi
else
    echo "Error: should be 1 or 2"
fi

echo $variable

