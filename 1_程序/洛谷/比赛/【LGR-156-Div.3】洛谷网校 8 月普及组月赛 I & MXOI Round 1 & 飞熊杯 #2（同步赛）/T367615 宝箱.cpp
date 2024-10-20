#include<bits/stdc++.h>
using namespace std;

int a,b,ans = 0;

int main(){
    scanf("%d %d",&a,&b);
    if(a * b > 0){
        ans = max(abs(a),abs(b));
    }else{
        ans = abs(a) + abs(b) + min(abs(a),abs(b));
    }
    printf("%d\n",ans);

	return 0;
}