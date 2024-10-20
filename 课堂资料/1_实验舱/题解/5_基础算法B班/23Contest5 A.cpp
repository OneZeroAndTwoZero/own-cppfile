/*
	Author:Frozencode
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
typedef pair<ll,ll> pii;
const ll maxn = 1000010;
const ll INF = 2147483647;
const ll mod = 998244353;
ll n, x, tot, st[maxn];
string s;
int main(){
	ios::sync_with_stdio(false);
	cin >> n >> x;
	cin >> s;
	for(auto ele : s){
		if(ele == 'U'){
			if(tot > 0 && st[tot] != 0) tot--;
			else st[++tot] = 0;
		}
		else if(ele == 'R'){
			st[++tot] = 1;
		}
		else if(ele == 'L'){
			st[++tot] = 2;
		}
	}
	for(int i = 1; i <= tot; i++){
		if(st[i] == 0){
			x /= 2;
		}
		else if(st[i] == 1){
			x = x * 2 + 1;
		}
		else if(st[i] == 2){
			x = x * 2;
		}
	}
	cout << x;
	return 0;
}