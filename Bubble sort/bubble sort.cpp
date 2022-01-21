//bubble sort
//20/01/20.
//Accending order.or and disending order.
#include<iostream>
using namespace std;
int main()
{
     int i,k,n,ptr,temp;
     cout<< "Enter the size:";
     cin>>n;
     int data[n];
     cout<<"Enter the aray:"<<endl;
     for(i=0;i<n;i++)
        cin>>data[i];
     for(k=1;k<n;k++)
     {
      for(ptr=0;ptr<n-k;ptr++)
      {
          if(data[ptr]>data[ptr+1])//ai khane ('<')ta dile deccending order dekhabe.
          {
              //swapping part;
            temp=data[ptr];
            data[ptr]=data[ptr+1];
            data[ptr+1]=temp;
          }
      }
     }
     cout<<"Array after bubble sort:"<<endl;
       for(i=0;i<n;i++)
        cout<<data[i]<<endl;
    return 0;
}
