#include <bits/stdc++.h>

using namespace std;

int main()
{
    char letra, anterior;
    cin >> anterior;
    int cont = 1;
    while (cin >> letra) {
        if (letra == anterior)
            cont++;
        else {
            if (cont == 1) {
                cout << anterior;
            }
            if (cont == 2) {
                cout << anterior << anterior;
                cont = 1;
            } else if (cont >= 3) {
                cout << anterior << cont;
                cont = 1;
            }
        }

        anterior = letra;
    }
    if (cont == 1) {
        cout << anterior;
    }
    if (cont == 2) {
        cout << anterior << anterior;
        cont = 1;
    } else if (cont >= 3) {
        cout << anterior << cont;
        cont = 1;
    }
}
