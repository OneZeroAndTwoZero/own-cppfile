#include<bits/stdc++.h>
using namespace std;

string s,tem;
int n,f;
long long zx = 0,zd = 0;
long long a[10005] = {0};

long long zhuan(string t){
	long long re = 0;
	for(int i = 0;i < t.size();i ++){
		re = re * 10 + (t[i] - 48);
	}
	return re;
}

void cz(){
	long long x,y;
	if(tem.find("d",0) != tem.npos){
		int pos = tem.find("d",0);
		if(!pos){
			tem = '1' + tem;
		}
		sscanf(tem.c_str(),"%lldd%lld",&x,&y);
		a[y] += x;
		if(f == 1){
			zd += x * y;
			zx += x;
		}else{
			zd -= x;
			zx -= x * y;
		}
	}else{
		int zhi;
		sscanf(tem.c_str(),"%d",&zhi);
	    zd += f * zhi;
	    zx += f * zhi;
	}
}

int main(){
	cin >> s;
	s = s + "!";
	tem = "";
	n = s.size();
	f = 1;
	for(int i = 0;i < n;i++){
		if(s[i] == '+' || s[i] == '-' || s[i] == '!'){
			cz();
			tem = "";
			if(s[i] == '+') f = 1;
			if(s[i] == '-') f = -1;
		}else{
			tem = tem + s[i];
		}
	}
	for(int i = 0;i < 10004;i++){
		if(a[i] > 0){
			printf("%d %lld\n",i,a[i]);
		}
	}
	printf("%lld %lld\n",zx,zd);

	return 0;
}

