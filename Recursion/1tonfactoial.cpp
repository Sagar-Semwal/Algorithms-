//factorial through recursion 
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

// for(int i=1;i<=n;i++){
//     int f=1;                                
//     for(int j=2;j<=i;j++){         //tiem complexity ---------->bad 
//      f*=j;
     
//     }
//   cout<<f<<endl;
// }
// }

int f=1;
for(int i=1;i<=n;i++){
    f*=i;
    cout<<f<<endl;                     //time complexity -------------->good 
}
}