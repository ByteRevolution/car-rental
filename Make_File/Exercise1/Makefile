CC = gcc 
CFLAGS = -Wall 
main : app.c sampleAdd.c
#	$(CC) $(CFLAGS) -c app.c sampleAdd.c
#	mv *.o out  
	$(CC) $(CFLAGS) -o main app.c sampleAdd.c -L. libSample.a
	mv $@ build 
clean :
#	rm -f main
	find . -maxdepth 1 -type f -name "main" -exec rm -f {} \;

