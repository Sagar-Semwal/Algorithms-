#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1) + stair(n-2);
}
int main(){       //time complexity of it is 1 + 2 + 4 + 8----------n terms from gp their sum is 2 to the power n minus 1 that is 0(2 ki power n)
    int n;
    cout<<"ente the number: ";
    cin>>n;
   cout<< stair(n)<<" ways";
    
}