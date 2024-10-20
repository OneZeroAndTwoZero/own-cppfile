#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};
int b[1005] = {0};

int he(int a){
	int ans = 0;
	while(a){
		ans += a % 10;
		a /= 10;
	}
	return ans;
}

bool cmp(int a,int b){
	return a > b;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[he(a[i])] ++;
	}
	sort(a,a + n,cmp);
	int max = -1,max_n;
	for(int i = 0;i < 1001;i++){
		if(b[i] > max){
			max = b[i];
			max_n = i;
		}
	}
	cout <<max_n << endl;
	for(int i = 0;i < n;i++){
		if(he(a[i]) == max_n){
			cout << a[i] << " ";
		}
	}
	cout << endl;

	return 0;
}

