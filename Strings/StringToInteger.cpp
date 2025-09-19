#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String : ";
    cin>>s;
int first = -1;
int second=-1;

for(char ch: s){
int digit=ch-'0';

if(digit>first){
    second=first;
    first=digit;

}
else if(digit>second){
    second=digit;
}
}

cout<<first << " "<< second; 

}