#include "node.h"

class ll {
  private: 
  int size = 0;
  Node* head;

  public:
  ll ();
  ~ll ();
  void insert (string n, int i);
  void print_ll ();

};

ll::ll (){

head = nullptr;

}
ll::~ll (){
while (head!=nullptr){
Node* temp = head;
head = head -> get_next();
delete temp;
size--;
}
}

void ll::print_ll(){
Node* current = head;
while (current != nullptr){
current -> print();
current = current -> get_next();
}
}

void ll::insert(string n, int i){
Node* newnode = new Node(n,i);
if(size == 0){
head = newnode;
} else{
Node* temp = head;
while(temp -> get_next()!= nullptr){
temp = temp -> get_next();
}
temp -> set_next(newnode);
}
size++;
}