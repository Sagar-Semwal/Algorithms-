#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Vehicle{
    public:
    int tyresize;
    string name;
    int lights;
    public:       
   virtual  void show(){
        cout<<"mai to bhyi vehicle ka show hu\n";
    }    
    
};
class Bike:  public Vehicle{   
    public:         
    int handlesize;
    void show(){
        cout<<"mai to pr bike ka show hu\n";
    }
   
};

int main(){
    //compiler pov-vehicle type ka h
    //runtime pov-bike type ka h
Vehicle*a;
Bike b;
a=&b;
a->name="sagar";   
a->show();   
}