#include "LinkedList.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    LinkedList myList;

    for(int i=0; i<15; i++){
        int a = rand()%500+1;
        myList.insertItem(a);
    }

    cout << "the list: "<< endl;

    myList.print();

    cout << "\n\nCheck retreive item method - test 1 - next line must be 1: " << endl;

    myList.insertItem(12);
    bool found;
    myList.retreiveItem(12, found);
    cout << found << endl;


    cout << "\n\ncheck retreive item method - test 2 - next line must be 0: " << endl;

    myList.retreiveItem(800, found);
    cout << found << endl;

    cout << "\n\ncheck delete item method - test 1 - delete from head: " << endl;

    myList.print();
    cout << endl;
    myList.deleteItem(12);
    myList.print();

    cout << "\n\ncheck delete item method - test 2: " << endl;

    myList.insertItem(120);
    myList.print();
    cout << endl;
    myList.deleteItem(120);
    myList.print();
}
