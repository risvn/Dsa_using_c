#include<stdio.h>
#include<stdlib.h>

typedef struct node {
int data ;
struct node *link;
}node;

struct node* head; //global variable

//prepend function
void Prepend(int num){
  struct node* temp=(node*)(malloc(sizeof(node)));
  temp->data=num;
  temp->link=head;
  head=temp;
}

//print function
void Print(){
struct node* temp=head;
printf("List is . ");
while(temp!=NULL){
    printf(" %d",temp->data);
    temp=temp->link;
}
printf("\n");
}

void Delete(int n){
    struct node* temp=head;
    if(n==1){head=temp->link;    //edgecase
    return;};//  
    for(int i=0;i<n-2&&temp!=NULL;i++) {temp=temp->link;};      //n-2 because head=1 and traversing n-1 length
      struct node*  del_temp=temp->link;
        temp->link=del_temp->link;
        free(del_temp);}

void Insert(int data,int index){
struct node* temp=head;
struct node* insert_node=(node*)(malloc(sizeof(node)));
    insert_node->data=data;
    if(index==1){insert_node->link=head;
    head=insert_node;
    return; };
for(int i=0;i<index-2&&temp!=NULL ;i++){temp=temp->link;};          //traversing the list
    insert_node->link=temp->link;
    temp->link=insert_node;}


int main(){
printf("How many numbers : ");
int len,num,i;
scanf("%d",&len);
for(i=0;i<len;i++){
    printf("Enter the number\n");
    scanf("%d",&num);
   Prepend(num);
    Print();
  }

    printf("deleting  the number\n");
    Delete(3);
    Print();

}







