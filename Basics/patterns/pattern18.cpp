// pattern 18 : Alphabetical Increasing Triangle Pattern.
#include <iostream>
using namespace std;

void pattern(int n){
    for(int i = 1; i <= n;i++){
        for(char ch = 'A' + (n - i); ch <= 'A' + (n - 1); ch++){
            cout <<  ch ;
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
// D
// CD
// BCD
// ABCD