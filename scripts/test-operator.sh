#!/bin/bash
#===============================================================================
#
#          FILE:  test-operator.sh
# 
#         USAGE:  ./test-operator.sh 
# 
#   DESCRIPTION:  21
# 
#       OPTIONS:  ---
#  REQUIREMENTS:  ---
#          BUGS:  ---
#         NOTES:  ---
#        AUTHOR:   (), 
#       COMPANY:  
#       VERSION:  1.0
#       CREATED:  20/06/18 21:34:24 -05
#      REVISION:  ---
#===============================================================================

X=118
Y=300

EMPTY=""

if [ $X -lt $Y ]; then
	echo "$X es menor que $Y"
elif [[ $X -gt $Y ]]; then
	echo "$X no es menor que $Y"
else
        echo "$X = $Y"
fi

if [[ -n "$EMPTY" ]] ; then
	echo "empty no es una cadena vacía"
else
	echo "empty es una cadena vacía"
fi

if [ -e ./ganciones.txt ]; then
	echo "ganciones.txt existe"
	if [ -L ./ganciones.txt ]; then
		echo "ganciones.txt es un Symbolic Link"
	elif [ -f ./ganciones.txt ]; then
		echo "ganciones.txt no es un Symbolic Link, es un archivo"
	fi	
else
	echo "No tienes un archivo llamado ganciones.txt"	
fi
