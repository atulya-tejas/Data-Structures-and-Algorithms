// pattern 14 : Character Triangle
#include <iostream>
using namespace std;

void pattern(int n){
    for(int i = 1; i <= n; i++){
        char letter = 'A';
        for(int j = 0; j < i; j++){  
            cout << letter << " ";
            letter += 1;
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