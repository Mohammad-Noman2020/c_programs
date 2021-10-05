#include <stdio.h>
//recursion to print numbers from 1-N using recursion
int print_One_to_N(int n);

//recursion to print numbers from N-1 using recursion
int print_N_to_One(int n);

int main()
{

    int n;
    printf("Enter number to print from 1 to ... : \n");

    scanf("%d",&n);

    print_One_to_N(n);


    printf("Enter number to print to.. from 1 : \n");

    scanf("%d",&n);
    print_N_to_One(n);






    return 0;
}


int print_One_to_N(int n)
{

    static int a=0;

    if(n==0)
    {
        return 0;

    }
    else
    {

        printf("%d\n",a);
        a++;
        print_One_to_N(n-1);

    }


}

int print_N_to_One(int n)
{


    if(n==0)
    {
        return 0;

    }
    else
    {

        printf("%d\n",n);
        print_N_to_One(n-1);

    }


}


