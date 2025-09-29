#include <iostream>
#include <algorithm>
using namespace std;

int pow(int a,int b){
     if(b==1){
    return a;
 }
 int ans=pow(a,b/2);
    if(b%2==0){

 return  ans*ans;
  }
    else{
        return ans*ans*a;
    }
    return -1;
}

int main(){
    int n,x;
    cout<<"Enter base :";
    cin>>x;
    cout<<"Enter power: ";
    cin>>n;
    cout<<pow(x,n);
}