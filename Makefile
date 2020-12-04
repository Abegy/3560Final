CXXFLAGS = -Wall -I./lib
LINK = Link

count : main.o
	  g++ -o count main.o 

main.o: main.cc
	g++ -Wall -c main.cc

Doxyfile:
	doxygen -g

doc: Doxyfile
	doxygen Doxyfile

check: cppcheck valgrind

valgrind:
	valgrind ./count

test: main.o maintest.o
	g++ -Wall -o $@ $^

clean :
	rm -f *.o all core *.core