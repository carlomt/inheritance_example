CXX = g++

default:
	${CXX} main.cc -o main.x

clean:
	rm -f main.x
