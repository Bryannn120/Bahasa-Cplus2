#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head = NULL;

void insert(int data){
    node *temp = new node;
    temp->data = data;
    temp->next = head;
    head = temp;
}

void display(){
    node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    display();
}