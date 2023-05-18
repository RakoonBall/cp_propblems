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
    string s;
    cin>>s;
    int f[26]={0};
    while(t--){
        rep(i, len(s)){
            f[s[i]-65]++;
        }
        int c=0;
        rep(i,26){
            if(f[i]%2!=0) c++;
        }
        if(c>1) cout<<"NO SOLUTION";
        else{
            for(int i=0;i<26;i++){
                int x= f[i]/2;
                while(x--){
                   printf("%c",i+65) ;
                }
            }

            for(int i=0;i<26;i++){
                if(f[i]%2!=0) printf("%c", i+65);
            }
           
            for(int i=25;i>=0;i--){
                int x = f[i]/2;
                while(x--){
                   printf("%c",i+65) ;
                }
            }
                
           
        }
    }
    return 0;
}  
