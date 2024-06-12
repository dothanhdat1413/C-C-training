main: person.o student.o main.o
	g++ person.o student.o main.o -o main

main.o: main.cpp
	g++ -c main.cpp

person.o: person.cpp
	g++ -c person.cpp		

student.o: student.cpp
	g++ -c student.cpp		
clean: 
	rm *.o person
clean:
	rm *.o student
clean:
	rm *.o main