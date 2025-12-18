#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node* next;

};

void TraversalOfLinkedList(struct Node* ptr)
{
    while(ptr!=NULL)//ptr means the node's adress itself 
    {
        //printing every node data
        printf("%d\n",ptr->data);
        //pointing to the next node
        ptr=ptr->next;//ptr next means the adress that that node stores(the address of the nest node)
    }

}

struct Node* InsertLinkedListIndex(struct Node* ptr,int index,int Data)
{

    struct Node* head=ptr;
    int i=index-1;
    
    while(i>0 && ptr!=NULL)
    {
        ptr=ptr->next;
        i--;
    }
    //ptr is now at the index before intended index//ptr=index 1
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=Data;
    newNode->next=ptr->next;
    ptr->next=newNode;
    return head;

}

struct Node* InsterNewHead(struct Node* ptr,int Data)
{
    struct Node* NewHead=(struct Node*)malloc(sizeof(struct Node));
    NewHead->data=Data;
    NewHead->next=ptr;
    
    return NewHead;
}
struct Node* InsertLastIndex(struct Node* ptr,int Data)
{
    struct Node* head=ptr;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;

    }
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=newNode;
    newNode->data=Data;
    newNode->next=NULL;
    return head;
}

int main() 
{    
   struct Node* head;//index 0
   struct Node* n1;
   struct Node* n2;
   struct Node* n3;
   struct Node* n4;

    //  allocating memory space in heap
    head=(struct Node*)malloc(sizeof(struct Node));
    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));
    n4=(struct Node*)malloc(sizeof(struct Node));

    //  filling our linked list togather and linking them togather as well
    head->data=22;
    head->next=n1;
    n1->data=23;
    n1->next=n2;
    n2->data=33;
    n2->next=n3;
    n3->data=11;
    n3->next=n4;
    n4->data=-99;
    n4->next=NULL;
    TraversalOfLinkedList(head);

    printf("\nNew List is: \n");
    head=InsertLinkedListIndex(head,2,167);

    
    head=InsterNewHead(head,122);
    head=InsertLastIndex(head,49932);
    TraversalOfLinkedList(head);



    struct Node* temp;
    while(head!=NULL)
    {
        temp=head; //save the current node
        head=head->next; //move to the next node
        free(temp); //remove the first node mention 
    }
    
    return 0;
}