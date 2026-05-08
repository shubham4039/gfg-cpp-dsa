/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

int NumberOfNodes(Node* slow){
    int sum = 1;
    Node* tempnew = slow;
    while(tempnew->next != slow){
        sum++;
        tempnew = tempnew->next;
    }
    return sum;
}

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;
        
        while(slow != nullptr && fast != nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow==fast){
                return NumberOfNodes(slow);
            }
        }
        return 0;
    }
};