#include<bits/stdc++.h>
using namespace std;

struct co{
	int r;
	int g;
	int b;
};

co a[100005];
map<co,bool> zhao;
int k = 0;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		scanf("%d.%d.%d",&t.r,&t.g,&t.b);
		cout << t.r << " " << t.g << " " << t.b << endl;
		cout << zhao[t] << endl;
		if(zhao[t] == 0){
			zhao[t] = 1;
			a[k ++] = t;
		}
	}
	cout << k << endl;
	for(int i = 0;i < k;i++){
		printf("%d.%d.%d ",a[i].r,a[i].g,a[i].b);
	}

	return 0;
}

