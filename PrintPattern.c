#include<stdio.h>
int main()
    {
        int i,j,n,p,ch;
        printf("1.tangular pattern\n 2.reverse tri pattern\n ");    
        printf("enter your choice."); // 1 for triangular pattern and 2 for reverse triangular
        scanf("%d",&ch);
        printf("enter your pattern no.");
        scanf("%d",&p);
        {
        if (ch==1)
            for(i=0;i<p;i++)
            {
                for (j=0;j<=i;j++)
                {
                    printf(" *");
                }
                    printf("\n");
                    
            }
        else
            if(ch==2)
            for(i=0;i<p;i++)
            {
                for (j=p-1;j>=i;j--)
                {
                    printf(" *");
                }
                printf("\n");
                
             }
           
            
        }
        return 0;
    }