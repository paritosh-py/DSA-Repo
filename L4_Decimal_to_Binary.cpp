#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    
    int n ; 
    cin >> n ; 
    int ans = 0 ; 
    int bit;
    int i = 0 ;
    while (n != 0 )
    {
        bit = n & 1 ;
        ans = ans+(bit * pow(10,i));   // ans = bit + (ans * pow(10 , i )); --> didnt used cuz  
        n=n>>1;                       // we write the output bits in reverse...
        i++ ; 
    }
    cout << "answer is " << ans ;
    
    return 0;
}