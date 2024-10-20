#include<bits/stdc++.h>
using namespace std;

struct c{
	int v,ti;
};

c a[100005];

bool cmp(c a,c b){
	return (double)a.v / a.ti > (double)b.v / b.ti;
}

int main(){
	int t,m;
	cin >> t >> m;
	for(int i = 0;i < m;i++){
		cin >> a[i].ti >> a[i].v;
	}
	sort(a,a + m,cmp);
	int ans = 0;
	int now = 0;
	for(int i = 0;i < m;i++){
		if(a[i].ti + now > t){
			continue;
		}else{
			now += a[i].ti;
			ans += a[i].v;
		}
	}
	cout << ans << endl;

	return 0;
}

