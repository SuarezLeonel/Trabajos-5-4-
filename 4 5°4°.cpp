#include <bits/stdc++.h>
using namespace std;

int ValorMensaje(string mensaje);

int main() {
    string mensaje;
    
    cout << "Ingrese el mensaje: ";
    getline(cin, mensaje);

    int valor = ValorMensaje(mensaje);
    cout << "El valor de su mensaje es: " << valor << endl;

    return 0;
}

int ValorMensaje(string mensaje){
map<char, int> ValorLetra;
    ValorLetra['a'] = 1;
    ValorLetra['e'] = 1;
    ValorLetra['o'] = 2;
    ValorLetra['s'] = 2;
    ValorLetra['d'] = 3;
    ValorLetra['i'] = 3;
    ValorLetra['n'] = 3;
    ValorLetra['r'] = 3;
    ValorLetra['c'] = 4;
    ValorLetra['l'] = 4;
    ValorLetra['t'] = 4;
    ValorLetra['u'] = 4;
    ValorLetra['m'] = 5;
    ValorLetra['p'] = 5;
    ValorLetra['b'] = 6;
    ValorLetra['f'] = 6;
    ValorLetra['g'] = 6;
    ValorLetra['h'] = 6;
    ValorLetra['j'] = 6;
    ValorLetra['q'] = 6;
    ValorLetra['v'] = 6;
    ValorLetra['x'] = 6;
    ValorLetra['y'] = 6;
    ValorLetra['z'] = 6;
    ValorLetra['k'] = 7;
    ValorLetra['w'] = 7;
    
    int ValorTotal = 0;

    for (int i = 0; i < mensaje.size(); i++) {
        char Letra = mensaje[i];

            Letra = tolower(Letra);
            
            if (ValorLetra[Letra] != 0) {
                
            ValorTotal+= ValorLetra[Letra];
            }

    }
    return ValorTotal;
}
