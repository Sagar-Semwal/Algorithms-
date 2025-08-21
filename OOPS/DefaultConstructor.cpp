#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class Bike{
        public:
        int tyresize;
        //default constructor
        Bike(){
            cout<<"construcotr ko call lgi"<<endl;
        }
    };
int main(){
    Bike honda; //cnstructior ko call lgegi
    Bike tvs;
    
}