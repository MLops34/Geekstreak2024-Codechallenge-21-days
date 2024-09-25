lass Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        vector<int>array;
        Node *temp=head;
        bool ans=true;
        while(temp!=NULL){
            array.push_back(temp->data);
            temp=temp->next;
        }
        reverse(array.begin(),array.end());
        temp=head;
        for(int i=0;i<array.size();i++){
            if(array[i]!=temp->data){
                ans=false;
            }
            temp=temp->next;
        }
        return ans;
    }
};