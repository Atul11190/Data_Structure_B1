#include<stdio.h>
int main()
{
    struct book 
    {
        char name;
        int price;
        int pages;
    };
    struct book b1,b2,b3;
    printf("enter the name,price and no of pages of book:\n");
    scanf("%c%d%d",&b1.name,&b1.price,&b1.pages);
    scanf("%c%d%d",&b2.name,&b2.price,&b2.pages);
    scanf("%c%d%d",&b3.name,&b3.price,&b3.pages);
    printf("entered information in:\n");
    printf("%c%d%d",b1.name,b1.price,b1.pages);
    printf("%c%d%d",b2.name,b2.price,b2.pages);
    printf("%c%d%d",b3.name,b3.price,b3.pages);
    return 0;
    }

