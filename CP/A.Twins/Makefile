CC=g++
CXXFLAGS=-O3
.SUFFIXES = .cpp
objs:=$(wildcard *.cpp)
targets:=$(objs:.cpp= )

.PHONY:all
all: $(targets)
.cpp:
	$(CC) $(CXXFLAGS)  -o $@ $< 
