#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);       //TC:0(b)
         }                      //SC:0(b) STACK FRAMES


int main(){
    int a;
    cout<<"enter the number: ";
    cin>>a;
     int b;
    cout<<"enter the number: ";
    cin>>b;
    cout<<pow(a,b);
}
