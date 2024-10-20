#include<bits/stdc++.h>
using namespace std;

struct node{
	int ti,id;
	bool operator <(const node &a){
		if(ti == a.ti) return id < a.id;
		return ti < a.ti;
	}
};

node a[1005];
int n;
double now,sum = 0;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i].ti);
		a[i].id = i + 1;
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		printf("%d ",a[i].id);
		sum += now;
		now += a[i].ti;
	}
	cout << endl;
	printf("%.2lf\n",sum / n);

	return 0;
}

