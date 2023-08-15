#include<stdio.h>
int main()
{
	float mon, tue, wed, thu, fri, hrs, avg;
	
	printf("Enter Number of Hours for Monday :");
	scanf ("%f",&mon);
	
	printf("Enter Number of Hours for Tuesday :");
	scanf ("%f",&tue);
	
	printf("Enter Number of Hours for Wednesday :");
	scanf ("%f",&wed);
	
	printf("Enter Number of Hours for Thursday :");
	scanf ("%f",&thu);
	
	printf("Enter Number of Hours for Friday :");
	scanf ("%f",&fri);

	hrs = mon+tue+wed+thu+fri;
	avg = hrs/5;
	printf("Average Number of Hours worked = %f",avg);
	
	getch();
	return 0;
}
