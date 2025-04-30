#include <iostream>
using namespace std;

void updateArray(int arr[],int n){
    cout<<"inside the function"<<endl;
    // updating array
    arr[0] = 120;
    // printing the array
   for(int i=0;i<3;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"Going back to main function"<<endl;
}

int main() {
int arr [3] = {1,2,3};
   updateArray(arr,3);
   cout<< "printing in main function"<<endl;
for(int i = 0;i <3;i++){
   cout<<arr[i]<<endl;
}

    return 0;
}