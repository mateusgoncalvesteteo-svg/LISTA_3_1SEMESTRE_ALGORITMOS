#include <iostream>
using namespace std;

int main() {
    int N;
    char C;

    cin >> N >> C;

    // Pirâmide com N linhas
    for (int i = 0; i < N; i++) {
        for (int esp = 0; esp < N - i - 1; esp++)//LOGICA DA PIRAMIDE
            cout << ' ';

        for (int j = 0; j < 2 * i + 1; j++)//"
            cout << C;

        cout << endl;
    }

    // Base 3x3 centralizada
    for (int i = 0; i < 3; i++) {
        for (int esp = 0; esp < N - 2; esp++)//BASE DA PIRAMIDE
            cout << ' ';

        for (int j = 0; j < 3; j++)
            cout << C;

        cout << endl;
    }

    return 0;
}