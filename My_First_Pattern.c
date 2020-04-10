/*
*
*
*   Author : Vishu Tomar
*   About Program : This program prints the following Pattern for n=5-
*        
*
*        #   ##   ##   ##
*         # #  # #  # #  #
*          #    #    #    #
*         # #  # #  # #  #
*        #   ##   ##   ##
*
*
**/
     
     
#include<stdio.h>
int main()
{
    int n,v=1,z;
    cout<<"Length of diagonal must be greater than 2 for pattern to be observable.\n";
    cout<<"Enter the length of the diagonal:";
    cin>>n;

if(n%2!=0&&n>=3)
{
    for(int i=1; i<=(n/2); i++)
    {
        for(int b=1; b<i; b++)
            printf(" ");
        for ( int a=1; a<=n-1; a++)
        {

            printf("#");

            for(int j=v;j<=n-2; j++)
                printf(" ");
            if(a!=n-1)
                printf("#");
            for(int k=1;k<=2*(i-1); k++)
                printf(" ");

        }
        cout<<"\n";
        v=v+2;
    }

     for(int d=1; d<=(n/2); d++)
            cout<<" ";

     for(int e=1; e<=n-1;e++)
     {
         cout<<"#";

         for(int f=1;f<=2*(n/2);f++)
            cout<<" ";
     }
     cout<<"\n";

     z=n-3;
     for(int i=n/2; i>=1; i--)
    {
        for(int b=1; b<i; b++)
            cout<<" ";

         for ( int a=1; a<=n-1; a++)
        {
            cout<<"#";

            for(int j=z; j<n-2; j++)
                cout<<" ";
            if(a!=n-1)
                cout<<"#";
            for(int k=1;k<=2*(i-1); k++)
                cout<<" ";

        }
        cout<<"\n";
        z-=2;
    }
}
else
    cout<<"Pattern not possible!";
    return (0);
}
