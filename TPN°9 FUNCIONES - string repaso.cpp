#include <bits/stdc++.h>
using namespace std;

string InvertirTexto(string Texto, int inicio, int fin);
string ObtenerTextoInvertido(string Texto);

int main() {
    string Mensaje;
    cout << "Ingrese la Frase: ";
    getline(cin, Mensaje); 
    
    int inicio, fin;
    cout << "Ingrese la posición de inicio: ";
    cin >> inicio;
    cout << "Ingrese la posición de fin: ";
    cin >> fin;

    string MensajeInvertido = InvertirTexto(Mensaje, inicio, fin);
    cout << "Frase descubierta: " << MensajeInvertido;
    
    return 0;
}

string InvertirTexto(string Texto, int inicio, int fin) {
    reverse(Texto.begin() + inicio, Texto.begin() + fin + 1);
    return Texto;
}
