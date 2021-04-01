//Program to find euclidean distance.
#include<stdio.h>//pre processor directive to include input output function  
#include<math.h>//pre processor directive to include various mathematical function  
  
int main()  
{  
    float x1, y1, x2, y2, distance;  
  
    printf("Enter point 1 (x1, y1)\n");  
    scanf("%f %f", &x1, &y1);//scanning the numbers  
  
    printf("Enter point 2 (x2, y2)\n");  
    scanf("%f %f", &x2, &y2);  
  
    distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );//formula  
  
    printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n", x1, y1, x2, y2, distance);//result  
  
    return 0;
}