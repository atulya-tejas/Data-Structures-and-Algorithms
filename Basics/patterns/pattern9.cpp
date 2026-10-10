//pattern 9 : Diamond Star Pattern
#include <iostream>
using namespace std;

void pattern(int n){
    //outer loop runs 2n times
    for(int i = 1; i <= 2*n; i++){
        int gap = n - i;   // base inner loop conditions
        int star = 2*i - 1;
        //inner loop conditions after n iterations
        if (i > n){
            gap = i - n - 1 ;
            star = 2 * (2*n - i + 1) - 1; // formula which make stars reduce in odd numbers
        }
        //inner loops 
        for(int j = 0; j < gap; j++){
            cout << " ";
        }
        for(int k = 0; k < star; k++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    pattern(n);
    return 0;
}

// output
// Enter n:4
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
