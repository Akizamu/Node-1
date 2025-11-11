#include <iostream>
#include <string>
using namespace std;
#include "node.h"

int main(){


Node* head = new Node("A", 1);
Node* node2 = new Node("B", 2);
Node* node3 = new Node("C", 3);
Node* node4 = new Node("D", 4);

head -> set_next(node2);
node2 -> set_next(node3);
node3 -> set_next(node4);

Node* current = head;
while(current != nullptr){
    current->print();
    current=current->get_next();
}


delete head;


}