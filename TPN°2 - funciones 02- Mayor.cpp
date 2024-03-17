#include <bits/stdc++.h>
using namespace std;

int EstMayor(int a, int b, int c);

int main(){
	int n1,n2,n3, NumMax;
	cin >> n1 >> n2 >> n3;
	NumMax=EstMayor(n1,n2,n3);
	cout<<NumMax;
}

int EstMayor(int a, int b, int c) {
    int NumMax = a; 
    if (b > NumMax) {
        NumMax = b;
    }
    if (c > NumMax) {
        NumMax = c; 
    }
    return NumMax;
}
