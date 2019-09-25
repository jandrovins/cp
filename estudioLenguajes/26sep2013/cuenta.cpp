#include <bits/stdc++.h>
#pragma once

using namespace std;

class Cuenta
{
    public:
        virtual float obtenerSaldo(){
            return saldo;
        }
        virtual void consignar(float valor){
            saldo += valor;
        }
        virtual void retirar(float valor){
            saldo -= valor;
        }
    private:
        float saldo = 0;
};
