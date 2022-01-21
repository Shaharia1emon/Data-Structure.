//01/02/2020
//shaharia Bhuiyan Emon.
//cse1901016029.
#include<iostream>
#include<string.h>
using namespace std;
 int main()
{

    int emon,s,n;
    char str[50][50],temp[50];
      cout<<"\t\t How many student's Id you want: ";
       cin>>n;

            for(emon=0;emon<n;emon++)
         cin>>str[emon];

    for(emon=0;emon<=n;emon++)
        for(s=emon+1;s<n;s++)

    {
    if(strcmp(str[emon],str[s])>0)
                {
                strcpy(temp,str[emon]);
                strcpy(str[emon],str[s]);
                strcpy(str[s],temp);
                }
    }
                cout<<"\t\t After sorting in ascending Id list: \n";
    for(emon=0;emon<n;emon++)
                cout<<endl<<str[emon]<<endl;



            cout<<"\t\t Shaharia Bhuiyan Emon";
        return 0;
}

