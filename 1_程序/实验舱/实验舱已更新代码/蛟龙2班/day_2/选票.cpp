#include<bits/stdc++.h>
using namespace std;

int people(char ch,int n){
	if(ch >= 'a' && ch <= 'z'){
		ch = (char)(ch - 32); 
	}
	char last = (char)('A' + n - 1);
	if(ch < 'A' || ch > last){
		return -1;
	}else{
		return (int)(ch - 'A');
	}
}

int main(){
	int n;
	cin >> n;
	int b[n] = {0};
	int OO = 0;
	char ch;
	while(1){
		cin >> ch;
		if(ch == '#'){
			break;
		}
		int ans = people(ch,n);
		if(ans < 0) OO ++;
		else b[ans]++;
	}
	for(int i = 0;i < n;i++){
		printf("%c:%d\n",(char)('A' + i),b[i]);
	}
	cout << "OO" << ":" << OO << endl;
	
	return 0;
} 
