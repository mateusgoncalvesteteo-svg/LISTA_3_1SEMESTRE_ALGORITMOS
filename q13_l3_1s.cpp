#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;//o tamanho de linhas e colunas

    int matriz[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    int somaPrincipal = 0;
    int somaSecundaria = 0;

    for (int i = 0; i < n; i++) {
        somaPrincipal += matriz[i][i];//diagonal principal
        somaSecundaria += matriz[i][n - 1 - i];//diagonal secundaria
    }

    cout << somaPrincipal + somaSecundaria << endl;

    return 0;
}