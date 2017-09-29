#include <stdio.h>
int menu(int);
double add(double,double);
double subtract(double,double);
double multiply(double,double);
double divide(double,double);

int main(int argc, char const *argv[])
{
double operand1 = 0;
double operand2 = 0;

int choose = 0;
menu(choose);
printf("Geben Sie nun die 1.Operande ein\n");
scanf("%f",&operand1);
printf("Geben Sie nun die 2.Operande ein\n");
scanf("%f",&operand2);
switch (choose)
{
  case /* value */:
}

}

int menu(int choose)
{
  do {
    printf("Choose one of the following operations:\n");
    printf("Add (1)\n");
    printf("Subtract (2)\n");
    printf("Multiply (3)\n");
    printf("Divide (4)\n");
    printf("Stop program (-1)\n");
    printf("Enter your choice:\n");
    scanf("%d", &choose);

  } while(choose >= 5 || choose <= -2);

  return choose;
}
double add(double operand1)
{


}
