//insert sort
#include<iostream>
#include<string.h>
using namespace std;
int main ()

{
    int j,i,n;
    cout<<"number of array size:";
    cin>>n;

     int a[n];
cout<<"Enter input value:\n";
    for(i=0;i<n;i++)
    {
        cout<<"Number "<<i+0<<":";
        cin>>a[i];

    }
     cout<<"your output value:\n";
        for(i=0;i<n;i++)
        {
             cout<<"Number "<<i+0<<":";
            cout<<a[i]<<endl;
        }
        int   k;


         int item;

       cout<<"Which Number of position you insart the Value:";
       cin>>k;

        for(j=n-1;j>=k;j--)
            {
             a[j+1]=a[j];
        }



        cout<<"Enter the item insart value:";
        cin>>item;

        a[k]=item;
        n=n+1;
        cout<<"after insarting:\n";
        for(j=0;j<n;j++){
             cout<<a[j]<<endl;
        }



    return 0;
}
