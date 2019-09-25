#!/bin/bash
#===============================================================================
#
#          FILE:  example_variables.sh
# 
#         USAGE:  ./example_variables.sh 
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
#       CREATED:  29/06/18 20:44:12 -05
#      REVISION:  ---
#===============================================================================

#echo 'hola mundo' > hola_mundo.txt ------------------------------------------##para crear un archivo con la cadena de texto adentro.

# la cantidad de argumentos dados es alcanzable con "&#"

#echo "$2" >> "$1" -----------------------------##añadir el segundo argumento a un archivo, existente o no, de manera que si existe se añadirá al final, y si no existe se creará y se añadirá el texto.
	
file="$1" #guardar el primer argumento como 'file'
shift # eliminar el primer argumento, de manera que $2 ahora es $1
echo "$@" > "$file"



