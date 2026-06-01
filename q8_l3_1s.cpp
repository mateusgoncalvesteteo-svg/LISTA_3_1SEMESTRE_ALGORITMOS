#include <iostream>
using namespace std;
int main() {
    float x[3][3];
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++ ) {
            int *px = &x[i][j];
            cout << px << " ";
        }
        cout << endl;
    }
    
    return 0;
}