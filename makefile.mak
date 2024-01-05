CC = gcc -Wall
Programm = BruttoNetto

$(Programm):BruttoNetto.c
	$(CC) -o $(Programm) BruttoNetto.c

all: 
	clean $(Programm) run

clean: 
	rm $(Objektdatei) $(Programm) -f

run:
	./$(Programm)
