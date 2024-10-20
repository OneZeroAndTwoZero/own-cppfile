#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};
int a1[100005] = {0},a2[100005] = {0};

bool cmp(int a,int b){
	return a > b;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int geduan = n % 2 == 0 ? n / 2 : (n + 1) / 2;
	for(int i = 0;i < geduan;i ++){
		a1[i] = a[i];
	}
	for(int i = geduan;i < n;i ++){
		a2[i - geduan] = a[i];
	}
	sort(a1,a1 + geduan,cmp);
	sort(a2,a2 + (n - geduan),cmp);
	for(int i = 0;i < n - geduan;i++){
		cout << a1[i] << " " << a2[i] << " ";
	}
	if(n % 2 == 1){
		cout << a1[geduan - 1] << endl;
	}

	return 0;
}

