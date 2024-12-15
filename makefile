IDIR=include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
SDIR=src
LDIR=lib

LIBS=-lm

_DEPS=main.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ=main.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

EXEC=program

$(ODIR):
	mkdir -p $(ODIR)

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS) | $(ODIR)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	$(CC) -o $(EXEC) $^ $(LIBS)

run: all
	./$(EXEC)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ $(EXEC)
