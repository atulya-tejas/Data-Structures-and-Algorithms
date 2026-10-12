// pattern 
#include <iostream>
using namespace std;

void pattern(int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            count += 1;
            cout << count << " ";
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