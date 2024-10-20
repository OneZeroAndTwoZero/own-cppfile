#include<bits/stdc++.h>
using namespace std;

int n,m,pos;
int a[55] = {0};
stack<int> check;

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			scanf("%d",&a[j]);
		}
		while(check.size()) check.pop();
		pos = 0;
		for(int i = 0;i < n;i++){
			check.push(i + 1);
			while(check.size() && a[pos] == check.top()){
				//cout << check.size() << "[][]" << pos << ";;;" << check.top() << endl;
				check.pop();
				pos ++;
			}
		}
		if(check.size()){
			puts("NO");
		}else{
			puts("YES");
		}
	}

	return 0;
}

