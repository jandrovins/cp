#! /bin/bash
#===============================================================================
#
#          FILE:  copy.sh
# 
#         USAGE:  ./copy.sh 
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
#       CREATED:  20/06/18 14:57:12 -05
#      REVISION:  ---
#===============================================================================

if [[ -e $1 ]] 
then
	echo "Se copiará el archivo"
	cp $1 $2
else
	echo "Error! El archivo fuente no existe"
	exit 1
fi
