#include <iostream>
#include <string>
using namespace std;
int main() {
    int i, j;
    string S;
    
    cout << "Digite a string S: " << endl; // ler a string primeiro
    cin >> S;
    
    cout << "Digite o valor de i: " << endl;//ler o valor de i
    cin >> i;
    
    cout << "Digite o valor de j: " << endl;//ler o valor de j
    cin >> j;
    
    if(i<0 || j<0 || i>=sizeof(S) || j>=sizeof(S) || i>j) {
        cout << "Indices invalidos" << endl; // validaçao dos indices
    }
    
    for(int k = i-1; k<j; ) {
        cout << S[k];
        k++;//agora o codigo vai ler do indice i até o j
    }
    
    return 0;
    
}