#include<bits/stdc++.h>
using namespace std;

struct lian{
	int pre,dat,nxt;
};

lian a[500005];
vector<int> ans;

int main(){
	a[0].pre = -1,a[0].dat = 0,a[0].nxt = -1;
	int n;
	string s;
	cin >> n >> s;
	for(int i = 1;i <= n;i++){
		if(s[i - 1] == 'L'){
			a[i].dat = i;
			a[i].nxt = i - 1;
			a[i].pre = a[i - 1].pre;
			if(a[i - 1].pre != -1){
				a[a[i - 1].pre].nxt = i;
			}
			a[i - 1].pre = i;
		}else{
			a[i].dat = i;
			a[i].pre = i - 1;
			a[i].nxt = a[i - 1].nxt;
			if(a[i - 1].nxt != -1){
				a[a[i - 1].nxt].pre = i;
			}
			a[i - 1].nxt = i;
		}
	}
	int t;
	for(int i = 0;i <= n;i++){
		if(a[i].pre == -1){
			t = i;
			break;
		}
	}
	while(t != -1){
		ans.push_back(t);
		t = a[t].nxt;
	}
	for(int i = 0;i <= n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}

