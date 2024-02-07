CC = gcc 
CFLAGS = -Wall -Wextra -O2 -I ./src/head
SDIR = ./src
ODIR = ./obj
OUT = ./out
CFILES = $(wildcard $(SDIR)/*.c)
OFILES = $(patsubst $(SDIR)/%.c,$(ODIR)/%.o,$(CFILES))

all : $(OUT)/main  

$(OUT)/main : $(OFILES)	
	$(CC) $(CFLAGS) -o main  $^
	mv main out

$(OFILES):$(CFILES)
	$(CC) $(CFLAGS) -c $?
	-@mv *.o $(ODIR)

.PHONY : clean 
clean :
	rm -f out/main ./obj/*

