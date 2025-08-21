#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Gun{
    int damage;
    int ammo;
    int scope;
};
    class Player{
private:
    int health;
    int score;
    int age;
    bool alive;
    Gun gun;
public:
    void setHealth(int health){
        this->health=health;
    }
    void setscore(int score){
        this->score=score;
    }
    void setage(int age){
        this->age=age;
    }
    void setisalive(bool alive){
        this->alive=alive;
    }
    void setgun(Gun gun){
        this->gun=gun;
    }
    int gethealth(){
     return health;
    }
    int getscore(){
     return score;
    }
    int getage(){
     return age;
    }
    int getisalive(){
     return alive;
    }
    Gun getgun(){
        return gun;
    }
    
    };
    int addscore(Player a ,Player b){
        return a.getscore()+b.getscore();
    }
    Player getmaxscore(Player a ,Player b){
        if(a.getscore()>b.getscore()) return a;
        else return b;
    }
int main(){
    Player sagar;    //static memory allocation 
    Player shivam;   // static memoryt allocation
    Player *hacker=new Player;  // dynamic memory allocatoin

    sagar.setHealth(100);
    sagar.setage(19);
    sagar.setscore(1200);
    sagar.setisalive(true);

    shivam.setage(18);
    shivam.setHealth(90);
    shivam.setisalive(false);
    shivam.setscore(1000);


    hacker->setage(100);
    hacker->setHealth(10000);
    hacker->setisalive(true);
    hacker->setscore(10000000);


    cout<<addscore(sagar,shivam)<<endl;
    Player akki=getmaxscore(sagar,shivam);
    cout<<akki.getscore()<<endl;
    cout<<akki.gethealth()<<endl;
    cout<<hacker->getage();
    cout<<hacker->getisalive();

    
}