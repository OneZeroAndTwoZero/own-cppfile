#include<bits/stdc++.h>
using namespace std;

int ans[10005] = {0};

void lr(string a,string b){
	for(int i = 0;i < max(a.size(),b.size());i++){
		if(i >= a.size()){
			ans[i] = -1 * (b[i] - '0');
		}else if(i >= b.size()){
			ans[i] = a[i] - '0';
		}else{
			ans[i] = (a[i] - '0') - (b[i] - '0');
		}
	}
	for(int i = 1;i <= max(a.size(),b.size());i++){
		while(ans[i - 1] < 0){
			ans[i - 1] += 10;
			ans[i] --;
		}
		ans[i] += ans[i - 1] / 10;
		ans[i - 1] %= 10;
	}
}

int main(){
	string a,b;
	int fh = 1;
	cin >> a >> b;
	if(a.size() < b.size()){
		swap(a,b);
		fh = -1;
	}else if(a.size() == b.size() && a < b){
		swap(a,b);
		fh = -1;
	}
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	if(a == b){
		cout << 0 <<endl;
		return 0;
	}
	lr(a,b);
	if(fh < 0) cout << "-";
	bool ok = 1;
	for(int i = 10000;i >= 0;i--){
		if(ans[i] != 0 && ok){
			ok = 0;
		}
		if(!ok) cout << ans[i];
	}

	return 0;
}

