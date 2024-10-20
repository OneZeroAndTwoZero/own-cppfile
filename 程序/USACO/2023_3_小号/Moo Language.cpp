#include<bits/stdc++.h>
using namespace std;

int t,n,c,p,ans = 0;
string op,od;
string a1[1005],a2[1005],a3[1005],a4[1005];
int pos1 = 0,pos2 = 0,pos3 = 0,pos4 = 0;
string anss = "",tem = "";

string cz(){
	if(pos2 > 0 || pos3 > 0){
		if(pos3 > 0 && pos1 > 1){
			tem = a1[-- pos1] + " " + a3[-- pos3] + " " + a1[-- pos1];
		}else{
			if(pos1 > 0 && pos2 > 0){
				tem = a1[-- pos1] + " " + a2[-- pos2];
			}else{
				return "-1";
			}
		}
	}else{
		return "-1";
	}
	return tem;
}

int main(){
	cin >> t;
	while(t --){
		cin >> n >> c >> p;
		for(int i = 0;i < n;i++){
			cin >> od >> op;
			if(op == "noun"){
				a1[pos1 ++] = od;
			}else if(op == "transitive-verb"){
				a2[pos2 ++] = od;
			}else if(op == "intransitive-verb"){
				a3[pos3 ++] = od;
			}else{
				a4[pos4 ++] = od;
			}
		}
		while(1){
			tem = "";
			if(p > 0){
				if(a4 > 0)
			}else{
				break;
			}
		}
	}

	return 0;
}

