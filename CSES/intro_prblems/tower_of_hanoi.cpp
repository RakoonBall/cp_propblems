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

void tower(int s, int m, int d, int n){
    if(n == 0) return ;
    tower( s, d, m, n-1);
    cout<< s<< " "<< d<<endl;
    tower( m, s, d, n-1);
}

int main(){
    fast;
    ll n;cin>>n;
    cout<< pow(2,n)-1<<endl;
    tower(1,2,3,n);
    return 0;
}  
