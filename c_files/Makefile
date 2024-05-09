#! /bin/bash

CC = g++
DDEBUG = -Wall -Werror -g 
DEP = main.o display.o exit_func.o create_node.o init.o main_menu.o insert_menu.o delete_menu.o sort_menu.o insert_after_val.o insert_beg.o insert_end.o insert_at_key.o delete_end.o delete_beg.o delete_at_key.o delete_after_val.o

run : ${DEP}
	${CC} ${DDEBUG} -o run ${DEP}
	sudo mv *.o ../obj/
	sudo mv run ../

%.o : %.c
	${CC} ${DDEBUG} -c $^

clean:
	sudo rm ../obj/*
	sudo rm ../run
