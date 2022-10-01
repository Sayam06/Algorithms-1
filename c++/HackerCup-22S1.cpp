#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define int long long int
#define min(a,b)(a<b?a:b)
#define max(a,b)(a>b?a:b)
#define loop(i,a,b) for(int i=(a);i<(b);(i)++)
#define loopr(i,a,b) for(int i=(a);i>(b);(i)--) 
#define loope(i,s) for(auto &i:(s))
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(s) (int)(s.size())
#define MOD (int) (1e9+7)
#define INF (int)9e18

int add_mod(int a,int b,int m){a%=m;b%=m; return ((a+b)%m+m)%m;}
int mul_mod(int a,int b,int m){a%=m;b%=m; return ((a*b)%m+m)%m;}
int sub_mod(int a,int b,int m){a%=m;b%=m; return ((a-b)%m+m)%m;}

typedef unsigned long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef pair<int,pair<int,int> > pipii;
typedef vector<pair<int,int> > vpii;
typedef map<int, int> mpii;
typedef map<char,int> mpci;
typedef map<int, vi> mpivi;
typedef map<string, int> mpsi; 

int paths(int m, int n)
{ 
    int res = 1;
    for (int i = n; i < (m + n - 1); i++) {
        res *= i;
        res /= (i - n + 1);
    }
    return res;
}

void solve(){ 
    cout<<paths(3,3); 
}

signed main(){
    IOS;
    // int t=0;
    // cin>>t;
    // loop(i,1,t+1){
        // google(i);
        solve();
    // }
    return 0;
}
