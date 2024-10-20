#include<bits/stdc++.h>
using namespace std;

int ans[1005] = {0};

int main(){
	int k;
	string a,b;
	cin >> k;
	cin >> a >> b;
	int ws = max(a.size(),b.size());
	for(int i = ws - a.size(),j = 0;i < ws;i ++,j ++){
		if(a[j] >= '0' && a[j] <= '9'){
			ans[i + 1] = (a[j] - '0');
		}else{
			ans[i + 1] = (a[j] - 'A' + 10);
		}
	}
	for(int i = ws - b.size(),j = 0;i < ws;i ++,j ++){
		if(b[j] >= '0' && b[j] <= '9'){
			ans[i + 1] += (b[j] - '0');
		}else{
			ans[i + 1] += (b[j] - 'A' + 10);
		}
	}
	for(int i = ws;i > 0;i--){
		ans[i - 1] += ans[i] / k;
		ans[i] %= k;
	}
	if(ans[0]){
		if(ans[0] <= 9){
			cout << (char)(ans[0] + '0');
		}else{
			cout << (char)(ans[0] - 10 + 'A');
		}
	}
	for(int i = 1;i <= ws;i++){
		if(ans[i] <= 9){
			cout << (char)(ans[i] + '0');
		}else{
			cout << (char)(ans[i] - 10 + 'A');
		}
	}
	cout << endl;

	return 0;
}

