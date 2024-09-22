class Solution {
  public:
    Node *copyList(Node *head) {
    unordered_map<Node*, Node*> map;
    Node *newHead = NULL;
    Node *lastNode = NULL;

    Node *currentNode = head;
    while (currentNode != NULL) {
        Node *newNode = new Node(currentNode->data); 
        newNode->data = currentNode->data;
        map[currentNode] = newNode;
        if (lastNode == NULL) {
            newHead = newNode;
        } else {
            lastNode->next = newNode;
        }
        lastNode = newNode;
        currentNode = currentNode->next;
    }

    currentNode = head;
    while (currentNode != NULL) {
        Node *newCurrentNode = map[currentNode];
        if (currentNode->random != NULL) {
            newCurrentNode->random = map[currentNode->random];
        }
        currentNode = currentNode->next;
    }

    return newHead;
        
    }
};