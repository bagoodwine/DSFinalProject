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


# make initialize
initialize:
	mkdir objects executables

# make all
all:

# make clean
clean:
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
