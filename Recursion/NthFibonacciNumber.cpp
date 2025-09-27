#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fibo(int n){
    if(n==1|| n==2) return 1;
    return fibo(n-1)+fibo(n-2);   
}
int main(){        //time complexity of it is 1 + 2 + 4 + 8----------n terms from gp their sum is 2 to the power n minus 1 that is 0(2 ki power n)
    int n;
    cout<<"enter the number: ";
    cin>>n;
   
cout<<fibo(n)<<" ";

}