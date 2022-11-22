#include <iostream>
using namespace std;

class Product
{
public:
    string ProductName;
    string ProductID;
    float ProductPrice;
    Product()
    {
    }
    void GetProduct()
    {
        cout<<"Enter Product Name:";
        cin>>ProductName;
        cout<<"Enter Product ID:";
        cin>>ProductID;
        cout<<"Enter Product Price:";
        cin>>ProductPrice;

    }
};

class Node{

public:
    Product info;
    Node *next;
};


class LinkedList{

private:
    Node *head;
    Node *tail;

public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }

    void createNewNode(Product info)
    {
        info.GetProduct();
        Node *temp = new Node();
        temp->info = info;
        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    void ShowList(){
        while(head->next != NULL)
        {
            cout<<head->info.ProductName<<"  "<<head->info.ProductID<<"  "<<head->info.ProductPrice<<endl;
            head = head->next;
        }
        cout<<head->info.ProductName<<"  "<<head->info.ProductID<<"  "<<head->info.ProductPrice<<endl;
    }
};

int main()
{

   LinkedList *myList = new LinkedList();

   Product p1,p2,p3,p4,p5;

   myList->createNewNode(p1);
   myList->createNewNode(p2);
   myList->createNewNode(p3);
   myList->createNewNode(p4);
   myList->createNewNode(p5);
   myList->ShowList();

    return 0;
}
