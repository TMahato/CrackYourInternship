class Solution
{
    public:
    Node *zigZag(Node* head)
    {
     // your code goes here
        if(!head and !head->next)
            return head;
        // head = sortList(head);
        
        bool flag = 1;
        Node *curr = head;
        while(curr->next){
            if(flag){
                if(curr->data > curr->next->data){
                    swap(curr->data , curr->next->data);
                }
            }
            else{
                if(curr->data < curr->next->data){
                    swap(curr->data , curr->next->data);
                }
            }
            curr = curr->next;
            flag = !flag;
        }
        return head;
    }
};