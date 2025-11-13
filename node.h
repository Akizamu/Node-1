
class Node{

private:
int id;
string name;
Node* next;

public:
Node(string n, int i);
~Node();
void print();
void set_next(Node* n);
Node* get_next();

};

Node::Node(string n, int i){

name = n;
id = i;
next = nullptr;

}

Node::~Node(){

cout <<"Deleting node: "<< name <<endl;

}

void Node::print(){
cout <<"Name: "<< name <<endl;
cout <<"ID: "<< id << endl;
}

void Node::set_next(Node* n){
    next = n;
}

Node* Node::get_next(){
    return next;
}