#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;//TEXTO
    int N;//DESLOCAMENTO

    cout << "Digite o texto: ";
    getline(cin, texto);

    cout << "Digite o deslocamento: ";
    cin >> N;
//CIFRA DE CESAR
    for (int i = 0; i < texto.length(); i++) {
//FUNCIONAMENTO DA CIFRA
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = ((texto[i] - 'A' + N) % 26) + 'A';
        }
        else if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = ((texto[i] - 'a' + N) % 26) + 'a';
        }

    }

    cout << "Texto criptografado: " << texto << endl;

    return 0;
}