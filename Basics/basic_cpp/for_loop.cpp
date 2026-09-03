#include <iostream>
using namespace std;

int main(){
    int low , high ;
    int sum = 0 ;
    cout << "Enter low and high:";
    cin >> low >> high ;
    for(int i = low; i <= high ; i++){
        sum = sum + i ;
    }
    cout << "the sum from " << low << " to " << high << " is: " << sum ;


}