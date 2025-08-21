#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class Bike{
        public:
        int tyresize;
        int enginesize;
       
        Bike(int tyresize,int enginesize ){
           this->enginesize=enginesize;
           this->tyresize=tyresize;
        }
    };
int main(){
    Bike honda(50,100); 
    Bike tvs(40,100);
    cout<<honda.enginesize<<" "<<honda.tyresize<<endl;
    cout<<tvs.enginesize<<" "<<tvs.tyresize<<endl;


    
}