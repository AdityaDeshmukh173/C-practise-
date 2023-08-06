#include  <stdio.h>
int fabo(int);
int main ()
{
    int n;

    printf("Enter the no. for Fabonacci series \n");
    scanf("%d",&n);
    printf("Fabonacci series : 0 1 ");

    fabo(n);
    printf("%d ",fabo(n));
}
int fabo (int x)
{
    int sum;
    
    for (int i = 0; i <=x ; i++)
    {
    if (x==0)
    {
        return 0;
    }
    if (x==1)
    {
        return 1;
    }
    else
    
    return (fabo (x-1)+ fabo(x-2));

    }

}