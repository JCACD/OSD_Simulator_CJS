# Makefile
all:
	aarch64-linux-gnu-g++ -o kvm_core main.cpp

clean:
	rm -f kvm_core