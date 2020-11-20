#include<bits/stdc++.h>
using namespace std;
 
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define pp push
#define et empty
#define mp make_pair
 
#define For(i,a,b) for (int i=a;i<=b;i++)
#define Fod(i,b,a) for (int i=b;i>=a;i--)
#define Forl(i,a,b) for (ll i=a;i<=b;i++)
#define Fodl(i,b,a) for (ll i=b;i>=a;i--)
 
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
 
const ll MOD = 998244353;
ll permu[1000002],invpermu[1000002],ans;
void permutate(int n){
    permu[0]=1;
    Forl(i,1,n) permu[i]=(permu[i-1]*i)%MOD;
}
ll mul_inv(ll a, ll b = MOD) {
    ll t1 = a, t2 = b, t3;
    ll v1 = 1, v2 = 0, v3;
    while (t2 != 1) {
        ll x = t1 / t2;
        t3 = t1 - x * t2;
        v3 = v1 - x * v2;
        t1 = t2, t2 = t3;
        v1 = v2, v2 = v3;
    }
    return (v2 + b) % b;
}
int main(){
    fast;
    // INFILE("../in.txt");
    // OUFILE("../out.txt");
    int n; cin>>n;
    permutate(n);
    For(i,1,n-1) invpermu[i]=mul_inv(permu[i]);
    ans=(n)*(permu[n]);
    Forl(i,1,n-1) ans-=(permu[n]*invpermu[i])%MOD;
    cout<<(ans)%MOD;
}