Write a program which computes and prints the sum of the days in all four quarters of the current year. Use variables to store these four values.

If you want, you can use the code from the previous lab, but you will learn more if you write it from scratch.



===============================================

#include <stdio.h>

int main(){
    
    int January = 31;
    int February = 28;
    int March = 31;
    int April = 30;
    int May = 31;
    int June = 30;
    int July = 31;
    int August = 31;
    int September = 30;
    int October = 31;
    int November = 30;
    int December = 31;
    
    printf("Days in Q1 of the current year: %d\n", January + February + March);
    printf("Days in Q2 of the current year: %d\n", April + May + June);
    printf("Days in Q3 of the current year: %d\n", July + August + September);
    printf("Days in Q4 of the current year: %d\n", October + November + December);
    
    return 0;
}
