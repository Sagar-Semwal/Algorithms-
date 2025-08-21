#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class A{
int a_private=10;
public:
friend void show(A &a);

    };
void show(A &a){
    cout<<a.a_private<<endl; //i am able to access private data members because of this friend function.
    }

int main(){
    A a;
   show(a);
    
}