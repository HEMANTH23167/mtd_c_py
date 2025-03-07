//program to find the 2nd smallest number :
#include <stdio.h>

int main(){
    int inputNum = 0, remainder, sum;
    puts("Enter a number : ");
    scanf("%d", &inputNum);

    while (inputNum>0)
        for(int i = 0; i < inputNum; i++)
        remainder = inputNum / 10;
        sum += remainder;
 printf("the smallest number is : %d", sum);


    return 0;
}