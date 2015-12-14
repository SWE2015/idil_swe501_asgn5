#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node
    {
        int    data;
        Node*  next;
        Node(int data, Node* next):
            data(data), next(next)
        {}
    };

class LinkedList
{
    public:
        Node * head;
        LinkedList():
            head(0){}
        ~LinkedList();
        void insertItem(int data);
        void retreiveItem(int data, bool & found);
        void deleteItem(int data);
        void print();
    protected:
    private:

};

#endif // LINKEDLIST_H
