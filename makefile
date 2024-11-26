compile runme:  main.o forker.o
	@gcc -o runme forker.o main.o
main.o: main.c forker.h
	@gcc -c main.c
forker.o: forker.c forker.h
	@gcc -c forker.c
run: runme
	@./runme
clean:
	rm *.o
	rm runme
