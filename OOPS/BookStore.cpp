#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class Book{
        public:
char name;
int price;
int pages;

int countbooks(int p){
    if(price<p) return 1;
    else return 0;
}
bool ispresent(char book){
    if (name==book) return true;
    else return false;

}
    };
int main(){
    Book harryporter;
    harryporter.name='h';
    harryporter.price=1000;
    harryporter.pages=50;
    cout<<harryporter.countbooks(1500)<<endl;
    cout<<harryporter.ispresent('k');
    
}