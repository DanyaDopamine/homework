SHELL=/bin/bash
INC=-Iinclude
CC=g++

all: clean prepare build
  @echo "Building application...done"
  echo $(SHELL)

clean:
  rm -rf bin
  rm -rf obj

prepare:
  mkdir -p bin
  mkdir -p obj

build:
  $(CC) -Wall -g -O0 -c $(INC) -o obj/author.o src/author.cpp
  $(CC) -Wall -g -O0 -c $(INC) -o obj/book.o src/book.cpp
  $(CC) -Wall -g -O0 -c $(INC) -o obj/main.o src/main.cpp
  $(CC) -g -O0 -o bin/main.p obj/author.o obj/main.o obj/book.o
