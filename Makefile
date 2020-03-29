main: main.o shapes.o
	g++ -o main main.o shapes.o

tests: tests.o shapes.o
	g++ -o tests tests.o shapes.o

main.o: main.cpp

tests.o: tests.cpp

shapes.o: shapes.cpp

clean:
	rm -f main.o test.o shapes.o
