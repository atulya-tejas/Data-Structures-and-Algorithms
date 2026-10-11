// pattern 11 : Binary triangle
#include <iostream>
using namespace std;

void pattern(int n){
    for(int i = 0;i < n ; i++){
        int t = (i%2 == 0)? 0:1;  // if row is even then t = 0 else t = 1
        for(int j = 0; j <= i; j++){
            if(t){   // if t = 1 ,change t = 0
                t = 0; 
            }else{ // if t = 0 ,change t = 1
                t = 1;
            }
            cout << t;
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
// 1
// 01
// 101
// 0101