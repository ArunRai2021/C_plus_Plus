#include <iostream>
using namespace std;
int main() {
cout<<"enter the size of an array"<<endl;
int n;
cin>>n;
int sum = 0;
int arr [n];
cout << "Enter " << n << " elements:" << endl;
for(int i=0 ;i<n;i++){
    cin>>arr[i];
}
 cout << "You entered:" << endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
for(int i = 0;i<n;i++){
    sum = sum +arr[i];
}
cout<<"the sum of array is "<<sum<<endl;
    return 0;
}