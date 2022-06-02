#include <stdio.h>
#include <string.h>

int strlength(char larr[] )
{
    int iCnt = 0;
    int iLen = 0;

    for(iCnt =0; larr[iCnt]!='\0'; iCnt++)
    {   
        iLen ++;
    }
    
    return iLen;

}


int strlength2( char larr2[])
{
    
    int iCnt2 = 0;
    int iLen2 = 0;

    while(larr2[iCnt2]!='\0')
    {
        iLen2++;
        iCnt2++;

    }

    return iLen2;
}

int strlength3( char *larr3)     // larr3 is a pointer of type character which points to arguments that we pass for the function 
{
 
    int iLen3 = 0;

    while(*larr3!= '\0')
    {
        
        iLen3++;
        larr3++;
    }

    return iLen3;
}

int main()
{   
    /* ================== String ======================= */

    // string is considerd as an character array which ends with special symbol \0

    // string is not considerd as an explicitly data type in c/c++



    char arr[] = "Marvellous";    // size of this array is a 11 byte b'coze 1 extra elements gets addeded in the string is '\0'    
    printf("%s ",arr);
  
    char brr[7]={'I','s','h','w','a','r','\0'};

    char *ptr =NULL;
    ptr = brr; 

    printf("\n");

    // Traversing the string

  

    // for(iCnt=0; iCnt<7;iCnt++)
    // {
    //     printf("%c",brr[iCnt]);
    // }

    while(*ptr!='\0')
    {
         printf("%c ",*ptr);

         ptr++;
    }

    printf("size of arr :%d Byte \n",sizeof(arr));
    printf("size of brr :%d Byte \n",sizeof(brr));


    printf("Length of string arr is  : %d \n",strlen(arr));  // strlen is predefined function in string.h header file
    printf("Length of string brr is  : %d \n",strlen(brr));


    // we can also create our own user defined string length function

printf(" \n User defined string length function \n");


  int p =0;

  p = strlength3(arr);
  printf("Length of string  %s is :%d ",arr,p);




    return 0;
}
