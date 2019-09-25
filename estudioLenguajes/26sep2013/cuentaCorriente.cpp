#include <bits/stdc++.h>
#include "cuenta.cpp"

using namespace std;

class CuentaCorriente : public Cuenta
{
    public:
        float getTope(){
            return this->topeMaxRetiro;
        }
        void establecerTopeMaxRetiro(float tope){
            topeMaxRetiro = tope;
        }
    private:
        float topeMaxRetiro;
};
