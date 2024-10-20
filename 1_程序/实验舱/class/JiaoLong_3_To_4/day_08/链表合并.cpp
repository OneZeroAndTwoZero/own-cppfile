#include<bits/stdc++.h>
using namespace std;

map<string,int> dat;
map<string,string> nxt;
map<string,string> dao;
string nxt_out[10005];

string cz_dao(string t){
	dao[t] = "-1";
	while(1){
		if(nxt[t] != "-1"){
			dao[nxt[t]] = t;
			t = nxt[t];
		}else{
			return t;
		}
	}
}

void out(int k,string t){
	for(int i = 0;i < k - 1;i++){
		cout << nxt_out[i] << " " << dat[nxt_out[i]] << " " << nxt_out[i + 1] << endl;
	}
	cout << nxt_out[k - 1] << " " << dat[nxt_out[k - 1]] << " -1" << endl;
}

void hebin(string zc_t,string dao_t,int zc_num,int dao_num){
	string tem = zc_t;
	int zc_j = 0;
	int k = 0;
	while(1){
		if(zc_j != 2 || dao_num == 0){
			nxt_out[k++] = zc_t;
			zc_t = nxt[zc_t];
			zc_j ++;
			zc_num --;
		}else{
			nxt_out[k++] = dao_t;
			dao_t = dao[dao_t];
			zc_j = 0;
			dao_num --;
		}
		if(zc_num == 0 && dao_num == 0){
			out(k,zc_t);
			return;
		}
	}
}

int main(){
	string l1_t,l2_t;
	cin >> l1_t >> l2_t;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string tem,xia;
		cin >> tem;
		int sj;
		cin >> sj >> xia;
		dat[tem] = sj;
		nxt[tem] = xia;
	}
	int num_l1 = 0,num_l2 = 0;
	string i_1 = l1_t,i_2 = l2_t;
	while(i_1 != "-1"){
		num_l1 ++;
		i_1 = nxt[i_1];
	}
	while(i_2 != "-1"){
		num_l2 ++;
		i_2 = nxt[i_2];
	}
	string dao_t;
	if(num_l2 <= num_l1){
		dao_t = cz_dao(l2_t);
		hebin(l1_t,dao_t,num_l1,num_l2);
	}else{
		dao_t = cz_dao(l1_t);
		hebin(l2_t,dao_t,num_l2,num_l1);
	}

	return 0;
}
