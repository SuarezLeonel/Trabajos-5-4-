#include <bits/stdc++.h>
using namespace std;

int ContarLetraA(string f);

int main() {
    string Frase;
    cout << "Ingrese una frase: ";
    getline(cin, Frase);

    int CantLetraA = ContarLetraA(Frase);
    cout << "La cantidad de letras A en la frase es: " << CantLetraA << endl;

    return 0;
}

int ContarLetraA(string f){
    int contador = 0;
    
    for (int i=0;i< f.size();i++) {
        char letra = f[i];
        
        if (letra=='A'|| letra=='a')
            contador++;
        }
        return contador;
    }
