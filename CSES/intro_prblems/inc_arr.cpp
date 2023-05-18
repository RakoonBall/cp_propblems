#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long s=0;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            s=s+a[i]-a[i+1];        
            a[i+1] = a[i];
        }
    }
    cout<<s;
}