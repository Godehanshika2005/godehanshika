#include<stdio.h>
int main()  
{  
int English, Maths, Science, Psychology, History,total;  
float average;  
printf("Enter the marks of English, Maths, Science,psychology and history:\n"); 
scanf("%d %d %d %d %d", &English, &Maths, &Science, 
&Psychology, &History);  
total = English + Maths + Science + Psychology + History;  
average = total / 5.0;  
printf("Total Marks of the Student: %d\n", total);  
printf("Average Marks of the Student: %.2f\n", average);  
return 0;  
} 

