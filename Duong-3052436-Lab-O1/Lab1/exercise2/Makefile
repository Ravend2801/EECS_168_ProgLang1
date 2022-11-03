prog: myintro.o
	g++ -std=c++11 -g -Wall myintro.o -o prog

myintro.o: myintro.cpp
	g++ -std=c++11 -g -Wall -c myintro.cpp

clean:
	rm *.o prog
