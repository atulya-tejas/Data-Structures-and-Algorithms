// pattern 15 : Row Character Triangle
#include <iostream>
using namespace std;

void pattern(int n){
    char letter = 'A';
    for(int i = 0; i < n;i++){
        for(int j = 0; j <= i ;j++){
            cout << letter;
        }
        letter += 1;
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