all: obj

obj: main.o cuenta.o cuentaCorriente.o cuentaAhorros.o
	$(CXX) -o $@ $^

cuenta.o: cuenta.cpp 

cuentaAhorros.o: cuenta.cpp cuentaAhorros.cpp

cuentaCorriente.o: cuenta.cpp cuentaCorriente.cpp

main.o: cuenta.cpp cuentaCorriente.cpp cuentaAhorros.cpp


clean:
	rm *.o
