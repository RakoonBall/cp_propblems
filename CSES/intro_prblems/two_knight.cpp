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
    int n;cin>>n;
        ll total_combinations = 0, attacking_knights=0;
        for(ll i=1;i<=n;i++){ //ll is very important here aswell 

            total_combinations = ((i*i)*(i*i-1))/2; // use counting 
            attacking_knights = 4*(i-1)*(i-2); // use counting consider that 2x3 and 3x2 block and where we have two knights attaking each other at two positions so we deleter them and another 2 we get for the same combination of (i-1)*(i-2)

            cout<<(total_combinations-attacking_knights+0LL)<<endl;
        }
      
    
    return 0;
}  
