#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};
bool pd[100005] = {0};
map<int,int> yu;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(a[i] != -1){
			pd[a[i]] = 1;
		}
	}
	int tou;
	for(int i = 0;i < n;i++){
		if(pd[i] == 0){
			tou = i;
			break;
		}
	}
	for(int i = 0;i < n;i++){
		yu[tou] = i + 1;
		tou = a[tou];
	}
	for(int i = 0;i < n;i++){
		cout << yu[i] << " ";
	}

	return 0;
}

