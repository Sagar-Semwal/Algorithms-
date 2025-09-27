//factorial through recursion 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    return n*fact(n-1);

}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"THE FACTORIAL OF" <<" "<< n <<" "<< "IS" <<" "<< fact(n);
}


