#!/bin/bash
#===============================================================================
#
#          FILE:  mkfile.sh
# 
#         USAGE:  ./mkfile.sh 
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
#       CREATED:  20/06/18 14:01:12 -05
#      REVISION:  ---
#===============================================================================

file="$1" # save the first argument as "$file"
shift # drop the first argument from "$@"
echo "$@" > "$file" # write the remaining arguments to "$file"
