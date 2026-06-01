#include <iostream>

using namespace std;

int main() {
    int v[5];
    int *p = v;

    // Leitura usando ponteiros
    for (; p < v + 5; p++) {
        cin >> *p;
    }

    // Impressão do dobro usando ponteiros
    for (p = v; p < v + 5; p++) {
        cout << (*p) * 2 << " ";
    }

    return 0;
}