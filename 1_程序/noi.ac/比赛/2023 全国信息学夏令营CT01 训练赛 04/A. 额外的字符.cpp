#include<bits/stdc++.h>
using namespace std;

string s,t;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	cin >> s;
	cin >> t;
	for(int i = 0;i < t.size();i ++){
		if(i >= s.size() || s[i] != t[i]){
			printf("%d\n",i + 1);
			return 0;
		}
	}

	return 0;
}