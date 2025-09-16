#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>
using namespace std;


int main(){
    string str="123456";
    int x = stoi(str);
    cout<<x<<endl;

    string s= "1234567891234";
    long long y = stoll(s);
    cout<<y;
}