#include <iostream>
using namespace std;
int fib(int x) {
   if((x==1)||(x==2))    return 1 ;
    return(fib(x-1)+fib(x-2));
   }

int main() {
   int x ;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
 for(int i=1;i<=x;i++){
      cout << " " << fib(i);
     
 }

}