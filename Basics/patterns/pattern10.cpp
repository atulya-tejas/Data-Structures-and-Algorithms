//pattern 10 : Increasing-Decreasing Triangle Pattern.
#include <iostream>
using namespace std;

void pattern(int n){
    for(int i = 1; i <= (2*n - 1);i++){
        int star = (i <= n)? i : 2*n - i;
        for(int j = 0; j < star ;j++){
            cout << "*";
        }
        cout << endl;

    }
}

int main(){
    int n;
    cout << "Enter n:";
    cin >> n ;
    pattern(n);
    return 0;
}

// output:
// Enter n:4
// *
// **
// ***
// ****
// ***
// **
// *