CC =gcc

DIR1 =/home/revant/volansys/git/make-file/Exercise2/commonMod1
DIR2 =/home/revant/volansys/git/make-file/Exercise2/commonMod2
OBJ = /home/revant/volansys/git/make-file/Exercise2/build

all: main exec

main : app.c $(wildcard $(DIR1)/*.c) $(wildcard $(DIR2)/*.c)
	$(CC) -c  -I $(DIR1) -I $(DIR2) $? $(wildcard $(DIR1)/.c) $(wildcard $(DIR2)/.c)   
	mv  ./*.o  ./build

exec : app.c $(wildcard $(DIR1)/*.c) $(wildcard $(DIR2)/*.c)
	$(CC) $^ -o $@ -I $(DIR1) -I $(DIR2) 
	mv exec ./out
clean :
	rm -f  $(OBJ)/*.o ./out/exec
