#include <iostream>
#include <vector>
using namespace std;
int main() {
    float num;
    vector<float> x;
    vector<float> fx;
    int tamanho = 0;
//LEITURA DO NUM
    cout << "Escreva o 5 numeros: " << endl;
    for(int r = 0; r<5; r++ ) {
        cin >> num;
        x.push_back(num);
        fx.push_back(num);
        tamanho++;
    }
    
//PECORRENDO VETOR X E MOSTRANDO ELE
    cout << "Mostrando vetor X" << endl;
    for(int i = 0; i<tamanho; i++ ) {
        cout << x[i] << " ";
    }
    cout << endl;

//PECORRENDO VETOR FX E MOSTRANDO ELE
    cout << "Mostrando vetor FX" << endl;
    for(int j = 0; j<tamanho; j++) {
        cout << fx[j]*2 << " ";
    }
    
    return 0;
    
}