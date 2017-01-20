CC =gcc
CFLAGS =-g -std=c99 -Wall -Wvla -pedantic
NAME = bit01

all: $(NAME)


$(NAME): $(NAME).c
	$(CC) $(CFLAGS) $(NAME).c -o $(NAME)

run:
	./$(NAME)

clean:
	# - vor Befehl, ignoriere Fehlschlag
	-/bin/rm -f $(NAME)
