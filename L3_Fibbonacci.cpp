// Fibbonacci : 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 ...
// Concept is a , b , c ; where c = a+b 
// Warning !! : number will overflow in "int" data type and in long long data type number will alkso overflow but can store a larger number than int 
#include <iostream>
using namespace std ;
int main (){
    long n ;
    cin >> n ; 
    long long a = 0 ;
    long long b = 1; 
    cout << a <<" " << b <<" ";
    for ( int i = 1 ; i <= n; i++)
    {
        long long c = a+b ; 
        cout << c <<" "; 
        a=b ; // Firstly a = a now after next step a will have value of b 
        b=c ; // and b will have value of c .... again making it a+b = c 
        


    }
    
}