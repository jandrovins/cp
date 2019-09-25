#!/bin/bash
#===============================================================================
#
#          FILE:  case_statement.sh
# 
#         USAGE:  ./case_statement.sh 
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
#       CREATED:  08/07/18 20:02:11 -05
#      REVISION:  ---
#===============================================================================

if [[ $# == 0 ]]; then
        echo  "Ingrese un número entre el 0 y el 7 para traducirlo a un mes: "

        read respuesta
    else
        respuesta=$1
fi
        case "$respuesta" in
    1 )  echo "Enero";;
    "2" ) echo Febrero ;;
    "3" ) echo Marzo ;;
    "4" ) echo "Abril" ;;
    "5" ) echo Mayo ;;
    "6" ) echo Junio ;;
    * ) echo "ERROR: la respuesta debía ser un número entre el 0 y el 7";;
esac



