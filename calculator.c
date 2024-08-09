#include<stdio.h>
int main(){
    int a , b, choice;
    printf("Enter the values of a and b : ");
    scanf("%d %d", &a, &b);
    printf("Choose the option given below for calculation ----\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("%d",a+b);
        break;

    case 2:
        printf("%d",a-b);
        break;
    
    case 3:
        printf("%d", a*b);
        break;
    case 4:
        printf("%d", a/b);
        break;

    
    default:
        break;
    }
}