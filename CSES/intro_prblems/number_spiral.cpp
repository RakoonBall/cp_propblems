#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<'\n'
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1000000007;

int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>y>>x;
        if(y>x){
            if(y%2==0){
                cout<<(1LL*y*y-(x-1))<<endl;
            }else{
                cout<<1LL*(y-1)*(y-1)+1+(x-1)<<'\n';
            }
        }else{
            if(x%2!=0){
                cout<<1LL*x*x-(y-1)<<'\n';
            }else{
                cout<<(1LL*(x-1)*(x-1)+1+(y-1))<<endl;
            }

        }
    }
    return 0;
}  
