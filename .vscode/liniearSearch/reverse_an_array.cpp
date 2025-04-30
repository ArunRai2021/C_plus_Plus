#include <iostream>
using namespace std;
void swap(int &a,int &b){
   int temp = a;
   a= b;
   b = temp;
}

int main() {
   int arr[10] = {1,2,3,4,5,6};
   int n = 6;
   int start = 0;
   int end = n-1;
  while(start<end){
      swap(arr[start],arr[end]);
      start++;
      end--;
  }
  for(int i =0;i<n ;i++){
      cout<<arr[i] << " ";
  }
  cout<<endl;
 

    return 0;
} 