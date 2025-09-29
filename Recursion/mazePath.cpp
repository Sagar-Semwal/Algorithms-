#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er ||sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalWays=rightways+downways;
    return totalWays;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er ||sc>ec) return ;
    if(sr==er && sc==ec){
cout<<s<<endl;
return;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');

}
int main(){
    int sr;
    cout<<"enter the starting row: ";
    cin>>sr;
    int sc;
    cout<<"enter the staritng column: ";
    cin>>sc;
int er;
cout<<"enter the ending row: ";
cin>>er;
int ec;
cout<<"enter the ending column: ";
cin>>ec;

printpath(sr,sc,er,ec,"");

}