#include <stdio.h>

int main(){                         // Enntry Point Function

    char num1='A' ;

 //  p is a pointer of type character currently store address of num1 ; and num1 is varibale of type charcter initialize with value A
 
    char *p = &num1;        

    printf("%c \n",num1);           // it show value in num1

    printf("%d \n",&num1);          // it shows address of num1

    printf("%d \n",p);              // it show value in p i.e address of num1 (p is pointer which hold address of num1)

    printf("%d \n",&p);             // it show address of p

    printf("%d \n",sizeof(p));      // it show size of pointer p

    printf("%c \n",*p);             // it show value of num1

    printf("%d \n",sizeof(*p));     // it show size of num1 

     printf("%d \n",&*p);           // it show address of num1

    return 0;                       // successful termination
}