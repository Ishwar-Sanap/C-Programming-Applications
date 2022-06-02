#include <stdio.h>

// Structure Declaration (No memory gets alloacted)
struct Hello
{
    // inside structure we can also create the pointer

    int *p;
    float *f;

   /* void func()   Not allowed
   {        

    } */
};

/*
    NOTE --> Inside Structure we can't create function
    but in oop language inside the class we can defined the function
*/

int main()
{
    // Object Creatition (memory gets alloacted)
    struct Hello obj;

    int no = 111;
    float fv =3.14;

    obj.p =&no;
    obj.f =&fv;

    printf("Value of no :%d \n",(obj.p));
    printf("Value of *p :%d \n",*(obj.p));
    return 0;

}