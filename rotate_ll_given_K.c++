<<<<<<< HEAD
// Reverse a Linked List in group of Given Size. [Very Imp]
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* preptr=NULL;
        node* currptr=head;
        node* nextptr;
        int m=0;
        while(currptr!=NULL && m<k){
            nextptr=currptr->next;
            currptr->next=preptr;
            preptr=currptr;
            currptr=nextptr;
            
            m++;
        }
        if(nextptr!=NULL){
            head->next=reverse(nextptr,k);
        }
        
        return preptr;
        
        
    }
=======
// Reverse a Linked List in group of Given Size. [Very Imp]
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* preptr=NULL;
        node* currptr=head;
        node* nextptr;
        int m=0;
        while(currptr!=NULL && m<k){
            nextptr=currptr->next;
            currptr->next=preptr;
            preptr=currptr;
            currptr=nextptr;
            
            m++;
        }
        if(nextptr!=NULL){
            head->next=reverse(nextptr,k);
        }
        
        return preptr;
        
        
    }
>>>>>>> 02810623543e90c7289864de040eb95bfed417f7
};