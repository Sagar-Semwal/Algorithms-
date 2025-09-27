#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}


int main(){
    int n;
    cout<<"ente the number: ";
    cin>>n;
    print(1,n);
}