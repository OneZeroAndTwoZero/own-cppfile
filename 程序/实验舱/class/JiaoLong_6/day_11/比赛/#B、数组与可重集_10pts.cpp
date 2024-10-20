#include<bits/stdc++.h>
using namespace std;

int m,t;
int l[200005];
vector<int> a[200005];
unordered_map<int,int> f,cnt;
queue<int> pre,cur;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

	scanf("%d",&m);
	for(int i = 0;i < m;i ++){
		scanf("%d",&l[i]);
		for(int j = 0;j < l[i];j ++){
			scanf("%d",&t);
			a[i].push_back(t);
			f[t] ++;
		}
	}
	for(auto && i : f){
		if(i.second & 1){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	for(int i = 0;i < m;i ++){
		unordered_map<int,int> find,cntn,isodd;
		int odd = 0,cntodd = 0;
		find.clear(),cntn.clear(),isodd.clear();
		for(int j = 0;j < l[i];j ++){
			find[a[i][j]] ++;
		}
		while(pre.size()){
			find[pre.front()] += cur.front();
			pre.pop(),cur.pop();
		}
		for(auto && i : find){
			if(i.second & 1){
				i.second --;
				isodd[i.first] = 1;
				odd ++;
			}
		}
		for(int j = 0;j < l[i];j ++){
			if(cntn[a[i][j]] == find[a[i][j]] && isodd[a[i][j]]){
				if(cntodd < (odd >> 1)){
					printf("L");
					pre.push(a[i][j]);
					cur.push(-1);
				}else{
					printf("R");
					pre.push(a[i][j]);
					cur.push(1);
				}
				cntodd ++;
			}else{
				if(cntn[a[i][j]] < (find[a[i][j]] >> 1)){
					printf("L");
				}else{
					printf("R");
				}
			}
			cntn[a[i][j]] ++;
		}
		printf("\n");
	}

    return 0;
}