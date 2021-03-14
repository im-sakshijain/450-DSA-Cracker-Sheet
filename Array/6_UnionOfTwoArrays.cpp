#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n],arr2[m];
    set <int> s;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
        s.insert(arr[i]);
    }
     for(int j = 0; j<m; j++) {
        cin>>arr2[j];
        s.insert(arr2[j]);
    }
    cout<<s.size()<<endl;

    return 0;

}