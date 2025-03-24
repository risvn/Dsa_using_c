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


}







