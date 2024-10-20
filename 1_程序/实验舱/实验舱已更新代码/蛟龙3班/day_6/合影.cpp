#include<bits/stdc++.h>
using namespace std;

struct tem_{
	string x;
	double t;
};

tem_ a[50];

bool cmp(tem_ a,tem_ b){
	if(a.x != b.x){
		return a.x > b.x;
	} 
	if(a.x == "male"){
		return a.t < b.t;
	}
	return a.t > b.t;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].x >> a[i].t;
	}
    sort(a,a + n,cmp);
    for(int i = 0;i < n;i++){
    	printf("%.2lf ",a[i].t);
	}

	return 0;
}

