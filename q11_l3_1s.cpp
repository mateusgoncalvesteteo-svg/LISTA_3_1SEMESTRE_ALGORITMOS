#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    
    cout << "Digite uma string: ";
    cin >> str;

    bool palindromo = true;//começa como verdadeiro
    //logica do codigo
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - 1 - i]) {///final da string
            palindromo = false;//se for diferente do final
            break;
        }
    }

    if (palindromo)
        cout << "Eh palindromo." << endl;
    else
        cout << "Nao eh palindromo." << endl;

    return 0;
}