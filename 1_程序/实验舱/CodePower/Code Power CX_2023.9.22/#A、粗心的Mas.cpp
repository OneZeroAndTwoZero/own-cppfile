#include<bits/stdc++.h>
using namespace std;

int t,n;
string s1,s2;
bool ans = 1;

bool check(int k){
	char ch1 = s1[k],ch2 = s2[k];
	// 交换顺序,方便判断
	if(ch1 > ch2) swap(ch1,ch2);
	// 两种情况
	if(ch1 == ch2) return 1;
	if(ch1 == '1' && ch2 == 'l'
	|| ch1 == '0' && ch2 == 'o') return 1;
	return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	cin >> t;
	while(t --){
		cin >> n;
		cin >> s1 >> s2;
		// 清空答案
		ans = 1;
		if(s1.size() != s2.size()){
			ans = 0;
		}else{
			for(int i = 0;i < n;i ++)
				if(!check(i)){
					ans = 0;
					break;
				}
		}
		if(ans) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}
