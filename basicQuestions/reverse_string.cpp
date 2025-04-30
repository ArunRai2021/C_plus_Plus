#include <iostream>
using namespace std;

int main(){
    string myName;
    cout<<"enter the String which you want to reverse"<<endl;
    getline(cin, myName);
   int n = myName.length();
   for(int i = 0;i<n/2;i++){
    swap(myName[i],myName[n-i-1]);
   }
   cout<<"Reversed String are "<< myName <<endl;


}