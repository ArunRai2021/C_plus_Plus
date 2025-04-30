#include <iostream>
using namespace std;

int main() {
 int arr[5] = {1,2,2,1,3};
 int n =5;
 int count = 0;
 for(int i =0;i<n;i++){
  count = count^arr[i];
 }
 cout<<count<<endl;
    return 0;
}