#include <stdio.h>

int main()
{
//Declare Chain de character
char name[20];

//give instruction
printf("between us. tell me your name : \n");
//take an input and assigne it to name variable
scanf("%s",&name);
//clear the console
system("clear");
//print the name value to the console
printf(" hey! i know you! your name is %s",name);
return 0;
}