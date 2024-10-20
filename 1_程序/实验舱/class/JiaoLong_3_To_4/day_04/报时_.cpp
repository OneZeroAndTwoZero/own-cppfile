#include<bits/stdc++.h>
using namespace std;

string cun(int a){
	if(a == 0){
		return "zero"; 
	}else if(a == 1){
		return "one";
	}else if(a == 2){
		return "two";
	}else if(a == 3){
		return "three";
	}else if(a == 4){
		return "four";
	}else if(a == 5){
		return "five";
	}else if(a == 6){
		return "six";
	}else if(a == 7){
		return "seven";
	}else if(a == 8){
		return "eight";
	}else if(a == 9){
		return "nine";
	}else if(a == 10){
		return "ten";
	}else if(a == 11){
		return "eleven";
	}else if(a == 12){
		return "twelve";
	}else if(a == 13){
		return "thirteen";
	}else if(a == 14){
		return "fourteen";
	}else if(a == 15){
		return "fifteen";
	}else if(a == 16){
		return "sixteen";
	}else if(a == 17){
		return "seventeen";
	}else if(a == 18){
		return "eighteen";
	}else if(a == 19){
		return "nineteen";
	}else if(a == 20){
		return "twenty";
	}else if(a == 30){
		return "thirty";
	}else if(a == 40){
		return "forty";
	}else if(a == 50){
		return "fifty";
	}else{
		return "-1";
	}
}

string zhuan(int tem){
	if(cun(tem) != "-1"){
		return cun(tem);
	}else{
		int tem1 = tem / 10 * 10,tem2 = tem % 10;
		return cun(tem1) + " " + cun(tem2);
	}
}

int main(){
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

