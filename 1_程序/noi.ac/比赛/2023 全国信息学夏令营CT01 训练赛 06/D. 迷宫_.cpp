#include<bits/stdc++.h>
using namespace std;

struct node{
    int deep;
    int xi,yi;
    string si;
    bool operator < (const node &a) const{
        if(deep != a.deep) return deep > a.deep;
        return si > a.si;
    }
};

int n,m;
int a[1005][1005] = {0};
bool vis[1005][1005] = {0};
int dir[2][2] = {{0,1},{1,0}};
string ans;

void bfs(){
    priority_queue<node> q;
    string k = "";
    k.push_back(a[0][0] + '0');
    q.push({0,0,0,k});
    while(q.size()){
        node t = q.top();
        if(t.xi == n - 1 && t.yi == m - 1){
            ans = t.si;
            return;
        }
        q.pop();
        // cout << t.xi << "  " << t.yi << endl;
        // cout << t.si << endl;
        for(int i = 0;i < 2;i ++){
            int tx = t.xi + dir[i][0];
            int ty = t.yi + dir[i][1];
            if(tx < n && ty < m && !vis[tx][ty]){
                vis[tx][ty] = 1;
                k = "";
                k.push_back(a[tx][ty] + '0');
                q.push({t.deep + 1,tx,ty,t.si + k});
            }
        }
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i ++){
		for(int j = 0;j < m;j ++){
			scanf("%d",&a[i][j]);
		}
	}
    vis[0][0] = 1;
    bfs();
    cout << ans << "\n";

	return 0;
}