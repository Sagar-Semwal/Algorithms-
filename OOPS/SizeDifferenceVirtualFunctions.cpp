#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Vehicle{
    public:
    int tyresize;
    int enginesize;
    public:       
    virtual  void show(){                                      //agr me virtual nhi lgara hu to size of vehicle is 8 and sizeo bike is 12 
        cout<<"mai to bhyi vehicle ka show hu\n";   //but agr me virtual lgara hu then size becomes 16 and 24
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
    Vehicle a;
    Bike b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;


  
}