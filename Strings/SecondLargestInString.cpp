#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String : ";
    cin>>s;
int val=0;
int placeValue=1;
    while(s.size()){
        val+=placeValue*(s.back()-'0');
        
        s.pop_back();
        placeValue*=10;
    }

    cout<<val<<": "<<typeid(val).name();

}