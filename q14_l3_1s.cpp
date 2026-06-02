#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;//tamanho do vetor

    int v[1000];

    // leitura do vetor
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    // maior e menor
    int maior = v[0];//inicializando e declarando
    int menor = v[0];

    for (int i = 1; i < N; i++) {
        if (v[i] > maior) {//um loop basico
            maior = v[i];
        }
        if (v[i] < menor) {//""
            menor = v[i];
        }
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    // contagem de ocorrências
    for (int i = 0; i < N; i++) {

        int count = 0;

        // conta quantas vezes v[i] aparece
        for (int j = 0; j < N; j++) {
            if (v[i] == v[j]) {//v[i]  é o que queremos
                count++;
            }
        }

        cout << v[i] << " aparece " << count << " vez(es)" << endl;
    }

    return 0;
}