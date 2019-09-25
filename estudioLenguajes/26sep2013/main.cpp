#include <bits/stdc++.h>
#include "cuenta.cpp"
#include "cuentaCorriente.cpp"
#include "cuentaAhorros.cpp"

using namespace std;

int main(){
    CuentaCorriente corriente;
    CuentaAhorros ahorros;
    cout<<corriente.obtenerSaldo()<<" "<<ahorros.obtenerSaldo()<<endl;
    corriente.consignar(10);
    ahorros.consignar(10);
    cout<<corriente.obtenerSaldo()<<" "<<ahorros.obtenerSaldo()<<endl;
    corriente.retirar(5);
    ahorros.retirar(5);
    cout<<corriente.obtenerSaldo()<<" "<<ahorros.obtenerSaldo()<<endl;
    corriente.establecerTopeMaxRetiro(1000);
    cout<<corriente.topeMaxRetiro<<endl;
}

