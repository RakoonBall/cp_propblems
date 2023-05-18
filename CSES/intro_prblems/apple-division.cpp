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
    ll t=1;
    // cin>>t;
    while(t--){
        ll total = 0;
        ll ans = INT_MAX;
        ll n;cin>>n;

        ll v[n+1];
        rep(i,n){
            cin>>v[i];
            total+=v[i];
        } 
        //in this problem we create subsets using bits and just take their sum a very important problem to show the importance of knowing major problems 
        for(int i=0;i<(1<<n);i++){
            ll c=0;
            for(int j=0;j<n;j++){
                if(i&(1<<j)) c+=v[j];
            }
            //take the minimum 
            ans = min(ans, abs(total-2*c));
        }
        cout<<ans<<endl;
    }
    return 0;
}  
