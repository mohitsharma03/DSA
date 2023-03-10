//Linked List Insertion
//gfg: https://bit.ly/3w9pEIt

#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) { 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 

class Solution{
  public:
    Node *insertAtBegining(Node *head, int x) {
      Node * newnode = new Node(x);
      newnode -> next = head;
      head = newnode;
      return head;
    }
    Node *insertAtEnd(Node *head, int x)  {
      Node * newnode = new Node(x);
      if(!head)     return newnode;
      Node * temp = head ; 
      while(temp->next){
          temp = temp->next ; 
      }
      temp->next = newnode ; 
      return head ; 
    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 
