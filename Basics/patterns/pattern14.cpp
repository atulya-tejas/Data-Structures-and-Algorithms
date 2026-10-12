// pattern 14 : Character Triangle
#include <iostream>
using namespace std;

void pattern(int n){
    for(int i = 1; i <= n; i++){
        char letter = 'A';
        for(int j = 0; j < i; j++){  
            cout << letter << " ";
            letter += 1;     
            // this works beacuse 'A' is in ASCII value and it just incriment its vlaue .
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
// A B 
// A B C 
// A B C D 