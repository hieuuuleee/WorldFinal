// https://codeforces.com/group/FLVn1Sc504/contest/274809/problem/I?fbclid=IwAR2jn0-pp4dX7-nOGmY5Y-bjZB1Iwz_ZSuCxkXgSkNjKnd2RTSaXrP1wLyE
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

long long ans;
map<int,int> check;
vector<pair<int,int>> next(n+1);
map<pair<int,int>,int> visited;

void djik(int u,int v){
	priority_queue<pair<int,int>> q;
	q.pb({0,u});
	while(!q.et()){
		pair<int,int> cur = q.top();
		if(cur.se==v) return;
		for(auto i:next(cur.se)){
			if(visited[i.fi] == 0 || visited[i.fi] < cur.fi - i.se){
				visited[i.fi] = cur.fi - i.se;
				q.push({visited[i.fi], i.fi});
			}
		}
	}
	cout<<"BUG!!\n";
	return;
}

void dfs(int u,int v){
	
}

int main() {
    fast;
    INFILE("../../in.txt");
    OUFILE("../../out.txt");
    int n,m; cin>>n>>m;
    For(i,1,m){
    	int u,v,w; cin>>u>>v>>w;
    	next[u].pb({v,w});
    	next[v].pb({u,w});
    }
    djik(1,n,1);
    dfs(1,n,-1);
    For(i,1,n) if(check!=)
}