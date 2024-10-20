#include<bits/stdc++.h>
using namespace std;

struct li{
	int dat,nxt;
}a[100005];

vector<int> l1,l2,all;

int main(){
	int b1,b2,n;
	int c1 = 0,c2 = 0;
	cin >> b1 >> b2 >> n;
	for(int i = 0;i < n;i++){
		int add;
		cin >> add;
		cin >> a[add].dat >> a[add].nxt;
	}
	int t = b1;
	while(t != -1){
		l1.push_back(t);
		t = a[t].nxt;
		c1 ++;
	}
	t = b2;
	while(t != -1){
		l2.push_back(t);
		t = a[t].nxt;
		c2 ++;
	}
	int c1_s = 0,c2_s = 0;
	if(c1 > c2){
		reverse(l2.begin(),l2.end());
		for(int i = 0;;i++){
			if((i + 1) % 3 == 0 && c2_s < c2){
				all.push_back(l2[c2_s]);
				c2_s ++;
			}else{
				all.push_back(l1[c1_s]);
				c1_s ++;
			}
			if(c1_s >= c1) break;
		}
	}else{
		reverse(l1.begin(),l1.end());
		for(int i = 0;;i++){
			if((i + 1) % 3 == 0 && c1_s < c1){
				all.push_back(l1[c1_s]);
				c1_s ++;
			}else{
				all.push_back(l2[c2_s]);
				c2_s ++;
			}
			if(c2_s >= c2) break;
		}
	}
	for(int i = 0;i < n - 1;i++){
		printf("%05d %d %05d\n",all[i],a[all[i]].dat,all[i + 1]);
	}
	printf("%05d %d -1\n",all[n - 1],a[all[n - 1]].dat);

	return 0;
}

