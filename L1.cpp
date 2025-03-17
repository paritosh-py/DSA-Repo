#include <iostream>
using namespace std;
int main(){

int a = 7;
cout << a <<endl ;

char b = 'S' ; 
// char b = 'ss' --> This cant be written as char only stores single variable
cout << b << endl;

bool c = false ;
cout << c << endl;

float d = 7.7 ;
cout << d << endl;

double e = 7.77;
cout << e << endl;

// Sizeof() -> This gives the size of any data type 
int size0 = sizeof(int);
cout << "The Size of Data type 'INT' is : " << size0 << endl;

int size1 = sizeof(char);
cout << "The Size of Data type 'CHAR' is : " << size1 << endl;

int size2 = sizeof(bool);
cout << "The Size of Data type 'BOOL' is : " << size2 << endl;

int size3 = sizeof(float);
cout << "The Size of Data type 'FLOAT' is : " << size3 << endl;

int size4 = sizeof(double);
cout << "The Size of Data type 'DOUBLE' is : " << size4 << endl;


int i = 'a';
cout << i << endl;
// OUTPUT : 97 ... As the data type is int so result will be in int so a gets converted to ASCII value ... lly for char

char ch = 98;
cout << ch << endl;
// In ASCII table 98 <-> b so Result will be "b"


int a = 4 ;
int b = 5 ;
bool i = (a==b);
cout << i << endl;
// lly we can use other operators for       
}

