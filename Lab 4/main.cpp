#include <iostream>
#include "LinkedList.h"
using namespace std;
int main()
{
    SinglyLinkedList<int> thing;
    for(int i=0;i<5;i++)
    {
        thing.appendNode(i);
    }
    for(int i=20;i>15;i--)
    {
        thing.prependNode(i);
    }
    thing.insertNode(4, 30);
    thing.insertNode(19, 31);
    thing.insertNode(20, 32);
    thing.insertNode(16, 33);
    thing.insertNode(17, 34);
    thing.deleteNode(33);
    thing.deleteNode(34);
    thing.printList();
    cout<<thing.isEmpty()<<endl;
    cout<<thing.getCount()<<endl;
    thing.clear();
    cout<<thing.isEmpty()<<endl;
    cout<<thing.getCount()<<endl;
    return 0;
}
