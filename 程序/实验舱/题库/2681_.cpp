#include<bits/stdc++.h>
using namespace std;

struct co{
	int r,g,b;
};

vector<co> ans;
int a[16777220] = {0};

int main(){
	int n;
	cin >> n;
	int gs = 0;
	for(int i = 0;i < n;i++){
		co t;
		scanf("%d.%d.%d",&t.r,&t.g,&t.b);
		if(a[t.r * 256 * 256 + t.g * 256 + t.b] == 0){
			a[t.r * 256 * 256 + t.g * 256 + t.b] = 1;
			ans.push_back(t);
			gs ++;
		}
	}
	cout << gs << endl;
	for(int i = 0;i < gs;i++){
		printf("%d.%d.%d ",ans[i].r,ans[i].g,ans[i].b);
	}

	return 0;
}

