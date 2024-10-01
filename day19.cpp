/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int>result;
    void swe(Node *r){
        if(!r){return;}
        swe(r->left);
        result.push_back(r->data);
        swe(r->right);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        swe(root1);
        swe(root2);
        sort(result.begin(),result.end());
        return result;
    }
};