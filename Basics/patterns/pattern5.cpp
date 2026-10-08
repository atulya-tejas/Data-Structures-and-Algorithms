//pattern 5 : decreasing triangle pattern
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n - i); j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// output
// Enter n:4
// ****
// ***
// **
// *