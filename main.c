/*
QUADRATIC
Created by SUSAN WAMBUI MUCHUNU
July 2021
MIT Lincens
C89 Complier

*/



#include <stdio.h>
#include <stdlib.h>

int main()
{ float a,b,c;
float root1,root2;
float root_part,demon;
printf("Enter values of a,b and c!\n");
scanf("%d%d%d",&a,&b,&c);

root_part=sqrt(b*b-4*a*c);
d=(b*b)-(4*a*c);

root1=(-b+root_part)/denom;
root2=(-b-rooot_part)/denom;

printf("Root1= %d\nRoot2=%d",root1,root2);

    return 0;
}
