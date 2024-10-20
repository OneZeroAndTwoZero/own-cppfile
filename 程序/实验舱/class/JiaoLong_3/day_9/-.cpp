#include<bits/stdc++.h>
using namespace std;

int ans[1002];

void cz(string a,string b){
	int len1 = a.size(),len2 = b.size();
	if(len1 < len2 || len1 == len2 && x < y){
		cout << "-";
		swap(a,b);
	}
	revers(a.begin(),a.end());
	revers(b.begin(),b.end());
	int len = max(len1,len2);
	for(int i = 0;i < a.size();i++){
		ans[i] = a[i] - '0';
	}
	for(int i = 0;i < a.size();i++){
		ans[i] = ans[i] - b[i] + '0';
	}
	for(int i = 0;i < len;i++){
		while(ans[i] < 0){
			ans[i] += 10;
			ans[i + 1] --;
		}
	}
	while(!ans[len] && len)
}

int main(){
	string a,b;

	return 0;
}

