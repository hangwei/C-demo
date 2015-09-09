#!/bin/bash
CC=g++

if [ -z $1 ];then
    echo "Usage : $1 < C-Programs File's name >"
    exit 1
fi
#FLAGS=" -lpthread -g $2 -Wall"
FLAGS=" -g $2 -std=c++11"

FILN=$1
FILO=$(echo -e "$1" | sed 's/\.[c][p][p]//g')

if [ ${FILN} = ${FILO} ];then
    echo "Input filename is not a cpp-Program file !"
    exit
fi

#echo "Compiling ..."
echo -e "     \033[34mCC $FILO\033[0m"
${CC} -o ${FILO} ${FILN} ${FLAGS}
if [ 0 -ne $? ];then
    echo -e "     \033[1;31m${CC} -o ${FILO} ${FILN} ${FLAGS}\033[0m                       [ \033[1;31mFALSE. \033[0m]"
else
#echo "${FILO}   is OK."
    echo -e "     \033[31mCompleted                   \033[0m                                   [ \033[1;32mOK. \033[0m]"
fi
echo -e "     \033[1;30m$(date)\033[0m"
exit 0
