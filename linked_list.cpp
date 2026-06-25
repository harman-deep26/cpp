#include<iostream>
using namespace std;
struct node{
    int info;
    node* link;
};
struct node* temp;
struct node* head=NULL;
struct node* last=NULL;
void insert(int data){
    temp=new node;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
        last=temp;
        temp->info=data;
    }
    else{
        temp->info=data;
        last->link=temp;
        last=temp;
    }
}
void display(){
    temp=head;
    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->link;
    }
}

int main(){
    int data;
    int choice=1;
    while(choice==1){
        cout<<"Enter data:";
        cin>>data;
        insert(data);
        cout<<"Enter choice:";
        cin>>choice;
    }
    display();
}