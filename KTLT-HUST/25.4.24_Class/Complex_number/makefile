main: Complex_class.o main.o
	g++ Complex_class.o main.o -o main

Complex_class.o: Complex_class.cpp
	g++ -c Complex_class.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o main