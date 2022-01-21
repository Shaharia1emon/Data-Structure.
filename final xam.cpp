/* Name:Shaharia Bhuiyan Emon.
ID:CSE1901016029.
section:16A3(Fatikchhari). */
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int choice;
    while(1)
    {
        cout<<"\t\t Which Number you select"<<endl<<endl;
        cout<< "\t\t 1.Sort the array in Lexicographical oder." << endl;
        cout<< "\t\t 2.Search the array using binary search technique." << endl;
        cout<< "\t\t 3.Insert a name at any place into the array." << endl;
        cout<< "\t\t 4.Delete a name  from any place from the array." << endl;
        cin>>choice;
        switch ( choice)
        {
        case 1:
           {
                int  emon,s,n;
            char str[50][50],temp[50];
            cout<<"\t\t  Write the Student Name you want's : ";
            cin>>n;
            for(emon=0; emon<n; emon++)
                cin>>str[emon];
            for(emon=0; emon<=n; emon++)
                for(s=emon+1; s<n; s++)
                {
                    if(strcmp(str[emon],str[s])>0)
                    {
                        strcpy(temp,str[emon]);
                        strcpy(str[emon],str[s]);
                        strcpy(str[s],temp);
                    }
                }
            cout<<"\t\t After sorting the array in Lexicogrphical: \n";
            for(emon=0; emon<n; emon++)
                cout<<endl<<str[emon]<<endl;
           }
            break;
        case 2:
           {
                int em,i;
            cout<<"Enter number u want's:";
            cin>>em;
            // string
            int search[em];
            for(i=0; i<em; i++)
            {
                cout<<"Enter the value:";
                cin>>search[i];
            }
            // string item;
            int item, beg,end,mid;
            cout<<"Enter a search item:";
            cin>>item;
            beg=0;
            end=em;
            mid=(beg+end)/2;
            while(beg <= end && search[mid]!=item)
            {
                if(item<search[mid])
                {
                    end=mid-1;
                }
                else
                    beg=mid+1;
                mid=(beg+end)/2;
            }
            if(item==search[mid])
            {
                cout<<"Search item found at position  "<<mid+1<<endl;
            }
            else
                cout<<"search is not found";
           }
            break ;
        case 3:
            {
                int j,i,n;
            cout<<"number of array size:";
            cin>>n;
            int a[n];
            cout<<"Enter input value:\n";
            for(i=0; i<n; i++)
            {
                cout<<"Number "<<i+1<<":";
                cin>>a[i];
            }
            cout<<"your output value:\n";
            for(i=0; i<n; i++)
            {
                cout<<"Number "<<i+1<<":";
                cout<<a[i]<<endl;
            }
            int  k;
            int item;
            cout<<"enter the position to enter:";
            cin>>k;
            for(j=n-1; j>=k; j--)
            {
                a[j+1]=a[j];
            }
            cout<<"enter the item insart value:";
            cin>>item;
            a[k]=item;
            n=n+1;
            cout<<"after insarting:\n";
            for(j=0; j<n; j++)
            {
                cout<<a[j]<<endl;
            }
            }
            break;
        case 4:
        {

            int pos,siz,i,j,length;

            cout<<"Enter array size :";//which represents the number of string
            cin>>siz;

            cout<<"Enter string length:";
            cin>>length;

            char demo[siz][length];
            // cout<<"Plz input the all word:\n";
            for (i=0; i<siz; i++)
            {
                cout<<"PLZ input "<<i+1<<" no. word :";
                cin>>demo[i];
            }
            cout<<"\tYour inputs are:\n";

            for (i=0; i<siz; i++)
            {
                cout<<demo[i]<<endl;
            }

            cout<<"Now if u wanted to delete a word then\n";
            cout<<"Enter a position number:";
            cin>>pos;

            //int n=siz;
            char value[length];


            for (j=pos; j<=siz-1; j++)
            {

                strcpy(demo[j],demo[j+1]);

            }
            cout<<"\t:After deleting a new Word:\n";

            siz=siz-1;
            for (i=0; i<siz; i++)
            {
                cout<<demo[i]<<endl;
            }

        }
            break ;
        default:
            cout<<"Invalid your choice"<<endl;
        }
    }
    return 0;
}
