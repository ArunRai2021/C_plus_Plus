// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
int arr[6] = {1,2,3,4,5,3};
int n = 6;
int ans = 0;
for(int i = 0;i<n;i++){
    ans = ans ^arr[i];
    cout<<ans<<endl;
}
for(int i =1;i<n;i++){
    ans = ans ^ i;
    cout<<ans<<endl;
}
cout<<"the duplicate element is "<<ans<<endl;
    return 0;
}