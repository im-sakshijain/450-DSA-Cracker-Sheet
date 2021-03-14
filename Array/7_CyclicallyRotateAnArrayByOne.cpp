#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n; i++) {
        cin>>arr[i];
    }
    int last = arr[n-1];
    for(int i = n-2;i>=0;i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = last;
    for(int i = 0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n; i++) {
        cin>>arr[i];
    }
    rotate(arr,arr+4,arr+n);//stl fxn 
    for(int i = 0;i<n;i++) {
        cout<<arr[i]<<" ";
     }
}

//input 
//5
//1 2 3 4 5
//output
//5 1 2 3 4 5