# include <stdio.h>

    int *g ; //for global varible non initianlize pointer points to 0th address of memory
              // Default value of the pointer is NULL

    
int main()

{   

    printf(" g : %d \n",g);   
    // printf("*g : %d \n",*g); this is not showing any value beacuse pointer g pointes 0th address in memory so there is no any value

     /*============ NULL Pointer ============*/

    // NULL Pointer --> Pointer which points to nothing (Talwar myanat thevli)
    // NULl is Predefined macro it defined in stdio.h header file ;  it conatain value 0
    //# define NULL (void *)0

      int *p ;
      printf(" p : %d \n",p);   
      printf("*p (garbage value) : %d \n",*p);

    // in above syntax p is non initialize and it is a local variable it may contain garbage value
    // if we try to acces data from garbage address their might be possibility of generating segmentation Fault
    // to avoid such problem it is good programming practice to INITIALIZE each UNINITIALIZED pointer to  NULL

    int *q =NULL;
    printf(" q : %d \n",q);     // NULL Pointer it points to the 0th address of Ram
   // printf("%d \n",*q);       // no any value


    /*============ Void Pointer ============*/
    
    // void Pointer --> It also kown as GENERIC POINTER 
    // void Pointer it points to anyone (Talwar jyala lavli tyla point karto)

    int iValue =11;
    char cValue ='I';
    float fValue =3.14;
    double dValue = 96.391;

    void *ptr =NULL;   // Initialize pointer ptr with NULL (0)  (Talwar myanat thevli)
                       // ptr is void pointer , so to fetch the data type casting is required (konta type cha data fetch karaychay *) 

    ptr = &iValue;     // now ptr points to iValue  (talwar iValue la lavli)

    printf("\n ptr (address of ivalue): %d \n ",ptr); // address of ivalue
    printf(" data in ivalue --->> *(int *)ptr : %d \n ",*(int *)ptr); // (int *) it is type casting ; b'coze we fetch data of type integer

    printf("Size of void Pointer (*ptr) : %d Byte\n",sizeof(ptr));  //4 byte --> 32 bit   8 byte --> size of every pointer
    printf("size of *(int *)ptr i.e ivalue: %d Byte\n ", sizeof(*(int *)ptr )) ;


   // ptr =NULL;
    ptr =&cValue;   // now ptr points to cValue   (talwar cValue la lavli)
    printf("\n ptr (address of cvalue): %d \n ",ptr); // address of cvalue
    printf(" data in cvalue --->> *(char *)ptr : %c \n ",*(char *)ptr); // (char *) it is type casting ; b'coze we fetch data of type charcter
    printf("size of *(char *)ptr i.e cvalue: %d Byte\n ", sizeof(*(char *)ptr )) ;

   ptr =NULL;
 //  printf("%d \n",ptr); ==> 0
 
     ptr =&dValue;  // now ptr points to dValue   (talwar dValue la lavli)

    printf("\n ptr (address of dvalue): %d \n ",ptr); // address of dvalue  {Nust nv ghetli ki tya box chya aat Jaych}
    printf(" data in dValue --->> *(double *)ptr : %d \n ",*(double *)ptr);

    int no = 5;

    int Arr[] ={99,98,97,95};

   void *j = Arr;
  printf("%d ",*(int *)j);

    return 0;
}