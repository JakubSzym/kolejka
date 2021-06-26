TRGDIR=./
OBJ=./obj
FLAGS= -Wall -pedantic -std=c++1z -iquote inc

__start__: ${TRGDIR}/pr1

${TRGDIR}/pr1: ${OBJ} ${OBJ}/main.o
	g++ -o ${TRGDIR}/pr1 ${OBJ}/main.o

${OBJ}:
	mkdir ${OBJ}

${OBJ}/main.o: src/main.cpp inc/queue.hh
	g++ -c ${FLAGS} -o ${OBJ}/main.o src/main.cpp





clean:
	rm -f ${TRGDIR}/pr1 ${OBJ}/*
