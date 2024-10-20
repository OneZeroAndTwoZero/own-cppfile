#include<bits/stdc++.h>
using namespace std;

map<string,int> zhao;
queue<string> q;
string s;
int m,n,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif	

	cin >> m >> n;
	for(int i = 0;i < n;i ++){
		cin >> s;
		if(!zhao[s]){
			zhao[s] = 1;
			ans ++;
			if(q.size() < m){
				q.push(s);
			}else{
				zhao[q.front()] = 0;
				q.pop();
				q.push(s);
			}
		}
	}
	cout << ans << endl;

	return 0;
}

