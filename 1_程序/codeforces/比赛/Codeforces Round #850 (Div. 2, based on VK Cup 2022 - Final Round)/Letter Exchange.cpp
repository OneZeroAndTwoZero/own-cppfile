#include<bits/stdc++.h>
using namespace std;

int t,n;
string s;
vector<int> w1,i1,n1,w0,i0,n0;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		for(int i = 0;i < n;i++){
			int a[3] = {0};
			cin >> s;
			for(int j = 0;j < s.size();j++){
				if(s[j] == 'w'){
					a[0] ++;
				}else if(s[j] == 'i'){
					a[1] ++;
				}else{
					a[2] ++;
				}
			}
			if(!a[0]){
				w0.push_back(i + 1);
			}else if(!a[1]){
				i0.push_back(i + 1);
			}else if(!a[2]){
				n0.push_back(i + 1);
			}
			while(a[0] >= 1){
				w1.push_back(i + 1);
				a[0] --;
			}
			while(a[1] >= 1){
				i1.push_back(i + 1);
				a[1] --;
			}
			while(a[2] >= 1){
				n1.push_back(i + 1);
				a[2] --;
			}
		}
		
	}

	return 0;
}

