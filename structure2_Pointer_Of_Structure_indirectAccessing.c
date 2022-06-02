#include <stdio.h>

// Structure Declaration (No memory gets alloacted)
struct Hello
{
    int no;
    float f;
};

int main()
{
    // Object Creatition (memory gets alloacted)
    struct Hello obj;

    struct Hello *ptr = &obj;

    /* ptr is a pointer which points to struct Hello Currently holds Address of object  obj 

        If we have a pointer structure then we can use indirect Accessing operator( -> )
         to access the members of structure


    */

   ptr->no =11;
   ptr->f = 3.14;

   printf("%d \n",ptr->no);  // to fetch data no ned to use * b'coze pointer is pointing to userdefined data type not single data type
   printf("%f \n",ptr->f);
    return 0;

}