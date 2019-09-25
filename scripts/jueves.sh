#!/bin/bash
#===============================================================================
#
#          FILE:  jueves.sh
# 
#         USAGE:  ./jueves.sh 
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
#       CREATED:  21/06/18 20:15:44 -05
#      REVISION:  ---
#===============================================================================

MAX=10000


  for((nr=1; nr<$MAX; nr++))
  do

    let "t1 = nr % 5"
    if [ "$t1" -ne 3 ]
    then
      continue
    fi

    let "t2 = nr % 7"
    if [ "$t2" -ne 4 ]
    then
      continue
    fi

    let "t3 = nr % 9"
    if [ "$t3" -ne 5 ]
    then
      continue
    fi

    break   # What happens when you comment out this line? Why?

  done

  echo "Number = $nr"


exit 0
