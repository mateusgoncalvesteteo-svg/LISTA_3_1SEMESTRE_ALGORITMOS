#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, T;

    cin >> N;//quantidade de elementos

    float v[10000];

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    cin >> T;

    if (N <= 1000) {//validaçao top

        for (int i = 1; i < N; i++) {
            float chave = v[i];
            int j = i - 1;

            if (T == 0) {//ordenaçao no caso t=0
                while (j >= 0 && v[j] > chave) {
                    v[j + 1] = v[j];
                    j--;
                }
            } else {
                while (j >= 0 && v[j] < chave) {
                    v[j + 1] = v[j];
                    j--;
                }
            }

            v[j + 1] = chave;
        }

    } else {

        sort(v, v + N);

        if (T == 1) {//ordenaçao no caso t=1
            for (int i = 0; i < N / 2; i++) {
                float aux = v[i];
                v[i] = v[N - 1 - i];
                v[N - 1 - i] = aux;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }

    return 0;
}