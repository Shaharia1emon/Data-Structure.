#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
public:
//int info;
string info;
node*link;
};
void print(node*ptr)
{
    while (ptr!=NULL)
    {
        cout<<ptr->info<<"\t";
        ptr=ptr->link;
    }
}
int main()
{
    node* start=NULL;
    node* second=NULL;
    node* third=NULL;

     start=new node();
     second=new node();
     third=new node();

      start->info="Mara";
      start->link=second;

      second->info=" K h a w";
      second->link=third;

      third->info=" S o b a i";
      third->link=NULL;
      cout<<"Items in the linked list:";
print(start);

        return 0;
}
