#include <stdio.h>

int main() 
{
    float weight, height, bmi;

    // Input weight in kilograms
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    // Input height in meters
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Print the BMI value
    printf("Your BMI is: %.1f\n", bmi);

    // Determine the BMI category and print it
    if (bmi < 15.0) 
	{
        printf("BMI Category: Starvation\n");
    	} 
	else if (bmi >= 15.1 || bmi <= 17.5) 
	{
        printf("BMI Category: Anorexic\n");
   	} 
	else if (bmi >= 17.6 || bmi <= 18.5) 
	{
        printf("BMI Category: Underweight\n");
   	}
 	else if (bmi >= 18.6 || bmi <= 24.9) 
	{
        printf("BMI Category: Ideal\n");
    	} 	
	else if (bmi >= 25.0 || bmi <= 25.9) 
	{
        printf("BMI Category: Overweight\n");
   	} 
	else if (bmi >= 30.0 || bmi <= 39.9) 	
	{
        printf("BMI Category: Obese\n");
	} 	
	else 
	{
        printf("BMI Category: Morbidity Obese\n");
    	}

    return 0;
}
