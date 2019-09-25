#!/bin/bash
#===============================================================================
#
#          FILE:  if-then.sh
# 
#         USAGE:  ./if-then.sh 
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
#       CREATED:  19/06/18 10:08:44 -05
#      REVISION:  ---
#=============================================================================


echo 'Ingresa un num'
read D

if [ $D = 4 ];then
echo 'Acertaste'
exit 0
elif [ $D = 3 ];then
echo 'Casi, casi'
else
echo 'No acertaste'
fi

exit 0
