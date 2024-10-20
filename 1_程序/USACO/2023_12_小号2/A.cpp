#include<bits/stdc++.h>
using namespace std;

int n,m;
long long h[200005],s[200005];
vector<int> pos1,pos2;
vector<int> h1,h2;

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&h[i]);
        if(!pos1.size() || h[i] > h[pos1[pos1.size() - 1]]){
            pos1.push_back(i);
            h1.push_back(h[i]);
        }
    }
    for(int i = 1;i <= m;i ++){
        scanf("%lld",&s[i]);
        for(int j = 0;j < pos1.size();j ++){
            // cout << pos1[j] << "[]\n";
            if(h[pos1[j]] >= s[i]){
                if(j == 0) h[pos1[j]] += s[i];
                else h[pos1[j]] += s[i] - h1[j - 1];
                if(!pos2.size() || h[pos1[j]] > h[pos2[pos2.size() - 1]]){
                    pos2.push_back(pos1[j]);
                    h2.push_back(h[pos1[j]]);
                }
                break;
            }
            if(j == 0) h[pos1[j]] += h[pos1[j]];
            else{
                long long t = h[pos1[j]] - h1[j - 1];
                h[pos1[j]] += t;
                // cout << pos1[j] << ";;" << t << "\n";
            }
            if(!pos2.size() || h[pos1[j]] > h[pos2[pos2.size() - 1]]){
                pos2.push_back(pos1[j]);
                h2.push_back(h[pos1[j]]);
            }
        }
        swap(pos1,pos2);
        swap(h1,h2);
        pos2.clear();
        h2.clear();
    }
    for(int i = 1;i <= n;i ++){
        printf("%lld\n",h[i]);
    }

    return 0;
}
