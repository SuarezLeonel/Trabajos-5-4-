#include <bits/stdc++.h>
using namespace std;

bool EsMultiplode3(int n);

int main()
{
	int N1;
	cout<<"Ingrese un numero: "<<endl;
	cin>>N1;
	string Mensaje="NO ES MULTIPLO";
	if(EsMultiplode3(N1)){
    Mensaje="ES  MULTIPLO";}
	cout<<Mensaje<<endl;
	
	return 0;
}
bool EsMultiplode3(int n){
     return n%3==0;
}
