CC=g++
CFLAGS=-Wall -lm -lcrypt -O2 -std=c++11 -pipe -DONLINE_JUDGE
.SUFFIXES = .cpp
objs:=$(wildcard *.cpp)
targets:=$(objs:.cpp= )

.PHONY:all
all: $(targets)
.cpp:
	$(CC) $(CFLAGS) -std=c++11 -o $@ $< 
