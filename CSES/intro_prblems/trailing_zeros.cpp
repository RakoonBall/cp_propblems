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

void solve(ll n){
    ll count =0;
    for(int i=5;n/i>=1; i*=5){
        count+=n/i;
    }
    print(count);
}

int main(){
    fast;
        //find trailing zeroes
        // ll ans=1;
        int n;cin>>n;
        //gives answer only upto 20 and also exceeds time limit
        // for(int i=1;i<=n;i++){
        //     ans *=i;
        // }
        // int digit=0;int cnt=0;
        // do{
        //     digit = ans%10;
        //     if(digit==0)
        //     cnt++;
        //     ans/=10;
        // }while(digit==0);
        //we use pure math to  solve this problem
        solve(n);
    return 0;
}  
