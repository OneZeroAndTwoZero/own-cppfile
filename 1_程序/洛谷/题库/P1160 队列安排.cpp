#include<bits/stdc++.h>
using namespace std;

struct s_p{
	int qian,zj,hou;
};

s_p dui[200005];
map<int,int> zai;

void jin(int k,int p,int now,int bh){
	dui[now].zj = bh;
	if(p == 1){
		dui[now].hou = dui[k].hou;
		dui[dui[k].hou].qian = now;
		dui[k].hou = now;
		dui[now].qian = k;
	}else{
		dui[now].qian = dui[k].qian;
		dui[dui[k].qian].hou = now;
		dui[now].hou = k;
		dui[k].qian = now;
	}
	zai[bh] = now + 1;
}

void out_(int qu){
	int wz = zai[qu] - 1;
	if(wz < 0) return;
	zai[qu] = 0;
	if(dui[wz].qian == -1){
		dui[dui[wz].hou].qian = -1;
		dui[wz].qian = 200004;
	}else if(dui[wz].hou == -1){
		dui[dui[wz].qian].hou = -1;
		dui[wz].hou = 200004;
	}else{
		dui[dui[wz].hou].qian = dui[wz].qian;
		dui[dui[wz].qian].hou = dui[wz].hou;
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	int now = 1;
	zai[1] = 1;
	dui[0].qian = -1,dui[0].zj = 1,dui[0].hou = -1;
	int n;
	cin >> n;
	for(int i = 0;i < n - 1;i++){
		int k,p;
		cin >> k >> p;
		jin(k - 1,p,now,i + 2);
		now ++;
	}
	int m;
	cin >> m;
	for(int i = 0;i < m;i++){
		int qu;
		cin >> qu;
		out_(qu);
	}
	int t;
	for(int i = 0;i < 200005;i++){
		if(dui[i].qian == -1){
			t = i;
		}
	}
	while(1){
		cout << dui[t].zj << " ";
		t = dui[t].hou;
		if(t == -1){
			break;
		}
	}

	return 0;
}

