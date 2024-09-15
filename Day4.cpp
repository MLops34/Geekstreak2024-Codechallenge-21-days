class Solution {
  public:
    Node* bToDLL(Node* root) {
    Node* head=nullptr;
    Node* tail=nullptr;

    inorder(root, head, tail);

    return head;
}

void inorder(Node* root, Node*& head, Node*& tail) {
    if (root==nullptr) {
        return ;
    }
    inorder(root->left, head, tail);
    if (head==nullptr) {
        head=root;
        tail=root;
    } 
    else{
        tail->right=root;
        root->left=tail;
        tail=root;
    }
    inorder(root->right,head,tail);

}