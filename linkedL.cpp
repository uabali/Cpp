#include <iostream>
using namespace std;

// declare NodePtr as a pointer to Node, currently an incomplete type
//  C and C++ both allow you to declare a pointer to damn-near anything
//  so long as there is an understanding of what it *will* be, in this
//  case, a structure called Node.
typedef struct Node *NodePtr;

// Now declare the structure type itself
struct Node
{
    int x;
    NodePtr next;
};


void function_pop(NodePtr head, NodePtr** ptr)
{
    if (*ptr == NULL)
    {
        *ptr = new NodePtr; // Yeni NodePtr nesnesi oluşturuyoruz
        **ptr = new Node;
        (**ptr)->x = 63; // node değerini veriyoruz
        (*ptr) = NULL;
    }
}

int main()
{
    // load our list with 20 elements
    NodePtr head = NULL;
    // head adında bir node olusturdum
    NodePtr* ptr = &head;
    // headin adresini ptr ile aliyorum

    for (int n=1;n<=10; n= n+2)
    {
        *ptr = new Node;
        (*ptr)->x = n;
        // node degerini veriyoruz
        ptr = &(*ptr)->next;
        // sonraki node'un adresini alıyoruz
    }

    // terminate the list.
    *ptr = NULL;

    function_pop(head, &ptr);

    // walk the list, printing each element
    NodePtr p = head;
    while (p)
    {
        cout << p->x << ' ';
        p = p->next;
        // p en son NULL olacak 
    }
    cout << endl;

    


    return 0;
}