// pattern 17 : Character Pyramid
#include <iostream>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n;i++){
        for(int j = n - i - 1 ; j > 0; j--){
            cout << " ";
        }
        for(char k = 'A'; k <= 'A' + i ;k++){
            cout << k;
        }
        for(char l = 'A' + (i - 1); l >= 'A' ;l--){
            cout << l;
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
// A
// BB
// CCC
// DDDD