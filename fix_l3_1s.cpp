#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    int N;
    clock_t inicio, fim;
    double tempo_decorrido;
    
    //srand((unsigned)time(NULL));

    cin >> N;
    inicio = clock();
    for(int i = 0; i < N; i++) {

        int numero = rand() % 701 - 200;

        cout << numero << " ";
    }
    
    cout << endl;
    
    fim = clock();
    tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;
    cout << "Tempo de execucao: " << tempo_decorrido << " segundos" <<  endl;

    return 0;
}


//N = 100000 = 2,194 segundos; N = 10000 = 0,233 segundos; N = 1000 = 0,025 segundos; N = 100 = 0,004 segundos; N = 10 = 0, 003 segundos;