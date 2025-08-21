#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    
    // void add(int a ,int b){
    //     cout<<a+b<<endl;
    // }
    // void add(int a,double b){    //void add(int a,double b)--allowed
    //     cout<<b+a;
    // }
    void calculatearea(int l,int b){
        cout<<l*b<<endl;
    }
      void calculatearea(int s){
        cout<<s*s<<endl;
    }
      void calculatearea(double s){
        cout<<3.14*s*s<<endl;
    }
int main(){
// add(1,2);
// add(5,5.3);
calculatearea(5);
calculatearea(5.2);
calculatearea(4,3);

 }