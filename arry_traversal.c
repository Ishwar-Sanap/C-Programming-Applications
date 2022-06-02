#include <stdio.h>

int main()
{

    int Myarray[6] ={ 11,21,31,41,51,101};

    int *pointer = NULL;

    pointer = Myarray;

    int icount =0; 

    printf(" \n Elements in the array :");
    while(icount<6)
    {
      printf(" %d ",*(pointer+icount));

      icount++;

    }

    printf("\n");

     printf(" \n Elements in the array :");
    int icnt =0; 
      while(icnt<6)
    {
      printf(" %d ",Myarray[icnt]);

        icnt++;


    }
    printf("\n");
    printf(" \n Elements in the array :");
    for(int i =0; i<6; i++)
    {
        printf(" %d ",*(pointer+i));
    }
  

    
    char arary1 [] ="ISHWAR";
    char arary2 [7] ={'I','S','H','W','A','R'};

        char *p =arary1;

    printf(" \n Elements in the array1 :");

    while(*p!='\0')
    {
        printf(" %c ", *p);

        p++;
    }

    printf(" \n Elements in the array2 :");
     p = arary2;
    while(*p!='\0')
    {
        printf(" %c ", *p);

        p++;
    }

    printf("\n\nName of the current file "__FILE__);
    return 0;
}