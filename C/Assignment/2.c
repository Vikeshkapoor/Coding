#include<stdio.h>
int main()
{
    float weight,height,nweight,nheight;
    printf("\t\t\t\t\tBMI Calculator\n");
    printf("Enter your weight (in pounds) : ");
    scanf("%f",&weight);
    printf("Enter your height (in inches) : ");
    scanf("%f",&height);
    printf("\n\nYour details are listed below - \n");
    printf("Weight in pounds = %f \nWeight in kgs = %f\n",weight,nweight=weight*0.4536);
    printf("Height in inches = %f \nHeight in meters = %f\n",height,nheight=height*0.0254);
    printf("BMI = %f",(nweight)/(nheight*nheight));

    return 0;
}