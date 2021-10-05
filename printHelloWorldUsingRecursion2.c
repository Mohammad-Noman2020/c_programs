#include <stdio.h>


int printHelloWorldUsingRecursion2(int n,char *text);


int main()
{

    int n;
    printf("How many times you want to print ? : \n");

    scanf("%d",&n);

    char text[100];

    printf("What do you want to print? \n");
    gets(stdin);
    gets(text);
    printf("Printing texts: \n\n");

    printHelloWorldUsingRecursion2(n,text);





    return 0;
}


int printHelloWorldUsingRecursion2(int n,char *text)
{


    if(n==0)
    {
        return 0;

    }
    else
    {

        printf("%s\n",text);
        printHelloWorldUsingRecursion2(n-1,text);

    }


}
