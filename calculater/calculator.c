//Q.1 Calculator
//Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
//using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
//is pressed.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,Result,ch;
    char ans;

    do
    {
        printf("\n*Welcome to Calculator");
        printf("\n Enter the First Number : ");
        scanf("%d",&num1);
        printf("\n Enter the Second Number : ");
        scanf("%d",&num2);
        printf("\n Select any Option \n 1) + \n 2) - \n 3) * \n 4) / \n ");
        printf("\n Enter Choice : ");
        scanf("%d",&ch);


        switch (ch)
        {
        case 1 :
            Result = num1 + num2;
            printf("\n Addition is :%d" ,Result);
            break;
        case 2 :
            Result = num1 - num2;
            printf("\n Substraction is :%d" ,Result);
            break;
        case 3 :
            Result = num1 * num2;
            printf("\n Multiplication is :%d" ,Result);
            break;
        case 4 :
            Result = num1 / num2;
            printf("\n Division is :%d" ,Result);
            break;
        default:
            printf("Wrong Choice");
        }
        printf("\n Do You Want To Continue YES/NO ? \n");
        ans = getch();
    } 
    while(ans=='YES');
}
