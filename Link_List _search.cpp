#include<iostream>
#include<string.h>


using namespace std;
class node
{
public:
   // int info;
    string info;
    node*link;

};
int main()



{
    node start;
    node *n;
    start.link=NULL;
    n=&start;
    int i,no;
    cout<<"Enter the number of node:";
    cin>>no;

    for(i=0;i<no;i++)
    {
        n->link=new node();
        cout<<"Enter elements in node"<<i+1<<":";
        cin>>n->info;
        n=n->link;
    }
    n->link=NULL;
        n=&start;
        cout<<"Entered linked list:\n";

         while(n->link!=NULL)
         {
             cout<<"  "<<n->info;
             n=n->link;
         }
         cout<<"\nEnter the item to search:";
         //int item;
         string item;
         cin>>item;
         int count =1;
         n=&start;

         while(n->link!=NULL)
         {
             if(n->info==item)
                break;
             else
                count++;
             n=n->link;

         }
         if(count<=no)
            cout<<"search item,is at node:"<<count;
         else
            cout<<"Your item is not found in the list!";


    return 0;
}
