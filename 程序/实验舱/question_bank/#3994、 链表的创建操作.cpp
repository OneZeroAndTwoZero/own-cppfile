ListNode *BuildList(int arr[], int n) {
    ListNode *head = new ListNode(0);
    ListNode *cur = head;
    for (int i = 1; i <= n; i ++){
        cur -> next = new ListNode(arr[i]);
        cur = cur -> next;
    }
    cur -> next = nullptr;
    return head;
}
