#include<stdio.h>

int main(){
    int inutNum = 0;
    puts("Enter a number to check if it is even");
    scanf("%d",&inutNum);
    if(inutNum % 2 == 0)
        printf("%d is Even",inutnum);
    else
        printf("%d is odd",inutnum);
    return 0;
    
}