#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class Vehicle{                                                        //base class , parent class
        public:
        int tyresize;
        int enginesize;
        int lights;
        string name;
        void showcompany(){
            cout<<name<<endl;
        }
        Vehicle(){
            cout<<"vehicle ka constructor call hua \n";           //pehle vehicle ka constructor call hoga beacause it is parent class .and its object is made in the backend.
        }
    };
    class Bike:public Vehicle{  
        public:                                                          //derived class ,child class 
        int handlesize;
        Bike(){
            cout<<"bike ka construcotr call hua \n";
        }
    };
    // class Car:public Vehicle{                                            //car inherits vehicle
    //    public:
    //     int handlesize;
    // };
int main(){
    Bike honda;                           //object of bike,constructor call hoga 
    honda.handlesize=10;
    honda.enginesize=20;
    honda.tyresize=50;
    honda.name="honda";
    honda.showcompany();
    
    
}