#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String: ";
    getline(cin,s);

    string word,maxWord="";
    stringstream ss(s);
    while(ss>>word){
if(word>maxWord){
    maxWord=word;
}
 }
cout<<maxWord;

}