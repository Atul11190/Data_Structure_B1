#include<stdio.h>
int main()
{
    int arr[4][5];
    int i,j;
    printf("enter matrix elements\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int swap[4][5];
    for (i = 0; i <4 ;i++)
    {
        for(j=0;j<5;j++)
        {
        swap[i][j]= arr[i+1%4][j];
        }
    }
    printf("swapping matrix\n");
    for(i=0;i<4;++i)
	{
		for(j=0;j<5;++j)
		{
			printf("%d",swap[i][j]);
		}
		printf("\t");
	}
	return 0;
}
