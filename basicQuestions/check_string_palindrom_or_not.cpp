#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"enter the String that you want to check"<<endl;
    cin>>str;
    string palindrom = str;
    int n = str.length();
    for(int i = 0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
    if(str == palindrom){
        cout<< "your enter string is Palindrom"<<endl;
    }
    else{
        cout<<"it is not a Plainddrom"<<endl;
    }
}