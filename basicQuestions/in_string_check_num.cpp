#include <iostream>
using namespace std;

bool checkisDigit(char ch) {
    return ch >= '0' && ch <= '9';
}
int main() {
    string str;
   cout<<"enter the value which you want you check"<<endl;
   cin>>str;
   int n = str.length();
   int count = 0;
   for(int i =0;i<n;i++){
       if(checkisDigit(str[i])){
           count++;
       }
   }
   cout<<"total Numeric digit is "<< count <<endl;
    return 0;
    
}