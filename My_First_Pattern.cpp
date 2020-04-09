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
    printf("Length of diagonal must be greater than 2 for pattern to be observable.\n");
    printf("Enter the length of the diagonal:");
    scanf("%d",&n);

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
        printf("\n");
        v=v+2;
    }

     for(int d=1; d<=(n/2); d++)
            printf(" ");

     for(int e=1; e<=n-1;e++)
     {
         printf("#");

         for(int f=1;f<=2*(n/2);f++)
            printf(" ");
     }
     printf("\n");

     z=n-3;
     for(int i=n/2; i>=1; i--)
    {
        for(int b=1; b<i; b++)
            printf(" ");

         for ( int a=1; a<=n-1; a++)
        {
            printf("#");

            for(int j=z; j<n-2; j++)
                printf(" ");
            if(a!=n-1)
                printf("#");
            for(int k=1;k<=2*(i-1); k++)
                printf(" ");

        }
        printf("\n");
        z-=2;
    }
}
else
    printf("Pattern not possible!");
    return (0);
}
