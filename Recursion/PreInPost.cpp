#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout<<"PRe"<<n<<endl;
    pip(n-1);
    cout<<"In"<<n<<endl;
    pip(n-1);
    cout<<"Post"<<n<<endl;
}
int main(){
    pip(3);
}