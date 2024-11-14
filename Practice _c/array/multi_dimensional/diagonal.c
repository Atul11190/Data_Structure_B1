#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;

    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        printf("enter input\n");
    scanf("%d",&a[i][j]);
    }
        
    }
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {if(i==j)
    {
        printf("%d",a[i][j]);
    }
    }
        
    }
    for(int i=0;i<4;i++){
    	a[i][i]=0;
    	a[i][3-i]=0;
	}
	printf("\nArray with Both Diagonal Elements =0:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

   
return 0;
}