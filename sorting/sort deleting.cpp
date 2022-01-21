//shaharia bhuiyan emon.
#include<iostream>
#include<string.h>
using namespace std;
int main ()

{
    //int
    int j,i,n;
    cout<<"\t\t\tNumber of array size:";
    cin>>n;
    //int
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
        int k;


       cout<<"Enter the position to delet:";
       cin>>k;

        for(j=k;j<=n-1;j++)
            {
             a[j]=a[j+1];
        }

         n=n-1;
        cout<<"After deleting:\n";
        for(j=0;j<n;j++){
             cout<<a[j]<<endl;
        }



    return 0;
}
