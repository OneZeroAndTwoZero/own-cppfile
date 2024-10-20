#include<bits/stdc++.h>
using namespace std;

struct lb{
	int pre,dat,nxt;
}a[100005];

int main(){
	int n,x;
	cin >> n >> x;
	a[0].pre = -1,a[n - 1].nxt = -1;
	for(int i = 0;i < n;i++){
		cin >> a[i].dat;
		if(i != 0) a[i].pre = i - 1;
		if(i != n - 1) a[i].nxt = i + 1;
	}
	x --;
	if(x == 0){
		a[a[0].nxt].pre = -1;
		a[0].pre = -11111;
	}else if(x == n - 1){
		a[a[n - 1].pre].nxt = -1;
		a[n - 1].nxt = -11111;
	}else{
		a[a[x].nxt].pre = a[x].pre;
		a[a[x].pre].nxt = a[x].nxt;
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

