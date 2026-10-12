// pattern 12 : number crown
#include <iostream>
using namespace std;

void pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int k = 2*(n - i); k > 0; k--){
            cout << " ";
        }
        for(int l = i; l > 0 ; l--){
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
// 1      1
// 12    21
// 123  321
// 12344321