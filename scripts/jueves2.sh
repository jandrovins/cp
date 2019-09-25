#!/bin/bash
#===============================================================================
#
#          FILE:  jueves2.sh
# 
#         USAGE:  ./jueves2.sh 
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
#       CREATED:  21/06/18 22:24:56 -05
#      REVISION:  ---
#===============================================================================

#!/bin/bash

DIRNAME=/usr/bin
FILETYPE="shell script"
LOGFILE=logfile

file "$DIRNAME"/* | fgrep "$FILETYPE" | tee "$LOGFILE" | wc -l

exit 0

