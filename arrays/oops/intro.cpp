#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    
};

int main(){
    Hero ramesh;
    ramesh.health = 70;
    ramesh.level ='A';
  cout<<"Health is"<<ramesh.health<<endl;
  cout<<"lever is"<<ramesh.level;
    return 0;

}