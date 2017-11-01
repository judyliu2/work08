app: stat.o
	@gcc stat.o -o app
main.o: main.c
	@gcc -c stat.c
run: app
	@./app
clean:
	@rm *.o
