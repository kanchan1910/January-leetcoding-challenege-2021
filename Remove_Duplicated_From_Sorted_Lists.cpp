class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* dummy = new ListNode(0);
        
        dummy->next=head;
        
        ListNode* prev=dummy;
        
        ListNode* cur=head;
        
        while(cur!=NULL){
            
            if(cur->next!=NULL&&cur->val==cur->next->val){
                
                while(cur->next!=NULL&&cur->val==cur->next->val){
                    
                    cur=cur->next;
                    
                }
                
                prev->next=cur->next;
                
            }
            else{
                
                prev=prev->next;
                
            }
            
            cur=cur->next;
            
        }
        
    return dummy->next;
    
    }
};
