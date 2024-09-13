class Solution {
  public:
    int length(Node *head){
        int cnt=0;
        Node * temp=head;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
    int getMiddle(Node* head) {
        // code here
        if(head==NULL) return -1;
        Node *temp=head;
        int mid=length(head)/2;
        
        while(mid>=1){
            temp=temp->next;
            mid--;
        }
        return temp->data;
    }
};
