
all: vector

vector: vector.cpp
	g++ -std=c++11 vector.cpp -o vector

clean:
	rm -rf vector main *.o
