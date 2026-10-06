//pattern 4 : lower triangle(row\number)
#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Entern n(1-100):";
    cin >> n;
    if(n >= 1 && n <= 100){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << i;
            }
            cout << endl;
        }
    }else{
        cout << "n out of range";
    }
    return 0;
}
