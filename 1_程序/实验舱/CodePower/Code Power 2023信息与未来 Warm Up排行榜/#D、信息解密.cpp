#include<bits/stdc++.h>
using namespace std;

char s[500005];
char cnt[500005];
vector<char> ans;
int n,pos = 1;
deque<char> q;

void out(){
    for(int i = 0;i < ans.size();i ++){
        printf("%c",ans[i]);
    }
    printf("\n");
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%s",s);
    n = strlen(s);
    for(int i = 0;i < n;i ++){
        if(s[i] == 'R'){
            pos *= -1;
            // cout << "[][]" << pos << "[]\n";
        }else{
            if(pos == 1){
                q.push_back(s[i]);
            }else{
                q.push_front(s[i]);
            }
        }
    }
    if(pos == 1){
        // cout << ";;;\n";
        for(int i = 0,j = 0;j < q.size();i ++,j ++){
            cnt[i] = q[j];
        }
    }else{
        // cout << "[]\n";
        for(int i = 0,j = q.size() - 1;j >= 0;i ++,j --){
            cnt[i] = q[j];
        }
    }
    // printf("%s\n",cnt);
    n = strlen(cnt);
    for(int i = 0;i < n;i ++){
        if(i != 0 && cnt[i] == ans[ans.size() - 1]){
            ans.pop_back();
        }else{
            ans.push_back(cnt[i]);
        }
    }
    out();

	return 0;
}