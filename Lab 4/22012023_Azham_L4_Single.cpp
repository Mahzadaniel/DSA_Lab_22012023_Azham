#include <iostream>
using namespace std;
class Node {
  public :
  string name;
  Node* next;
  Node(string name) :name(name), next(nullptr) {}
};
  class LinkedList{
    public;
    Node* head;
    Node* tail ;
    LinkedList(){
      head= nullptr;
      tail = nullptr;
      
    }
  } ;
  void display(){
    if (!head){
    cout<< "list is empty " << "" ;
    return;
  }
  Node* current = head;
  do{
    cout<< current -> name << "->";
    current = current -> next;
  }while(current != head);
  cout<< "(back to head)"<< endl;
  } 
  
  void add (Node* node){
    if (!head){
      head = node;
      tail = node;
      
    }else{
      tail-> next = node;
      tail = node ;
      tail -> next = head ;
    }
  }
  
};

int main() 
{
    cout<< "singly Linked List"<< endl ;
    LinkedList list ;
    Node* node1 = new Node("Azham")
    Node* node2 = new Node("ali")
    Node* node3 = new Node("ahmed")
    Node* node4 = new Node ("alice")
    
    list.add_element(node1):
    list.add_element(node2):
    list.add_element(node3):
    list.add_element(node4):
    
    list.display_list()
    return 0;
}