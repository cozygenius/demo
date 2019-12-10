
#include <stdio.h>

int main()
{
    
    int x,y;
    
    printf("Hello  this is the simple program of finding greatest between two numbers");
    printf("\nenter two numbers 'x' and 'y' respectively\n");
    scanf("%d  %d",&x,&y);
    
    if(x>y)
    {
        printf("value of x is greater  :- %d",x);
        
    }
    else if(x<y)
    {
        printf("value of y is greater  :- %d",y);
    }
    else if(x==y)
    {
        printf("both are same  :- %d,%d ",x,y);
    }
    else
    {
        printf("enter valid numbers");
    }
     
    
    return 0;
}
