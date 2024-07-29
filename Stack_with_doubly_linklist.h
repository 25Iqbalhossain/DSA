#include<bits/stdc++.h>
using namespace std;
class Node{
    //doubly link list
public:
    int value;
    Node* next;
    Node* prev;

    Node(int val){
    value=val;
    next=NULL;
    prev=NULL;

    }


};
class Stack{

Node* head;
Node* top;
int count=0;
public:
    Stack(){
        head=NULL;
        top=NULL;
    }
    //Push
    void push(int value){
    Node* newNode=new Node(value);
     if(head==NULL){
    head=top=newNode;
    count++;
        return;
      }
     top->next=newNode;
     newNode->prev=top;//it's need becouse doubly link list
     top=newNode;
     count++;

      }
      //Pop
      int pop(){
      Node* delNode;
     delNode=top;
     int chek=-1;
     if(head==NULL){
        cout<<"stack underflow"<<endl;
        return chek;
      }

    if(top==head){
    head=top=NULL;
    count--;
     }
     else{
    top=delNode->prev;
    top->next=NULL ;
     }
    chek =delNode->value;
    delete delNode;
     count--;
     return chek;
       }
       //Empty
       bool empty(){
       if(head==NULL) return true;
       else return  false;}
       //size
        int size(){

        return count;
          }
          //Top
        int Top(){
        if(top==NULL){
        cout<<"Stack UNderflowed||Top empty"<<endl;
            }
        else return top->value;
                    }

                    };





