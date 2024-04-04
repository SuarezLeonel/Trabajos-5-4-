#include <bits/stdc++.h>
using namespace std;

string ConvertirFrase(string f);
int main() {
    string Mensaje;
    cout << "Ingrese el nombre: ";
    getline(cin, Mensaje); 
    
    string MensajeConver=ConvertirFrase(Mensaje);
    cout << "Konnichi wa, " << MensajeConver <<"-san"; 
    return 0;
}

string ConvertirFrase(string f){
    string FraseConvertida;
    for (int i = 0; i < f.size(); i++){
        char Letra = f[i];
        char LetraProx;
        if (i + 1 < f.size()){
            LetraProx = f[i + 1];
        }
        if (Letra != 'N' && Letra != 'n' && Letra != 'A' && Letra != 'a' && Letra != 'E' && Letra != 'e' && Letra != 'I' && Letra != 'i' && Letra != 'O' && Letra != 'o' && Letra != 'U' && Letra != 'u' && Letra != ' '){
            FraseConvertida += Letra;
        if (LetraProx != 'A' && LetraProx != 'a' && LetraProx != 'E' && LetraProx != 'e' && LetraProx != 'I' && LetraProx != 'i' && LetraProx != 'O' && LetraProx != 'o' && LetraProx != 'U' && LetraProx != 'u'){
            FraseConvertida += 'u';
        }
        } 
        else {
            FraseConvertida += Letra;
        }
    }
    return FraseConvertida;
}
