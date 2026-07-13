/*
Exercise 30: Linked List Node (Concept)
Practice Problem: Define a simple structure named Node containing an integer data member 
and a pointer named next that points to another Node structure (i.e., Node* next).
Create three such nodes dynamically (n1, n2, n3). Link them sequentially using t
he next pointer (n1 -> n2 -> n3). 
Finally, traverse the small list using a temporary pointer and print all the data values.

Expected Output:

Linked List Traversal: 10 20 30 
*/
#include <iostream>
using namespace std;




struct Node{
    int data;
    Node* next;
};
int main(){

    Node* n1=new Node{10,nullptr};
    Node* n2=new Node{20,nullptr};
    Node* n3=new Node{30,nullptr};
    n1->next=n2;
    n2->next=n3;
    Node* ptr=n1;
    while(true){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
        if (!ptr){
            break;
        }
    }


    delete n1;
    delete n2;
    delete n3;

    return 0;
}
