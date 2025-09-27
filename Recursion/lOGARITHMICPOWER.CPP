#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int loGpOW(int a ,int b){
 if(b==0) return 1;
 if(b==1) return a;
 if(b%2==0){
    return loGpOW(a,b/2)*loGpOW(a,b/2);
 }
 else{
    return  a*loGpOW(a,b/2)*loGpOW(a,b/2);
 }
}
int main(){
    int a;
    cout<<"enter the number: ";
    cin>>a;
     int b;
    cout<<"enter the number: ";
    cin>>b;
    cout<<loGpOW(a,b);
}