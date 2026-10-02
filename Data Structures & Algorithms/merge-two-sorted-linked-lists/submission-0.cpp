class Solution {
public:
   
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* curr = &dummy; // curr is a pointer which is storing the address of dummy node

        while(list1 && list2){
            if(list1->val <= list2->val){
                curr->next = list1;
                list1 = list1->next;
            }else{
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next; // we have to update new ll curr
        }

        if(list1){
            curr->next = list1;
        }else{
            curr->next = list2;
        }
        return dummy.next;
    }
};

// 0(n + m) size of both ll
// 0(1)
