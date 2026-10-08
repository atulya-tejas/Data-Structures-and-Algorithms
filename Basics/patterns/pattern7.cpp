//pattern 7 : Centered Pyramid Star Pattern
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    for(int i = 1; i <= n;i++ ){
        for(int j = n-i; j > 0; j--){
            cout << " ";
        }
         for(int k = 0; k < (2*i-1);k++){
            cout << "*";
        }
        cout << endl;
    }
}
//output:
//Enter n:4
//     *
//    ***
//   *****