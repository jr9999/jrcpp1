t1 : main.o
	g++ -Wall main.o -o t1

main.o : main.cpp
	g++ -Wall -c main.cpp

clean:
	rm -rf ./main.o ./t1
