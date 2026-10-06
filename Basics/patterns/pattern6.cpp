// pattern 6 : decreasing number triangle pattern(column).
#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter n:";
    cin >> n;
    for(int i = 0;i < n; i++){
        for(int j = 1; j <= (n-i); j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

// output
// Enter n:4
// 1234
// 123
// 12
// 1