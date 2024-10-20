// #include<bits/stdc++.h>
// using namespace std;

// struct ListNode{
//     int val;
//     ListNode *next;
//     ListNode() : val(0),next(nullptr){}
//     ListNode(int x) : val(x),next(nullptr){}
//     ListNode(int x,ListNode *next) : val(x),next(next){}
// };

// int a[1005] = {6,10,3};

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

ListNode *insert(ListNode *head){
    ListNode *l = head;
    ListNode *r = l->next;
    while(r != nullptr){
        ListNode *node = new ListNode;
        node->val = gcd(l->val,r->val);
        node->next = r;
        l->next = node;
        l = r;
        r = r->next;
    }
    return head;
}

// void addnode(ListNode *p,int i) {
//     ListNode *node = new ListNode;
//     node->val = i;
//     p->next = node;
// }

// int main(){
// #ifndef ONLINE_JUDGE
//     freopen("../data.in","r",stdin);
//     freopen("../data.out","w",stdout);
// #endif
//     ios::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ListNode f = ListNode(18);
//     ListNode *head = &f;
//     ListNode *p = head;
//     for(int i = 0;i < 3;i ++){
//         addnode(p,a[i]);
//         p = p->next;
//     }
//     head = insert(head);
//     while(head != nullptr){
//         printf("%d ",head->val);
//         head = head->next;
//     }

//     return 0;
// }