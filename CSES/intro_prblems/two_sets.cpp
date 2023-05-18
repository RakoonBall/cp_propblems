#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define PI (2 * acos(0.0))
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<'\n'
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) for(int i=0; i<n; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1000000007;

int main(){
    fast;
    ll n;
    cin>>n;
    
    if(n%4==1 || n%4==2){
        print("NO");
    }
    if(n%4==0){
        print("YES");
        print(n/2);
        for(int i=3;i<=n;i+=4){
            cout<<i<< " "<< i-1<<" ";
        }
        cout<<endl;
        cout<<n/2<<endl;
        for(int i=1;i<=n;i+=4){
            cout<<i<<" "<<i+3<<" ";
        }
    }else if(n%4==3){
        print("YES");
        print(n/2+1);
        cout<<"1 "<<"2 ";
        for(int i=6;i<=n;i+=4){
            cout<<i<< " "<< i-1<<" ";
        }
        cout<<endl;
        cout<<n/2<<endl;
        cout<<"3 ";
        for(int i=4;i<=n;i+=4){
            cout<<i<<" "<<i+3<<" ";
        }
    }
    return 0;
}  
