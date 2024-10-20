#include<bits/stdc++.h>
using namespace std;

int cs[1002] = {0};
int fh[1002] = {0};
int tz[1002][2] = {0};
int shu_min[1002] = {0};
int shu_max[1002] = {0};
int fh_num = 0,tz_num = 0;

int zhuan(string s){
	int tem = 0;
	for(int i = 0;i < s.size();i++){
		tem = tem * 10 + (s[i] - 48);
	}
	return tem; 
}

void cz(string s){
	if(s.find("d",0) != s.npos){
		string s_tem1 = s.substr(0,s.find("d",0));
		if(s_tem1 == ""){
			s_tem1 = "1";
			tz[tz_num][0] = 1;
		}else{
		    tz[tz_num][0] = zhuan(s_tem1);
		}
		string s_tem2 = s.substr(s.find("d",0) + 1,s.size() - s.find("d",0) - 1);
		tz[tz_num][1] = zhuan(s_tem2);
		cs[zhuan(s_tem2)] += zhuan(s_tem1);
	}else{
		tz[tz_num][0] = zhuan(s);
		tz[tz_num][1] = -10;
	}
	tz_num ++;
}

int main(){
	string s = "";
	for(int i = 0;;i++){
		char tem = getchar();
		if(tem == '+' || tem == '-'){
			fh[fh_num] = tem == '+' ? 1 : -1;
			fh_num ++;
			cz(s);
			s = "";
		}else if(tem == '\n'){
			cz(s);
			break;
		}else{
		    s += tem;
		}
	}
	for(int i = 0;i < 1002;i++){
		if(cs[i] != 0){
			cout << i << " " << cs[i] << endl;
		}
	}
	for(int i = 0;i < 1002;i++){
		if(tz[i][1] == -10){
			shu_max[i] = tz[i][0];
			shu_min[i] = tz[i][0];
		}else{
		    shu_max[i] = tz[i][0] * tz[i][1];
		    shu_min[i] = tz[i][0] * 1;
		}
		//cout << shu_max[i] << "///" << shu_min[i] << endl;
	}
	int max = shu_max[0],min = shu_min[0];
	for(int i = 0;i < tz_num;i++){
		if(fh[i] == 1){
			max += fh[i] * shu_max[i + 1];
			min += fh[i] * shu_min[i + 1];
		}else{
			max += fh[i] * shu_min[i + 1];
			min += fh[i] * shu_max[i + 1];
		}
	}
	cout << min << " " << max << endl;

	return 0;
}


