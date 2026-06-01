#include <iostream>
using namespace std;

int main() {
    int X, Y;
    int *pX = &X, *pY = &Y;

    cin >> X >> Y;

    if (pX > pY) {
        cout << *pX;
    } else {
        cout << *pY;
    }

    return 0;
}