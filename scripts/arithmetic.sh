#!/bin/bash
#===============================================================================
#
#          FILE:  arithmetic.sh
# 
#         USAGE:  ./arithmetic.sh 
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
#       CREATED:  05/07/18 17:30:03 -05
#      REVISION:  ---
#===============================================================================

a() {
    let x=($1 + $2)
    return $x
}

s() {
    let x=($1 - $2)
    return $x
}

m() {
    let x=($1 * $2)
    return $x
}

d() {
    let x=($1 / $2)
    return $x
}

${1} ${2} ${3}

echo "$x"

























