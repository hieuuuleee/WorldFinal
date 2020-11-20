// https://codeforces.com/problemset/problem/1061/C
#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define pf push_front
#define pp push
#define et empty
#define mp make_pair

#define For(i,a,b) for (int i=a;i<=b;++i)
#define Fod(i,b,a) for (int i=b;i>=a;--i)
#define Forl(i,a,b) for (ll i=a;i<=b;++i)
#define Fodl(i,b,a) for (ll i=b;i>=a;--i)

typedef int64_t ll;
typedef uint64_t ull;

#define prno                             cout<<"NO\n"
#define pryes                            cout<<"YES\n"
#define pryon                            pryes; else prno;
#define brln cout << "\n";
#define el                  "\n"
#define all(v)              (v).begin(), (v).end()
#define rall(v)             (v).rbegin(), (v).rend()
#define prarr(a,n)            For(i,1,n)cout<<a[i]<<" "; brln;
#define bitcount(n)         __builtin_popcountll(n)

#define INFILE(name)      freopen(name, "r", stdin)
#define OUFILE(name)      freopen(name, "w", stdout)
#define fast              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1000000007;
const int MAX = 1000005;

long long ans[1000005];
int main() {
    fast;
    INFILE("../in.txt");
    OUFILE("../out.txt");
    int t;
    cin>>t; //cout<<t;
    ll a[t+2];
    For(i,1,t) cin>>a[i];
    For(i,1,t){
        // unordered_map<ll,int> check;
        ll j=1;
        while(j*j<=a[i]){
            // cout<<j<<" ";
            if(!(a[i]%j) &&  (a[i]/j)<=i){
                if(a[i]/j==1){ ans[a[i]/j]=(ans[a[i]/j]+1)%MOD; }
                else{
                    ans[a[i]/j]=(ans[a[i]/j]+ans[a[i]/j-1])%MOD;
                    // check[a[i]/j] = 1;
                }
            }
            j++;
        }
        j--; if(a[i]/j==j) j--;
        while(j>=1){
            // cout<<j<<" ";
            if(!(a[i]%j) && j<=i){
                if(j==1){ ans[j]=(ans[j]+1)%MOD;} //check[j]=1;}
                else{
                    ans[j]=(ans[j]+ans[j-1])%MOD; //check[j]=1;
                }
            }
            --j;
        } 
        // cout<<"*"<<ans[1]<<"\n";
    }
    ll sum=0;
    For(i,1,1000001) sum+=(ans[i]%MOD);
    cout<<sum%MOD<<"\n";
}