#include <iostream>
using namespace std;
/// get max function are here
int getMax(int num[],int n){
    int max = -200000;
    for(int i = 0;i<n;i++){
        if(num[i] > max){
         max = num[i];
        };    
    }
    return max;
}
// find get minimum function are here
int getMin(int num[], int n){
    int min = 200000;
    for(int i = 0;i<n;i++){
        if(num[i]< min){
            min = num[i];
        }
    }
    return min;
}

int main(){
    cout<<"enter the size of array"<<endl;
    int size;
    cin>>size;
    int arr[100];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<< "max value in array is "<<getMax(arr,size)<<endl;
    cout<<"min value of array is "<< getMin(arr,size)<<endl;
    return 0;
    
}