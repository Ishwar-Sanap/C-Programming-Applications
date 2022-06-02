# include <stdio.h>            // predefined header file  
# include "stdio.h"            // predefined header file can be inluded using double " " quotes

/* first preprocessor find that " " header file in same directory of our .c file 
    if that file is not found then preprocesor find that file in compiler specified (gcc) path of our computer 

      \\\\\\\  predefined header file inlude using < > angular bracket   \\\\\\\\\\\\\
*/

#include "MarvellousHeader.h"     // User defined header file 
                            // it included by using the " " double quotes if that file is in same directory of our .c file  
 
 //#include <Marvellous.h>     // User defined header file  we can't include using < > angular bracket
                            // if that file is in same directory of our .c file

int main()
{
    printf("Inside main \n");

    struct Demo obj;

    obj.no = 11;
    obj.fValue = 3.14;
    obj.ch ='I';

    printf(" no = %d \n",obj.no);
    printf("Size of structure Demo : %d Bytes \n",sizeof(obj));

    printf("Macro ie MAX = %d \n",MAX);     // This MAX is replace by the value that defined in MACRO


    int *p = NULL ;     // .c file

   // int *p = (void *)0 ; //.i file


    fun(); // Calling function fun


    return 0;
}

void fun()
{
    printf ("Inside the demo function \n");


}

/*
    What is the Preprocessor ??

    Preprocessor is the 2nd component of the toolchain that convert our (.c) file into  Exapanded intemediate code i.e (.i ) file 
    the statement start from # symbol is considered as preprocessor statement 
    # is called as preprocessor directive symbol 

    Tasks of the preprocessor -->
        1) Inclusion of the header file 
        2) Macro Expantation 
        3) Removal of the Comment from our programme   (check .i file for practical demostration)
        4) Removal of extra white spaces from our Programme 
*/


/*
There are two tpes of macro :

 1) Predefined macro 
       
    NULL is considered as predefined macro which internally represented as 

    # define NULL (void *)0

    this macro is already defined in almost every predefined header files

    int *p = NULL ;  .c file

    int *p = (void *)0  .i file


 2) Userdefined macro

  # define MAX 100 

    MAX is name of the macro 
    100 is replacement text of that macro
    
*/