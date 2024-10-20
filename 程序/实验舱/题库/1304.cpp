#include<bits/stdc++.h>
using namespace std;

bool ok(int ai,int bi){
	if((ai + bi) % 3 != 0) return 0;
	int tem = ai;
	ai = min(ai,bi),bi = max(tem,bi);
	if((bi - ai) > ai) return 0;
	int cha = bi - ai;
	bi -= 2 * cha,ai -= cha;
	if(bi % 3 == 0) return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		int ai,bi;
		cin >> ai >> bi;
		if(ok(ai,bi)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}

