# include <stdio.h>

 //  Address of Operator --> & also called Referance Operator
 // Dereferance operator --> *


int main()
{
    /* ==================================================================*/
     // Integer pointer iptr

    int iValue = 111;
    int *iptr = &iValue;  //( Address of Operator --> & also called Referance Operator) Variable cha Address aanun deto
                        // iptr is pointer of type integer which hold adrress of iValue

    printf("%d \n",iptr); // it display --> base address of iValue

    printf("%d \n",*iptr); // (Dereferance operator --> *) it fetch the data of that variable whose address is stored in pointer
                         // it display --> 111

    printf("Size of pointer iptr :%d Byte \n",sizeof(iptr)); // depends on processor 32 bit --> 4 byte {for 64 bit size of every pointer is 8 Byte}
    printf("This is size of variable whoes data is fetch : %d  Byte \n",sizeof(*iptr));

    /* ==================================================================*/
  // character pointer cptr
    char cValue = 'I';
    char *cptr = &cValue;

    printf("%d \n",cptr); // it display --> base address of cValue

    printf("%c \n",*cptr);  // it display I

    /* ==================================================================*/
  // float pointer fptr
    float fValue = 3.14;
    float *fptr = &fValue;

    printf("%d \n",fptr); // it display --> base address of fValue

    printf("%f \n",*fptr);  // it display 3.14

    /* ==================================================================*/
  // double pointer dptr
    double dValue = 98.3665;
    double *dptr = &dValue;

    printf("%d \n",dptr); // it display --> base address of dValue

    printf("%lf \n",*dptr); // it display 98.3665


    return 0;
}