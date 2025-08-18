#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    
    int a ,b ;
    char op ;  
    cout << "Value of a : " ;
    cin >> a ; 
cout << endl; 
    cout << "value of b : " ;
    cin >> b ;
cout << endl; 
    cout << "Enter the operation : " ;
    cin >> op ; 
   cout << endl ;  
switch (op)
{
case '+':
    cout <<"The sum is : "<< a+b << endl; 
    break;
    case '-': 
    cout << "The Subtraction is : " << a-b; 
    break;
    case '*': 
    cout << "The product is : " << a*b ; 
    break;
    case '/': 
    cout << "The Division is : " << a/b ; 
    break;
    case '%':
    cout << "The remainder is : "<< a%b; 
    break;
default: cout << "Enter correct operation !! ";
    break;
}
    return 0;
}