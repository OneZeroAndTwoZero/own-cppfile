#include<bits/stdc++.h>
using namespace std;

map<char,int> fen;

int main(){
	fen['P'] = 1,fen['S'] = 2,fen['R'] = 3; //²¼¼ôµ¶Ê¯Í·
	int t,n;
	cin >> t;
	for(int i = 0;i < t;i++){
		cin >> n;
		int p1 = 0,p2 = 0;
		for(int j = 0;j < n;j++){
			char tem1,tem2;
			cin >> tem1 >> tem2;
			if(fen[tem1] == fen[tem2]){
				p1 ++,p2 ++;
			}else if(fen[tem1] - fen[tem2] == -1 || fen[tem1] - fen[tem2] == 2){
				p2 += 2;
			}else{
				p1 += 2;
			}
		}
		if(p1 == p2){
			cout << "TIE" << endl;
		}else if(p1 < p2){
			cout << "Player 2" << endl;
		}else{
			cout << "Player 1" << endl;
		}
	}

	return 0;
}

