#include <stdio.h>
//recursion to print numbers from 1-N using recursion
int printHelloWorld(int n);


int main()
{

    int n;
    printf("How many times you want to print ? : \n");

    scanf("%d",&n);

    printHelloWorld(n);





    return 0;
}


int printHelloWorld(int n)
{


    if(n==0)
    {
        return 0;

    }
    else
    {

        printf("Hello world\n");
        printHelloWorld(n-1);

    }


}
