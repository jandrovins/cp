CC=g++
CXXFLAGS=-Wall
.SUFFIXES = .cpp
objs:=$(wildcard *.cpp)
targets:=$(objs:.cpp= )

.PHONY:all
all: $(targets)
.cpp:
	$(CC) $(CXXFLAGS) -std=c++11 -o $@ $< 
