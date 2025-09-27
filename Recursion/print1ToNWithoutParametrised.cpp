                                                       //after recursive call 


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}


int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    print(n);
}