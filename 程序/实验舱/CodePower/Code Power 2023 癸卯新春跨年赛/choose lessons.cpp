#include<bits/stdc++.h>
using namespace std;

struct ke{
	string name;
	int fen;
};

map<string,int> yong;
int n,k,d,c;
string s;
long long ans = 0;
ke a[200005];

bool cmp(ke o,ke b){
	if(o.fen != b.fen)
	    return o.fen < b.fen;
	return o.name < b.name;
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i ++){
		cin >> s;
		a[i].name = s;
		cin >> d;
		a[i].fen = d;
	}
	sort(a,a + n,cmp);
	c = 0;
	for(int i = 0,j = 0;i < k;i++,j ++){
		if(a[j].name[a[j].name.size() - 1] == '2'){
			if(yong[a[j].name.substr(0,a[j].name.size() - 1)]){
				c = 0;
				ans += a[j].fen;
		    }else if(j < n - 1 - c){
		    	swap(a[j],a[j + c + 1]);
		    	i --,j --;
			}
		}else if(a[j].name[a[j].name.size() - 1] == '1'){
			c = 0;
			ans += a[j].fen;
			yong[a[j].name.substr(0,a[j].name.size() - 1)] = 1;
		}else{
			c = 0;
			ans += a[j].fen;
		}
	}
	printf("%lld\n",ans);

	return 0;
}

