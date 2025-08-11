#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n ;
    cin >> n ; 
    bool is_prime = 1 ;
 for (int i = 2; i < n; i++)
 {
    if (n%i == 0)
    {
        
        is_prime = 0 ; 
        break;
    }
}
    if (is_prime == 0 )
    {
        cout<< n <<" is not a prime number !";
    }
    else
    {
        cout << n <<" is a prime number";
    }
    
 
    
    
    return 0;
}