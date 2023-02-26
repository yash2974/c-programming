#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i,key;
    printf("how many values you want to enter\n");
    scanf("%d",&n);
    p=(int*) malloc(n*sizeof(int));
    printf("start entering values\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",p+i);
    }
    printf("what value you want to search\n");
    scanf("%d",&key);
    for (i=0; i<n; i++)
    {
        if (*(p+i)==key)
        {
            printf("%d found at %d\n",key,i+1);
        }
        
        
    }
    
    free(p);
    return(0);
    
}