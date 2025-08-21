#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Gun{
    public:
    int damage;
    int ammo;
    int scope;
};
    class Player{
        class Helmet{
        int hp;
        int level;
        public:
        void setHp(int hp){
            this->hp=hp;
        }
        void setlevel(int level){
            this->level=level;

        }
        int gethp(){
            return hp;

        }
        int getlevel(){
            return level;
        }
    };
private:
    int health;
    int score;
    int age;
    bool alive;
    Gun gun; //object of class Gun
    Helmet helmet; //object  of class Helmet
    
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
    void setHelmet(int level){
    Helmet *helmet= new Helmet;  //dynamically making helmets 
    helmet->setlevel(level);

    int health=0;
    if(level==1) health=25;
    else if(level==2) health =50;
    else if(level==3) health=100;
    else cout<<"error,invalid level";
    helmet->setHp(health);
    this->helmet=*helmet;
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
 
    void gethelmet(){
     cout<<helmet.gethp()<<endl;
     cout<<helmet.getlevel()<<endl;  
    }
    };
  
int main(){
    Player sagar;    
    Player shivam;   
    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=2;
   

    sagar.setHealth(100);
    sagar.setage(19);
    sagar.setscore(1200);
    sagar.setisalive(true);
    sagar.setgun(akm);
    sagar.setHelmet(2);
    Gun awm;
    awm.ammo=20;
    awm.damage=500;
    awm.scope=8;

    shivam.setage(18);
    shivam.setHealth(90);
    shivam.setisalive(false);
    shivam.setscore(1000);
    shivam.setgun(awm);
    shivam.setHelmet(3);

    Gun gun123=sagar.getgun();
    cout<<gun123.ammo<<endl;
    cout<<gun123.damage<<endl;
    cout<<gun123.scope<<endl;
sagar.gethelmet();
shivam.gethelmet();
 
   


   
   
  
    
}