#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    //kadane's Algorithm
    int currSum = arr[0],maxSum = arr[0];
    for(int i = 1; i<n; i++) {
        currSum = max(currSum+arr[i],arr[i]);
        maxSum = max(maxSum,currSum);
    }
    cout<<maxSum<<endl;
}