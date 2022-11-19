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


string Ones_complement(string data)
{
    for (int i = 0; i < data.length(); i++) data[i] = (data[i] == '0')? '1' : '0' ;
           
    return data;
}
 

string checkSum(string data, int block_size)
{
  
    int n = data.length();
    if (n % block_size != 0) {
        int pad_size = block_size - (n % block_size);
        for (int i = 0; i < pad_size; i++) {
            data = '0' + data;
        }
    }

    string result = "";
 
    for (int i = 0; i < block_size; i++) {
        result += data[i];
    }
 

    for (int i = block_size; i < n; i += block_size) {

        string next_block = "";
 
        for (int j = i; j < i + block_size; j++) {
            next_block += data[j];
        }

        string additions = "";
        int sum = 0, carry = 0;
 
        for (int k = block_size - 1; k >= 0; k--) {
            sum += (next_block[k] - '0')
                   + (result[k] - '0');
            carry = sum / 2;
            if (sum == 0) {
                additions = '0' + additions;
                sum = carry;
            }
            else if (sum == 1) {
                additions = '1' + additions;
                sum = carry;
            }
            else if (sum == 2) {
                additions = '0' + additions;
                sum = carry;
            }
            else {
                additions = '1' + additions;
                sum = carry;
            }
        }

        string final = "";
 
        if (carry == 1) 
        {
            for (int l = additions.length() - 1; l >= 0;l--) 
            {
                if (carry == 0) 
                {
                    final = additions[l] + final;
                }
                else if (((additions[l] - '0') + carry) % 2 == 0) 
                {
                    final = "0" + final;
                    carry = 1;
                }
                else 
                {
                    final = "1" + final;
                    carry = 0;
                }
            }
 
            result = final;
        }
        else
        {
            result = additions;
        }
    }
    return Ones_complement(result);
}

bool checker(string sent_message,string rec_message,int block_size)
{
 
   
    string sender_checksum = checkSum(sent_message, block_size);
 
   
    string receiver_checksum = checkSum(
        rec_message + sender_checksum, block_size);
 
    if (count(receiver_checksum.begin(),
              receiver_checksum.end(), '0') == block_size) return true;
    
    else return false;
    
}



int  solve()
{
     string sent_message
        = "10000101011000111001010011101101";
    string recv_message
        = "10000101011000111001010011101101";
    int block_size = 8;
 
    if (checker(sent_message,recv_message,block_size)) 
    {
        cout << "No Error";
    }
    else 
    {
        cout << "Error";
    }
 

  
}

int main()
{
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int test = 1 ; //cin >> test ; 
    for(int i = 1;  i <= test ; i++)solve() ;  
}