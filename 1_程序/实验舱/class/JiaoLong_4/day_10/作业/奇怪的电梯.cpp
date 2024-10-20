#include<bits/stdc++.h>
using namespace std;

struct c{
	int step,di;
};

int n,a,b;
int k[1005] = {0};
bool ok[1005] = {0};
queue<c> build;

int bfs(int d){
	ok[d] = 1;
	build.push({0,d});
	while(build.size()){
	    c tem = build.front();
		build.pop();
		
		cout << tem.di << "[][]" << tem.step << "[][]" << k[tem.di] << endl;
		for(int i = 1;i <= n;i++){
			cout << ok[i] << ";;;";
		}
		puts("");
	    
		if(tem.di == b){
			return tem.di;
		}
		int td = tem.di + k[d];
		int td2 = tem.di - k[d];
		cout << td << "/////" << td2 << endl;
		if(td <= n && td > 0 && !ok[td]){
			cout << td << "\\\\\n";
			ok[td] = 1;
			build.push({tem.step + 1,td});
		}
		if(td2 > 0 && td2 <= n && !ok[td2]){
			cout << td2 << "\\\\\n";
			ok[td2] = 1;
			build.push({tem.step + 1,td2});
		}
		
		cout << tem.di << "[][]" << tem.step << "[][]" << k[tem.di] << endl;
		for(int i = 1;i <= n;i++){
			cout << ok[i] << ";;;";
		}
		puts("");
		
	}
	return -1;
}

int main(){
	scanf("%d %d %d",&n,&a,&b);
	for(int i = 1;i <= n;i++){
		scanf("%d",&k[i]);
	}
	printf("%d\n",bfs(a));

	return 0;
}

