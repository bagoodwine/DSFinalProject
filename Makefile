# Makefile for Data Structures Final Project
# Blockchain creative application
#
# Authors: Bridget Goodwine & Hanjing Zhu
#
# Emails: bgoodwin@nd.edu & hzhu7@nd.edu

PP := g++

FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)
#CXXFLAGS := -m64 -std=c++11 $(FLAGS)


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

# make hashTest
hObjs := $(OBJECTS)/hashTest.o

hashTest: $(hObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/hashTest $(hObjs)
	$(EXE)/./hashTest

$(OBJECTS)/hashTest.o: $(PROG)/hashTest.cpp $(CLASSES)/hash.h
	$(PP) $(CXXFLAGS) -c $(PROG)/hashTest.cpp -o $@





# make MerkleTest
mObjs := $(OBJECTS)/MerkleTest.o

MerkleTest: $(mObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/MerkleTest $(mObjs)
	$(EXE)/./MerkleTest

$(OBJECTS)/MerkleTest.o: $(PROG)/MerkleTest.cpp $(CLASSES)/Transaction.h $(CLASSES)/hash.h $(CLASSES)/MerkleNode.h $(CLASSES)/MerkleTree.h
	$(PP) $(CXXFLAGS) -c $(PROG)/MerkleTest.cpp -o $@



# make initialize
initialize:
	mkdir objects executables

# make all
all: hashTest TransactionTest MerkleTest

# make clean
clean:
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
