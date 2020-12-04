CXXFLAGS = -Wall -I./lib
LINK = Link

count : main.o
	  g++ -o count main.o 

main.o: main.cc
	g++ -Wall -c main.cc

doc: Doxyfile
	doxygen Doxyfile

clean :
	rm -f *.o all core *.core