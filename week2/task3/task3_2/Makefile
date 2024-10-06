CXX = g++
CXXFLAGS = -Wall -std=c++11

OBJ = main.o Engine.o Passenger.o Car.o

all: car_program

car_program: $(OBJ)
	$(CXX) -o car_program $(OBJ)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Engine.o: Engine.cpp Engine.h
	$(CXX) $(CXXFLAGS) -c Engine.cpp

Passenger.o: Passenger.cpp Passenger.h
	$(CXX) $(CXXFLAGS) -c Passenger.cpp

Car.o: Car.cpp Car.h Engine.h Passenger.h
	$(CXX) $(CXXFLAGS) -c Car.cpp

clean:
	rm -f *.o car_program
