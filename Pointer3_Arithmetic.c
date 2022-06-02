# include <stdio.h>

int main()
{

    int iArr[] ={10,11,12,18};

    int *iPtr = iArr;  //int *iPtr = &(iArr[0]);
    // iPtr is Integer Pointer currently Points to iArr {i.e iArr[0]}
    
    int *jPtr =&(iArr[3]);
    // jPtr is Integer Pointer currently Points to  iArr[3]

    printf("\n \tAddress of iArr[] : %d \n",iArr);
     
    printf("\n======= Addition =========== \n");
    printf(" iPtr : %d \n",iPtr);
    printf("Value of *iptr : %d \n",*iPtr);


    /* ======= Addition ===========*/

    iPtr+3; // Value of iPtr is not change
            // since, to change value we have to use Assignment operator(=)

    iPtr = iPtr+3; // Pointer value Increment by 12
    
    /*
    pointer + number 
    pointer + 3
    pointer + 3*(Sizeof(pointer_type))
    pointer + 3*(Sizeof(int))
    pointer + 3*4
    pointer + 12

    ////////////////////////////////////
    // Pointer + Pointer --> Not allowed
    // iPtr + jPtr   --> Not allowed 
    //                
    ///////////////////////////////////
    */

    printf(" iPtr+3 : %d \n",iPtr);
    printf("Value of *iptr+3 : %d \n",*iPtr);


  /* ======= Substraction ===========*/

  printf("\n======= Substraction =========== \n");

    printf(" jPtr : %d \n",jPtr);
    printf("Value of *jptr : %d \n",*jPtr);

    jPtr =jPtr-2;   // Pointer value decrement by 8

 /*
    pointer - number 
    pointer - 2
    pointer - 2*(Sizeof(pointer_type))
    pointer - 2*(Sizeof(int))
    pointer - 2*4
    pointer - 8

    ////////////////////////////////////
    // Pointer - Pointer -->  allowed
    //  jPtr -iPtr   -->  allowed 
    // iPtr - jPtr    -->  allowed 
    //                
    ///////////////////////////////////

    */

    printf(" jptr-2 : %d \n",jPtr);
   // printf(" jptr-2 : %d \n",jPtr-2);  also valid

    printf("Value of *jptr-2 : %d \n",*jPtr);
   // printf("Value of *jptr-2 : %d \n",*jPtr-1); also valid

    /*
     Pointer - Pointer 
    (jPtr -iPtr)/(Sizeof(pointer_type))
    (jPtr -iPtr)/(Sizeof(integer))
    (jPtr -iPtr)/4

    */
    printf(" iPtr - jPtr : %d \n ", iPtr - jPtr);




    int Arr[] ={10,11,12,18,21};

    void *ptr = NULL;
     ptr = &Arr[0];

      printf("\n Value of Arr at index Arr[0] : %d \n",*(int *)ptr);

      //ptr++;
      (int *)ptr++;

      printf(" Value of Arr at index Arr[1] : %d \n",*(int *)ptr);


      int i =21;
     void *pt = &i;
   

   printf(" Value of i : %d \n",*(int *)pt);
   (int *)pt++;
   printf(" Value of i : %d \n",*(int *)pt);
   
    /* <<<<<<<< Multiplication & Division  >>>>>>> NOT ALLOWED 

    printf("%d ", jPtr *iPtr);  NOT ALLOWED   (Gives error)
    printf("%d ", jPtr /iPtr);   NOT ALLOWED  (Gives error)

    */

   /* ============== Increment Operartor ==============*/

printf("\n===== Increment Operartor ======\n");

   int *p =iArr;

   printf("p : %d \n",p);

   p++; //--> p = p+1   Increment pointer p by 1 (Value get change by 4)
        // p++ / ++p --> p = p+1 

   printf("p++ : %d \n ",p);

 /* ============== Decrement Operartor ==============*/

printf("\n===== Decrement Operartor ======\n");

   int *q =&(iArr[1]);

   printf("q : %d \n",p);

   q--; //--> q = q-1   Decrement pointer q by 1 (Value get change by 4)
       // q-- / --q ==> q = q-1 

   printf("q-- : %d \n ",q);

    return 0;
}