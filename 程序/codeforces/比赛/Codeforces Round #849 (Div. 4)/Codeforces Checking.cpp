#include<bits/stdc++.h>
using namespace std;

int t;
string check = "codeforces";
char key;

bool check_(){
	for(int i = 0;i < check.size();i++){
		if(key == check[i]){
			return 1;
		}
	}
	return 0;
}

int main(){
	scanf("%d",&t);
	while(t --){
		cin >> key;
		if(check_()){
			puts("YES");
		}else{
			puts("NO");
		}
	}

	return 0;
}

