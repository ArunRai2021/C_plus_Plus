#include <iostream>
using namespace std;

 int main(){
    string str;
    char ch;
    cout<< "enter a String"<<endl;
    cin>>str;
    cout<< "enter a character"<<endl;
    cin>>ch;
    int count = 0;

    for(int i = 0;i<str.length();i++){
        if(str[i] == ch){
            count++;
        }
    }
    cout<<"Total times appeares is "<<count<<endl;



 }