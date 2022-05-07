class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *d1 = new Node(0) , *dd1 = d1;
        Node *d2 = new Node(0) , *dd2 = d2;
        
        while(head){
            if(head->data %2==0){
                d1->next = head;
                d1 = d1->next;
            }
            else{
                d2->next = head;
                d2 = d2->next;
            }
            head = head->next;
        }
        d2->next = NULL;
        d1->next = dd2 -> next;
        
        return dd1->next;
    }
};