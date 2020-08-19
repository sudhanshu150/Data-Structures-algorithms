#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};

void printlist(Node* n)
{

    while(n!= NULL)
    {
        cout<< n->data<<"  ";
        n=n->next;
    }
}
int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* thrid =NULL;

    head-> data=1;
    head->next=second;

    second-> data=2;
    second->next=thrid;

    thrid-> data=3;
    thrid->next=NULL;


    printlist(head);

    return 0;
}
