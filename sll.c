#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head=NULL, *tail=NULL,*newnode;

void getnode(){
    newnode=(struct node*)malloc(sizeof(struct node));
}

void readnode(){
    int d;
    scanf("%d",&d);
    newnode->data=d;
    newnode->next=NULL;
}

void traverse_even(struct node *temp){
    while(temp!=NULL){
        if(temp->data%2!=0){
        printf("%d ",temp->data);}
        temp=temp->next;
        }
    }


int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        getnode();
        readnode();
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    traverse_even(head);
}