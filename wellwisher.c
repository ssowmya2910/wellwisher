#include<stdio.h>
#include<stdlib.h>
int main()
{
    int val;
    printf("Hi! What can I do for you?\n");
    printf("1.Tell me a joke\n");
    printf("2.Tell me a motivational quote\n");
    printf("3.Make me happy\n");


    scanf("%d",&val);

    switch(val){
        case 1:
           printf("Why couldn't the sunflower ride its bike?\nIt lost its petals..");
           break;
        case 2:
           printf("All our dreams can come true,if we have the courage to pursue them!");
           break;
        case 3:
           printf("May your troubles be less and your blessings be more..");
           break;
        default:
           printf("Please enter a valid number:)");
    }
    return 0;

}