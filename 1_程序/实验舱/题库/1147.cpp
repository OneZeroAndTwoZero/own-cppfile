#include<bits/stdc++.h>
using namespace std;

struct lb{
	int pre,dat,nxt;
}a[100005];

int main(){
	int n,m,x;
	cin >> n >> m >> x;
	a[0].pre = -1,a[n - 1].nxt = -1;
	for(int i = 0;i < n;i++){
		cin >> a[i].dat;
		if(i != 0) a[i].pre = i - 1;
		if(i != n - 1) a[i].nxt = i + 1;
	}
	m --;
	a[n].dat = x;
	if(x == n - 1){
		a[n].nxt = a[n - 1].nxt;
		a[n - 1].nxt = n;
		a[n].pre = n - 1;
	}else{
		a[n].nxt = a[m].nxt;
		a[n].pre = a[m].pre;
		a[a[m].nxt].pre = n;
		a[m].nxt = n;
	}
	int t = -1;
	for(int i = 0;i < n;i++){
		if(a[i].pre == -1){
			t = i;
			break;
		}
	}
	while(1){
		cout << a[t].dat << " ";
		t = a[t].nxt;
		if(t == -1) break;
	}

	return 0;
}

