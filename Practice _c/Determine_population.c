#include <stdio.h>

int main() 
{
    int initial_population =100000;
    int years=10;
    double growth_rate=0.10;
    int population=initial_population;

    printf("Year\tPopulation\n");
    for (int year = 1; year <= years; year++) 
	{
        population =population+(population * growth_rate);
        printf("%d\t%d\n",year,population);
    }
    return 0;
}

