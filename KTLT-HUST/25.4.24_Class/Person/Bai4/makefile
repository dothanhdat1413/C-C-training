person: Person_class.o main.o
	g++ Person_class.o main.o -o person


Person_class.o: Person_class.cpp
	g++ -c Person_class.cpp

Main.o: main.cpp
	g++ -c main.cpp

clean: 
	rm *.o person