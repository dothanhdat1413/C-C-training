main: Complex_class.o main.o
	g++ Complex_class.o -o main

main.o: main.cpp
	g++ -c main.cpp
	
Complex_class.o: Complex_class.cpp
	g++ -c Complex_class.cpp

clean:
	rm *.o main
