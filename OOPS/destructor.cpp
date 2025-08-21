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
        ~Bike(){
            cout<<"destructor ko call lgi"<<endl;
        }
    };
int main(){
    Bike honda(50,100); 
    Bike tvs(40,100);
    bool flag=true;
    if(flag==true){
        Bike bmw(17,65);
        cout<<bmw.enginesize<<" "<<bmw.tyresize<<endl;
    }
    cout<<honda.enginesize<<" "<<honda.tyresize<<endl;
    cout<<tvs.enginesize<<" "<<tvs.tyresize<<endl;


    
}