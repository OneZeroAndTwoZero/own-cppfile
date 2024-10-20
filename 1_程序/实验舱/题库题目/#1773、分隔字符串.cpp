#include<bits/stdc++.h>
using namespace std;


int t,n,ans;
int F,e,i,M,a;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> t;
    while(t --){
        cin >> n >> s;
        F = -1,e = -1,i = -1,M = -1,a = -1,ans = 0;
        for(int j = 0;j < s.size();j ++){
            if(s[j] == 'F'){
                F = j;
            }else if(s[j] == 'e'){
                if(F != -1) e = j;
            }else if(s[j] == 'i'){
                if(e != -1) i = j;
            }else if(s[j] == 'M'){
                if(i != -1) M = j;
            }else if(s[j] == 'a'){
                if(M != -1) ans ++,F = -1,e = -1,i = -1,M = -1,a = -1;
            }
        }
        printf("%d\n",ans);
    }

	return 0;
}