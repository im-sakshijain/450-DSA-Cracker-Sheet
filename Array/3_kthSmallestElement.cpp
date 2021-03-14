#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<k<<"th minimum"<<" "<<arr[k-1]<<" "<<k<<"th max"<<" "<<arr[n-k];
}
//1 2 3 4 5 6


