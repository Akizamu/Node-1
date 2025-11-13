class Node;

class Linkedlist{
    private:
    Node* head;
    int size = 0;

    public:
    Linkedlist();
    ~Linkedlist();
    void print_ll();
    void insert_end(string n, int i);
};

  Linkedlist::Linkedlist(){

    head = nullptr;

  }

  void Linkedlist::print_ll(){

    Node* current = this->head;
  while(current != nullptr){
    current->print();
    current=current->get_next();
}

  }

    Linkedlist::~Linkedlist(){
      while(head != nullptr){
      Node* temp = this->head;
      head = head -> get_next();
      temp->print();
      delete temp;
      size--;
      }

     void Linkedlist::insert_end(string n, int i){
      Node* newnode = new Node(n,i);
      if(size = 0){
      head = newnode;
      } else {
        Node* temp = head;
        while(tmep->get_next()!=nullptr){
          temp = temp -> get_net();
        }
        temp -> set_next(newnode);


      }

      size ++;


     }


    }





