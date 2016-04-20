#include<stdio.h>
#include<stdlib.h>


int main(int argc,char *argv[])
{
    int A,B,C,m;

    printf("Please enter A :");
    scanf("%d",&A);
    printf("Please enter B :");
    scanf("%d",&B);
    printf("Please enter C :");
    scanf("%d",&C);
    printf("Please enter m :");
    scanf("%d",&m);

    if(m>5)
        printf("The result of Y=%d \n ", A*(m*m)+B*m+C);
    else if(m==5)
        printf("The result of Y=%d\n",A*(m*m)-B*m-C);
    else if(m<5)
        printf ("The result of Y= %d \n",A*(m*m)+B*m);


    system("PAUSE");
    return 0;
}
