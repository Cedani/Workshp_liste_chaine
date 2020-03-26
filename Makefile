##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make build
##

SRC	=	./list.c	\
		./main.c

CC	=	gcc -g3

NAME	=	list

all:
	$(CC) -o $(NAME) $(SRC)
	make clean

clean:
	rm -rf *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all