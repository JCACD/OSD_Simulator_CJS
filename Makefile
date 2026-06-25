# Makefile (適用於 PC)
CXX = g++
CXXFLAGS = -Wall -O2

all: kvm_core

kvm_core: src/main.cpp
	$(CXX) $(CXXFLAGS) -o kvm_core src/main.cpp

clean:
	rm -f kvm_core