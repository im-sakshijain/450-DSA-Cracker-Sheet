#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0;
    for(i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}