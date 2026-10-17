// pattern 19 : Hollow Square
#include <iostream>
using namespace std;

void pattern(int n){
    for (int i = 0; i < 2 * n; i++) {
        int stars = (i < n) ? n - i : i - n + 1;

        for (int j = 0; j < 2 * n; j++) {
            if (j < stars || j >= 2 * n - stars) {
                cout << "*";
            } else {
                cout << " ";
            }
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
 
//outpur:
// Enter n:4
// ********
// ***  ***
// **    **
// *      *
// *      *
// **    **
// ***  ***
// ********