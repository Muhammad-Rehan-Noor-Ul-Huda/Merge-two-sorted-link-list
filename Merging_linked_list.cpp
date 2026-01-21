

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        bool check=false;
        if(list1==nullptr){
            return list2;
        }
        if(list2==nullptr){
            return list1;
        }
        ListNode* temp1;
        ListNode* temp2;
        if(list1->val<list2->val){
            check=true;
         temp1=list1;
        temp2=list2;
        }
        else{
        temp2=list1;
        temp1=list2;

        }
        
        while(temp2!=nullptr){
           if(temp1->next==nullptr){
                while(temp2!=nullptr){
                    temp1->next=temp2;
                    temp2=temp2->next;
                    temp1=temp1->next;
                }
                break;
            }
            if((temp2->val)<=(temp1->next->val)){
                ListNode* hold=temp1->next;
                ListNode* hold2=temp2->next;
                temp1->next=temp2;
                temp1->next->next=hold;
                temp2=hold2;
                temp1=temp1->next;
                 
            }
            else{
                temp1=temp1->next;
            }
             
            
        }
        if(check){
            return list1;
        }
   return list2; }
};