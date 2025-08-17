/*
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
    cout << "The solution of the problem is : "<< prod - sum ; 
    
    return 0;
}  
*/

/*
// Q. Find 1's Compliment of an integer...

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    
 int n ;
 cin >> n ; 
 int m = n ; 
 int mask = 0 ; 
 
 while (n != 0)
// Logic of creating mask in Notes (Questions)
 {
    n = n >> 1 ; 
    mask = (mask << 1) | 1 ;
     
 }
   int ans = ~m & mask ; 
    cout << ans ; 
    
    return 0;
}
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    
    float n ;
    cin >> n ;
    while (n >1 )

    { n = n /2 ; }

    if (n == 1 )
        {cout <<"True" << endl;} 
       
       else
       {cout << "False";}

    return 0;
}