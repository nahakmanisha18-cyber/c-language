#include <stdio.h>

int main() {
    // 1. problem
           
    float c,f; 
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
   f = (9 * c) / 5 + 32;
    
    printf("Temperature in Fahrenheit = %.1f\n", f);
    
   //   2. problem 
    
    int salary, HRA, DA, TA, total;

    printf("Enter your basic salary: ");
    scanf("%d", &salary);  
    HRA = (10.0/100) * salary;
    DA  = (8.0/100) * salary;
    TA  = (5.0/100) * salary;
    total = salary + HRA + DA + TA;
    
    printf("HRA = %d\n", HRA);
    printf("DA  = %d\n", DA);
    printf("TA  = %d\n", TA);
    printf("Gross Salary = %d\n", total);
    
    //  3. problem
    
    int angle1, angle2, angle3;
    printf("Enter first angle (in degrees): ");
    scanf("%d", &angle1);
    printf("Enter second angle (in degrees): ");
    scanf("%d", &angle2);
    angle3 = 180-(angle1 + angle2);
    printf("Third angle = %d degrees\n", angle3);
}
//  output

// 1. problem
//Enter temperature in Celsius: 50
//Temperature in Fahrenheit = 122.0

 //  2. problem 
//Enter your basic salary: 50000
//HRA = 5000
//DA  = 4000
//TA  = 2500
//Gross Salary = 61500

 //  3. problem
//Enter first angle (in degrees): 60
//Enter second angle (in degrees): 80
//Third angle = 40 degrees
 
 
 
 






















