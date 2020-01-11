main:main.o recogniser.o tabel.o
	g++ -o main main.o recogniser.o tabel.o


main.o:main.cpp
	g++ -c main.cpp -I.. --std=c++11


recogniser.o:recogniser.cpp
	g++ -c recogniser.cpp -I.. --std=c++11

tabel.o:tabel.cpp
	g++ -c tabel.cpp -I.. --std=c++11


clean:
	rm *.o ./main
