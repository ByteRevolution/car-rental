CC = gcc 
CFLAGS = -Wall -Wextra -O3
SDIR = ./src
ODIR = ./obj
OUT = ./out
CFILES = $(wildcard $(SDIR)/*.c)
OFILES = $(patsubst $(SDIR)/%.c,$(ODIR)/%.o,$(CFILES))

all : main run  

main : $(OFILES)	
	$(CC) $(CFLAGS) -o main -I ./src $^
	mv main out

$(OFILES):$(CFILES)
	$(CC) $(CFLAGS) -c $?
	-@mv *.o $(ODIR)

.PHONY : clean 
clean :
	rm -f main ./obj/*

