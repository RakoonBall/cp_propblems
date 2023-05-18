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
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2 == 0){
            n= n/2;
            printf("%lld ", n);
        }else{
            n = n*3 +1;
            printf("%lld ", n);
        }
    }
    return 0;
}  
