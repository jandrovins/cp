#!/bin/bash
#===============================================================================
#
#          FILE:  passing_arguments.sh
# 
#         USAGE:  ./passing_arguments.sh 
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
#       CREATED:  03/07/18 19:16:46 -05
#      REVISION:  ---
#===============================================================================

argument=$1

if [[ "$argument" != "" ]]; then
echo "You passed the argument $1"
else
    echo "You must pass an argument"
fi
