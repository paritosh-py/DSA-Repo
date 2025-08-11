#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    
    int n  ;
    cout << "Enter Number : ";
    cin>> n ;
    int prod = 1; 
    int sum = 0 ;
    while (n!=0)
    {
       int last_digit = n%10 ;
         
        prod = prod * last_digit; 
        sum = sum + last_digit;
        n = n/10 ; // We dont have to declare a new variable here cuzz we need to...
    }              // update the value of n 
    cout << prod - sum ; 
    
    return 0;
}