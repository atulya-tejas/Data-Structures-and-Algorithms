// pattern 2 : lower triangle
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// pattern for n = 4
// *
// **
// ***
// ****