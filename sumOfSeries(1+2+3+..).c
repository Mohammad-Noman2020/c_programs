#include <stdio.h>

//1+2+3+....N

int sumSeries(int n);


int main()
{

    int n;
    printf("Enter N : \n");

    scanf("%d",&n);

    int sum=sumSeries(n);
    printf("sum is : %d",sum);


    return 0;
}

int sumSeries(int n )
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+ sumSeries(n-1);

    }

}
a
