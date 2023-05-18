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
    string s;
    cin>>s;
    int i=0, cnt =1, mx=1;
    while(s[i]!='\0'){
        if(s[i]==s[i+1]){
            cnt ++;
            mx = max(mx,cnt);
        }else{
            cnt =1;
        }
        i++;
    }   
    cout<<mx<<endl;
}  
