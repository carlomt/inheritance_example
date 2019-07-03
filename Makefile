CXX = g++ -std=c++11

default:
	${CXX} main.cc -o main.x

clean:
	rm -f main.x
