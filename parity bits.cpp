#include <bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;

 
const long long MOD = 1000000007;
using ld = long double;
using ull = unsigned long long;
using ll = long long;
using vi = vector<int> ;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using si = set<int> ;
using sll = set<ll> ;
using vll = vector<ll> ;
using mii = map<int,int> ;
using mll = map<ll,ll> ;
using vpii = vector<pair<int,int>> ;
using vvi = vector<vector<int>> ;

#define endl '\n'
#define F first
#define S second
#define pb push_back
#define br cout<<'\n'; 
#define inf 0x3f3f3f3f
#define infll 0x3f3f3f3f3f3f3f3fLL
#define lcm(a, b) a /__gcd(a, b)*b
#define digit(n) floor(log10(n))+1
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define case(x) cout<< "Case "<<x<< ": ";
#define ver(expression) cout << (expression ? "YES\n" : "NO\n")
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define prec(precision,value) cout<<fixed<<setprecision(precision)<<value<<endl

//typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>ordered_multiset;

#define bug(args...) do {cerr << #args << " : "; dbg(args); } while(0)
void dbg () {cerr << endl;}
template <typename T>
void dbg( T a[], int n ) {for(int i = 0; i < n; ++i) cerr << a[i] << ' ';cerr << endl;}
template <typename T, typename ... hello>
void dbg( T arg, const hello &... rest) {cerr << arg << ' '; dbg(rest...);}
 
 
 
template <typename T>ostream& operator<<(ostream& os, const vector<T>& v){
os << "[";for (int i = 0; i < v.size(); ++i) {os << v[i];
if (i != v.size() - 1)os << ", ";}os << "]\n";return os;}
 
template <typename T>ostream& operator<<(ostream& os, const set<T>& v){
os << "[";for (auto it : v) {os << it;if (it != *v.rbegin())os << ", ";}
os << "]\n";return os;}
 
ll powermod(ll a, ll b, ll m)
{
    if (b == 0) return 1;
    ull k = powermod(a, b / 2, m);
    k = k * k;
    k %= m;
    if (b & 1) k = (k * a) % m;
    return k;
}





void solve()
{
  
  
}

int main()
{
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int test = 1 ; cin >> test ; 
    for(int i = 1;  i <= test ; i++)solve() ;  
}