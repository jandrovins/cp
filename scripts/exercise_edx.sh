#!/bin/bash
#===============================================================================
#
#          FILE:  exercise_edx.sh
# 
#         USAGE:  ./exercise_edx.sh 
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
#       CREATED:  29/06/18 22:55:21 -05
#      REVISION:  ---
#===============================================================================

echo "What name of directory do you wnat?"
read NAME

if [[ -n "$NAME" ]] 
then
    mkdir "$NAME"
else
    echo "no hay"
fi

cd $NAME 
pwd
touch empty1.txt empty2.txt empy3.txt
ls
echo hola1 > empty1.txt
echo hola2 > empty2.txt
touch hola3 > empty3.txt
cat empty1.txt empty2.txt empty3.txt
echo Goodbye!
