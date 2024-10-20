#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> mp;
map<string,int> everyoneyear;
string nian[13]={"","Ox","Tiger","Rabbit","Dragon","Snake","Horse","Goat","Monkey","Rooster","Dog","Pig","Rat"};
string sen;
int n,year2;

int zhao(string s){
	for(int i = 1;i <= 12;i ++){
		if(nian[i] == s) return i;
	}
}

int main(){
//	for(int i = 1;i <= 12;i ++){
//		cout << nian[i] << endl;
//	}
	cin>>n;
	string time,name,year,other;
	mp["Bessie"]=1200,everyoneyear["Bessie"] = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=8;j++){
			cin>>sen;
			if(j==4){
				time=sen;
			}else if(j==1){
				name=sen;
			}else if(j==5){
				year=sen;
			}else if(j==8){
				other=sen;
			}
		}
		everyoneyear[name] = zhao(year);
		for(int i=1;i<=12;i++){
			if(nian[i]==year){
				if(time=="next"){
					year2=i;
					year2 += (12 - everyoneyear[other]);	
					if(year2 > 12) year2 -= 12;
				}else{
					year2=12-i;
					year2 += everyoneyear[other];
					if(year2 > 12) year2 -= 12;
				}
			}
		}
		if(time=="previous"){
			mp[name]=mp[other]-year2;
		}else if(time=="next"){
			mp[name]=mp[other]+year2;
		}
	}
	int ans=abs(mp["Bessie"]-mp["Elsie"]);
	cout<<ans;
	return 0;
}
