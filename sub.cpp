#line 1 "main.cpp"
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B"

#line 1 "template.hpp"
#include<bits/stdc++.h>
using namespace std;
#define rep(i, N)  for(int i=0;i<(N);i++)
#define all(x) (x).begin(),(x).end()
#define popcount(x) __builtin_popcount(x)
using ll = long long;
//using i128=__int128_t;
using ld = long double;
using graph = vector<vector<int>>;
using P = pair<int, int>;
const int inf = 1e9;
const ll infl = 1e18;
const ld eps = 1e-6;
const long double pi = acos(-1);
const ll MOD = 1e9 + 7;
const ll MOD2 = 998244353;
const int dx[4] = { 1,0,-1,0 };
const int dy[4] = { 0,1,0,-1 };
template<class T>inline void chmax(T&x,T y){if(x<y)x=y;}
template<class T>inline void chmin(T&x,T y){if(x>y)x=y;}
#line 2 "string/rolling_hash.hpp"

#line 1 "math/mod_pow.hpp"
ll mod_pow(ll base, ll exp, ll mod) {
    if(base==0)return 0;
    ll ans = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) {
            ans *= base;
            ans %= mod;
        }
        base *= base;
        base %= mod;
        exp >>= 1;
    }
    return ans;
}
///@brief mod pow(バイナリ法)
#line 4 "string/rolling_hash.hpp"
class RollingHash {
	
	static const ll mod = 998244343;
	static const ll g = 3;	//原始根
	ll base;
	vector<ll> powers;
	static inline ll generate_base() {
		mt19937_64 engine(chrono::steady_clock::now().time_since_epoch().count());
		uniform_int_distribution<ll> rand((ll)1, (ll)mod - 1);
		return rand(engine);
	}
	//idの振り方
	ll mapping(char c) {
		return (c - 'a');
	}
	void expand(int siz) {
		if (powers.size() < siz + 1) {
			int pre_siz = powers.size();
			powers.resize(siz + 1);
			for (int i = pre_siz; i <= siz; i++) {
				powers[i] = (powers[i - 1] * base) % mod;
			}
		}
	}

public:
	RollingHash() :base(), powers{ 1 } {
		ll r = mod - 1;
		while(gcd(r,mod-1) != 1){
			r = generate_base();
		}

		base = mod_pow(g,r,mod);
	} 

	vector<ll> build(string& s) {
		vector<ll> hash(s.size() + 1);
		for (int i = 0; i < s.size(); i++) {
			hash[i + 1] = (hash[i] * base % mod + mapping(s[i])) % mod;
		}
		return hash;
	}
	ll range(vector<ll>&hash,int l, int r) {
		expand(r - l);
		return ((hash.at(r) + mod - hash.at(l) * powers[r - l]) % mod + mod) % mod;
	}
};

///@brief rolling hash
#line 5 "main.cpp"
int main() {
	string T, P;
	cin >> T >> P;
	if (T.size() < P.size())exit(0);
	RollingHash rh;
	auto t = rh.build(T);
	auto p = rh.build(P);
	ll hash = rh.range(p,0, P.size());
	for (int i = 0; i < T.size() - P.size() + 1; i++) {
		if (rh.range(t, i, i + P.size()) == hash) {

			cout << i << '\n';
		}
	}
}