
//Liner Search
//22/01/2020
//Emon

#include<iostream>

using namespace std;
int main()

{
    int n,i,k,loc=0,x=0;


    cout<< "Enter the array size: ";
    cin>>n;
    int a[n];
    cout<< "Enter "<<n<<  " integers\n" ;

    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
            cout<< "Enter the search Item:";
            cin>> k;
            a[n]=k;
            while(a[loc]!=k)
                loc++;
             if(loc==n)
                cout<< "Search item not found: ";
            else
                cout<< "item found at location:"<<loc+1;


return 0;

}

