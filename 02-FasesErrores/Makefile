hello9: hello9.o studio2.o
	gcc hello9.o studio2.o -o hello9

hello9.o: hello9.c studio2.c
	gcc -c hello9.c studio2.c -o hello9.o

studio2.o: studio2.c
	gcc -c studio2.c -o studio2.o

clean:
	rm -f hello9.o studio2.o