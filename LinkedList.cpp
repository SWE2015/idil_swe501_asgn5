#include "LinkedList.h"
#include <iostream>

using namespace std;

void LinkedList::insertItem(int data)
{
    if (head == nullptr || head->data >= data)
    {
        Node * newNode = new Node(data, head);
        head = newNode;
    }
    else
    {
        // First find a pointer to the appropriate position of new item
        Node * current = head;
        while(current->next != nullptr && current->next->data < data )
        {
             current = current->next;
        }
        // Now just add the node.
        Node * newNode = new Node(data, current->next);
        current->next = newNode;
    }
}

void LinkedList::retreiveItem(int data, bool & found)
{
    Node * current = head;
        while(current->next != nullptr && current->data != data)
        {
            current = current->next;
        }

        if(current->data == data)
            found = true;
        else
            found = false;
}

void LinkedList::deleteItem(int data)
{
    bool found;
    this->retreiveItem(data, found);
    if(found){
        Node * current = head;
        if(current->data == data)
        {
            head = current->next;
        }
        else
        {
            while(current->next->data != data)
            {
            current = current->next;
            }

            current->next = current->next->next;
        }

    }
}


void LinkedList::print()
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "   ";
        temp = temp -> next;
    }
}

LinkedList::~LinkedList()
{
     Node* tmp;
        for(;head;head = tmp)
        {
            tmp = head->next;
            delete head;
        }
}
