CC = gcc
OPTS = -g -Wall -Werror -std=c99 -lcurses
SRCS = $(wildcard *.c)
INCS = $(wildcard *.h)
OBJS = $(SRCS:.c=.o)

all: $(OBJS)

%.o: %.c ${INCS}
	$(CC) $< $(OPTS) -o $@

.PHONY: clean
clean:
	rm $(OBJS)

