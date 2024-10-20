int FintList(ListNode *head, int x){
    int cnt = 0;
    ListNode *cur = head -> next;
    while (cur != nullptr){
        cnt ++;
        if (cur -> val == x) return cnt;
        cur = cur -> next;
    }
    return -1;
}
