#include<bits/stdc++.h>
using namespace std;

map<int,string> cnt;

string zhuan(int tem){
	if(cnt[tem] != ""){
		return cnt[tem];
	}else{
		int tem1 = tem / 10 * 10,tem2 = tem % 10;
		return cnt[tem1] + " " + cnt[tem2];
	}
}

int main(){
	cnt[0] = "zero"; 
	cnt[1] = "one"; 
	cnt[2] = "two"; 
	cnt[3] = "three"; 
	cnt[4] = "four"; 
	cnt[5] = "five"; 
	cnt[6] = "six"; 
	cnt[7] = "seven"; 
	cnt[8] = "eight"; 
	cnt[9] = "nine";
	cnt[10] = "ten";
	cnt[11] = "eleven";
	cnt[12] = "twelve";
	cnt[13] = "thirteen";
	cnt[14] = "fourteen";
	cnt[15] = "fifteen";
	cnt[16] = "sixteen";
	cnt[17] = "seventeen";
	cnt[18] = "eighteen";
	cnt[19] = "nineteen";
	cnt[20] = "twenty";
	cnt[30] = "thirty";
	cnt[40] = "forty";
	cnt[50] = "fifty";
	int h,m;
	cin >> h >> m;
	string sh = zhuan(h),sm = zhuan(m);
	if(m == 0){
		cout << sh << " o'clock";
	}else{
		cout << sh << " " << sm;
	}

	return 0;
}

