#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    int id1,id2,id3,id4;
    node operator & (const node &a) const{
        return {id1 & a.id1,id2 & a.id2,id3 & a.id3,id4 & a.id4};
    }
    bool operator == (const node &a) const{
        return id1 == a.id1 && id2 == a.id2 && id3 == a.id3 && id4 == a.id4;
    }
};

node mine,web;
int n;
node ip;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d.%d.%d.%d",&mine.id1,&mine.id2,&mine.id3,&mine.id4);
    scanf("%d.%d.%d.%d",&web.id1,&web.id2,&web.id3,&web.id4);
    mine = mine & web;
    scanf("%d",&n);
    while(n --){
        scanf("%d.%d.%d.%d",&ip.id1,&ip.id2,&ip.id3,&ip.id4);
        ip = ip & web;
        if(mine == ip) printf("INNER\n");
        else printf("OUTER\n");
    }

    return 0;
}