
#include<iostream>
using namespace std;
int main()
{

int i,n,sum=0;
 float avg;
 cout <<"Enter the size of array:";
  cin>>n;

  //user input.
 int emon[n];

   cout<<"Enter the array item\n";
   for(i=0;i<n;i++)
    cin>>emon[i];

//user output.
   cout<<"The enterd array is:\n";
   for(i=0;i<n;i++)
   {


    cout<<emon[i]<<endl;
    sum=sum+emon[i];

   }
   cout<<"Your sumation value is:\n";
   cout<<sum<<endl;
   
   cout<<"Your Division value is:\n";
   avg=sum/(n*1.0);//avg=(float)sum/n;
   cout<<avg;
return 0;

}
