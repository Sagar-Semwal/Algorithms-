#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


class Cricketer{
    public:
    char name;
int age;
int matches;
int avgscore;
};
int main(){
    Cricketer virat;
    virat.name='v';
    virat.age=30;
    virat.matches=300;
    virat.avgscore=50;

    Cricketer dhoni;
    dhoni.name='d';
    dhoni.age=40;
    dhoni.matches=350;
    dhoni.avgscore=25;
    Cricketer cricketers[2]={virat,dhoni};
    for(int i=0;i<2;i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].matches<<endl;
        cout<<cricketers[i].avgscore<<endl;

    }
    
}