#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"enter the number which you want to check the power of 2"<<endl;
  cin>>n;
  bool isPowerof2 = false;
  for(int i = 1;i<=n;i= i*2){
   if(i == n){
       isPowerof2 = true;
       break;
   }
  }
  
  if(isPowerof2){
       cout << "Yes, this is a power of 2." << endl;
  }
  else{
      cout<<"no this is not the power of two"<<endl;
  }
  
    return 0;
}