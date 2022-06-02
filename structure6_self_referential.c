#include <stdio.h>

// Structure Declaration (No memory gets alloacted)
struct Demo
{
    int Data;
   

    // struct Demo obj; 

   /*
   we can't create object of same structure inside that structure
     b'coze compiler is unable to predict size of structure before declaration get completed
    */

   struct Demo *ptr;
   // we can create pointer of same structure inside that structure
   // structure conatin pointer of same type called SELF REFERENTIAL STRUCTURE
};

int main()
{
    // Object Creatition (memory gets alloacted)
    struct Demo dobj1,dobj2,dobj3;

   struct Demo  *p =&dobj1; //head

    dobj1.Data =11;
    dobj1.ptr = &dobj2;

     dobj2.Data =21;
    dobj2.ptr = &dobj3;

     dobj3.Data =51;
    dobj3.ptr = NULL;

    printf("%d \n",dobj1.ptr->ptr->Data); //51
    printf("%d ",dobj3.ptr); // 0th address
    return 0;

}