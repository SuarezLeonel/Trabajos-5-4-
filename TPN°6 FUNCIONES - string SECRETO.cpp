#include <bits/stdc++.h>
using namespace std;

string InvertirTexto(string Texto);
string ArmarFrase(string Texto);

int main() {
    string Mensaje;
    cout << "Ingrese la Frase: ";
    getline(cin, Mensaje); 
    
    string MensajeConver = InvertirTexto(Mensaje);
    MensajeConver = ArmarFrase(MensajeConver); 
    cout << "Frase descubierta: " << MensajeConver;
    
    return 0;
}

string InvertirTexto(string Texto) {
    int inicio = 0;
    int fin = 0;
    for (int i = 0; i < Texto.length(); i++) {
        char Letra = Texto[i];
        if (Letra == '(') {
            inicio = i; 
        }
        if (Letra == ')') {
            fin = i; 
            reverse(Texto.begin() + inicio + 1, Texto.begin() + fin);
        }
    }
    return Texto;
}

string ArmarFrase(string Texto) {
    string MensajeParen;
    for(int i = 0; i < Texto.size(); i++) {
        if (Texto[i] != '(' && Texto[i] != ')') {
            MensajeParen.push_back(Texto[i]);
        }
    }
    return MensajeParen;
}
