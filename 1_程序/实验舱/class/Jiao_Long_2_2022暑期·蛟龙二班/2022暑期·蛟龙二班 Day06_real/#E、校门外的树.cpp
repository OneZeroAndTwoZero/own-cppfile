#include<bits/stdc++.h>
using namespace std;

int L,m;
bool tree[100005] = {0};

bool ok(int a){
	if(a % 2 == 0) return 1;
	else return 0;
}

int main(){
	cin >> L;
	int sl = L + 1;
	cin >> m;
	int s,e;
	for(int i = 0;i < m;i++){
		cin >> s >> e;
		for(int j = s;j <= e;j++){
			if(!tree[j]){
				tree[j] = 1;
				sl --;
			}
		}
	}
	cout << sl << endl;
	
	return 0;
} 
