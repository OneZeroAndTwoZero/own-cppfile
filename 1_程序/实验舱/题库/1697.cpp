#include<bits/stdc++.h>
using namespace std;

struct g{
	string name;
	int a,b,c;
	bool ok;
}ans[100005];

int main(){
	int n;
	cin >> n;
	int gs = n;
	int max_a = -1,max_b = -1,max_c = -1;
	for(int i = 0;i < n;i++){
		cin >> ans[i].name >> ans[i].a >> ans[i].b >> ans[i].c;
		ans[i].ok = 1;
		if(ans[i].a > max_a) max_a = ans[i].a;
		if(ans[i].b > max_b) max_b = ans[i].b;
		if(ans[i].c > max_c) max_c = ans[i].c;
	}
	for(int i = 0;i < n;i++){
		if(max_a - ans[i].a >= 100) ans[i].ok = 0,gs --;
		else if(max_b - ans[i].b >= 100) ans[i].ok = 0,gs --;
		else if(max_c - ans[i].c >= 100) ans[i].ok = 0,gs --;
	}
	if(!gs){
		cout << "There is no winner." << endl;
		return 0;
	}else{
		cout << "Winning list:" << endl;
	}
	for(int i = 0;i < n;i++){
		if(ans[i].ok){
			cout << ans[i].name << endl;
		}
	}

	return 0;
}

