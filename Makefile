# Makefile for Data Structures Final Project
# Blockchain creative application
#
# Authors: Bridget Goodwine & Hanjing Zhu
#
# Emails: bgoodwin@nd.edu & hzhu7@nd.edu

PP := g++

FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

CLASSES := classes
PROG := programs
EXE := executables
OBJECTS := objects

# commands here

# make TransactionTest
tObjs := $(OBJECTS)/TransactionTest.o

TransactionTest: $(tObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/TransactionTest $(tObjs)
	$(EXE)/./TransactionTest

$(OBJECTS)/TransactionTest.o: $(PROG)/TransactionTest.cpp $(CLASSES)/Transaction.h
	$(PP) $(CXXFLAGS) -c $(PROG)/TransactionTest.cpp -o $@

# make initialize
initialize:
	mkdir objects executables

# make all
all:

# make clean
clean:
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
