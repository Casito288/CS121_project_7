studentData: student.o date.o address.o main.o
	g++ -g date.o student.o address.o -o studentData

main.o: main.cpp student.h address.h date.h
	g++ -c -g main.cpp

student.o: student.h address.h date.h student.cpp
	g++ -c -g student.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

date.o: date.h date.cpp
	g++ -g -c date.cpp

clean:
	rm *.o
	rm studentdata

debug: studentData
	gdb studentData

run: studentData
	./studentData

valgrind: studentData
	valgrind --leak-check=full ./studenData
