#include <iostream>
using namespace std;
int main() {
/* int i ;
cout << "Enter the value of i : ";
cin >> i ;
cout << "The value of i is :" << i << endl; */ 

/*int n ;
cout<< "Value of n is : " ;
cin >> n;
int i = 1;
while (i<=n)
{
    cout << i << " " ; 
    i++;
}*/

/*int n ;
cout << "Till Where you want to find the sum : " ;
cin >> n;
int i = 1 ;
int c = 0  ;
while (i<=n)
{
   
   c = c+i ;
   i++;
}
cout << "The sum from 0 to "<<n<<" is: " << c ;*/


/* Finding Sum of Even numbers till n 
int n ;
cout << "Even Numbers Till n :" ;
cin >> n; 
int  i =1 ;
int c =0;
while (i<=n) 
{
if (i % 2 ==0)
 {
  c=c+i;
 }
 i++;
}
cout << "The sum of even numbers till " <<n<< " is : " << c ;
} */
// int n ;
// cin >> n;
// int i = 0 ;
// int sum = 0 ;
// while (i<=n)
// {
// sum = sum +i;
// i= i+2 ;
// }
// cout << sum ;
// }

// Print Even numbers till a value
/*int n;
cout << "Enter the limit :";
cin >> n ;
int i = 0;

while (i<n)
{
    i=i+2;
 
 cout << i << endl;   
}
OUTPUT : n=10 -> 2,4,6,8,10
} */



//Print ODD numbers till a value 

/*int n ;
cout << "Enter the limit";
cin >> n;
int i =1 ;
cout << i << endl;
while (i<n-1)
{
    i=i+2;
    cout << i << endl;
}
} */

/*int n ;
cin >> n;
int i=0 ;
int sum = 0 ;
while (i<n-1)
{
    i=i+2;
    sum = sum+i;
}
cout << sum;
}
*/
/* int n ;
cin >> n;
int i = 1;
int sum = 0 ;
while (i<n)
{
    i=i+2;
    sum = sum + i ;
}
cout << sum ;
} */

// Prime Number printing
/*
int n ;
cin >> n;
int i = 2;
while (i<n)
{
    if (n%i==0)
    {
        cout<< n<<" is not prime number as " << n<<" is divisible by "<<i << endl;
       }   
    
    if (n%i!=0)
    {
        cout<< n<<" is prime number "<<endl;
    }
    

    i++;
    
}
}*/

/*int n; 
cin >> n;
int i = 1;
while (i<=n)
{
    int j =1 ;
    while (j<=n)
    {
         
        cout<<i ;
        j++;
       
    }
   
    cout <<endl;
    i++;
    
}*/
/* int n ;
cin >> n ;
int i = 1 ;
while (i<=n)
{
    int j = 1  ;
    while (j<=n)
    {
      cout<< j <<" ";  // For reverse Printing : "Cout << n-j+1"    

    j++;
        
    }
    i++;
    cout << endl;
    
} */

/* int n;
cin >> n;
int i = 1 ;
 int counting =1;
while (i<=n)
{
   int j =1;
    while (j<=n)
    {
        cout << counting <<" ";
        counting++;
        j++;
        
    }
    cout << endl;
    i++;
    
}*/

/* int n;
cin >> n;
int i =1;
while (i<=n)
{
    int j = 1 ;
    while (j<=i)
    {
      cout<< "*" ;
        j++;
    }
    i++;
    cout<< endl;
} */

/* int n;
cin >> n;
int i = 1 ;
while (i<=n)
{
    int j = 1;
        while (j<=i)
        {
            cout << i;
            j++;
        }
      cout << endl;
      i++;  
} */

/* int n;
cin >> n;
int i =1;
int counting = 1;
while (i<=n)
{
    int j =1 ;
   
    while (j<=i)
    {

         cout << counting<<" ";
         counting++;
         j++;
    }
    cout << endl;
    counting--;
    i++;
} */


/* int n ;
cin >> n;
int i = 1 ;
while (i<=n)
{
    int j = 1 ;
    int s =i;
    while (j<=i)
    {
       cout<< s ;
       s++; 
       j++;
    }
    cout << endl;
    i++; */
 
/* int n ;
cin >> n;
int i = 1 ;
while (i<=n)
{
    int j = 1 ;
    while (j<=i)
    {
        cout << i+j-1;
        
        j++;
    }
    cout << endl;
    i++;
    
} */


/* int n ;
cin >> n;
int i =1 ; 
while (i<=n)
{
    
    int j =1;
    while (j<=i)
    {
        cout << i-j+1<<" ";  // We made the the formula here... avoiding the assignment of value of i 
        j++;
    }
    i++;
    cout << endl;

} */

/*int n ;
cin >> n;
int i =1 ; 
while (i<=n) {

    int s = i;
    int j = 1;
    while (j<=i)
    {
        cout<< s<<" ";
        s--;
        j++;
    }
    i++;
    cout<< endl;

} */
/* int n ;
cin >> n ;
int i = 1 ;
while (i<=n)
{
    int j =1 ;
    char print = 'A'+i-1;
    while (j<=n)
    {
        cout << print;
        j++;
    }
    cout << endl;
    i++;
} */

/* int n ;
cin >> n;
int i = 1 ;
while (i<=n)
{
    int j =1 ; 
    
    while (j<=n)
    {
        char printer = 'A'+j-1 ;
        cout << printer<<" " ;
        j++;
    }
   cout << endl;
   i++; 
} */


/* int n ;
cin >> n;
int i = 1 ;
char count = 'A';
while (i<=n)
{
   int j =1;
   while (j<=n)
   {
    cout << count ;
    count ++;
    j++;
   }
   i++;
   cout << endl;
}  */


/* int n;
cin >> n ;
int i = 1 ;
while (i<=n)
{
    int j = 1 ; 
    char printer = 'A' + i - j ; 
    while (j<=n)
    {
        cout << printer;
        j++;
        printer ++;
    }
    i++;
    cout << endl;
}  */

/* int n ;
cin >> n ;
int i =1 ;

while (i<=n)
{
    
    int j = 1 ; 
    while (j<=i)
    {
        char ch = 'A'+i-1; 
        cout << ch ;
        j++;
    }
    i++;
    cout << endl;
} */


/* int n ;
cin >> n ; 
int i = 1 ; 
char count = 'A';
while (i<=n)
{
    int j = 1 ; 
    while (j<=i)
    {
        cout << count ; 
        count ++ ;
        j++ ;

    }
    i++;
    cout << endl;
} */ 

/* int n ;
cin >> n ;
int i = 1 ; 
while (i<=n)
{
      
    int j = 1 ; 
    char Starter = 'A' + i - j ;
    while (j<=i)
    {
        cout << Starter ;
        Starter++ ;
        j++;
    }
    i++;
    cout << endl;
} */

/* int n ; 
cin >> n ; 
int i = 1 ; 
while (i<=n)
{
    int j = 1 ;
    char starter = 'A' + n - i ;
    while (j<=i)
    {
        cout << starter ; 
        starter++ ;
        j++ ;
    }
i++ ;
cout << endl;    
} */


// PATTERNS WITH < SPACE > //

// int n ; 
// cin >> n ; 
// int i = 1 ; 
// while (i<=n)
// {
//     int spaces = n-i ;  
//     while (spaces )
//     {
//     cout << " ";
//     spaces--;
//     }
//     int j = 1 ; 
//     while (j<=i )
//     {
//         cout << "*";
//         j++;
//     }
//     i++;
//     cout << endl;
// }

int n ; 
cin >> n ; 
int i = 1 ; 
while (i<=n)
{
    int stars = n-i+1 ;  
    while (stars )
    {
    cout << "*";
    stars--;
    }
    int j = 1 ; 
    while (j<=i )
    {
        cout << "`";
        j++;
    }
    i++;
    cout << endl;
}

//  int n ;
// cin >> n ; 
// int i = 1 ; 
// while (i<=n)
// {

//     int stars = n-i+1;
//     while (stars )
//     {
//         cout << "*";
//         stars -- ;
//     }
//     i++;
//     cout << endl;
// }  

// int n ; 
// cin >> n ; 
// int i = 1 ;
// while (i <= n)
// {
//     int j = 1 ;
//     int stars = n-i+j;
//    int spaces = i-j ;
//    while (spaces)
//    {
//     cout << " ";
//     spaces ++; 
//     j++;
//    }
//    while (stars)
//    {
//     cout << "*";
//     stars++;
//     j++;
//     }   
//    i++;
//    cout << endl;
// }

}