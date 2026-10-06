// Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.

#include <iostream>
using namespace std;

int main(){
    int d ;
    cout << "Enter the d(0-9):";
    cin >> d;
    int count = 0 ;
    int sum = d ;
    while(count < 50){
        sum += (count * 10);
        cout << sum << endl ;
        count ++;
    }
    cout << "Sum of all +ve digits ending with "<< d << " is: " << sum; 
    return 0;

}