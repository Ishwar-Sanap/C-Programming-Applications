#include <stdio.h>

// Structure Declaration (No memory gets alloacted)

// Nested structure --> structure inside structure

// WAY --> 1
// Declaring Inner structure Sepretely and creating object of that structure inside the outer structure

struct Demo  //Inner structure
{
    int no;
    float fv;
};

struct Hello  // Outer structure
{
    int iValue;
    float fValue;
    struct Demo dobj;  // Inner structure cha object
};

 /* we can't write inner structure after declaration of the outer structure
  b'coze we alredy creted object of Inner structure before declaration
  so compiler will give the error

 struct Demo  
{
    int no;
    float fv;
};
*/
int main()
{
    // Object Creatition (memory gets alloacted)

    struct  Hello hobj;  // outer structure cha object

    struct Demo dobj2;  // we can alos create independant object of inner struture in this 1 way

    hobj.iValue =11;
    hobj.fValue =11.11;
    hobj.dobj.no = 21;
    hobj.dobj.fv = 21.21;

    printf(" Address of ivalue : %d  \n",&hobj.iValue);  // memory gets allocated as per order of declarartionn of members
    printf(" Address of fvalue : %d  \n",&hobj.fValue); 
    printf(" Address of no : %d  \n",&hobj.dobj.no); 
    printf(" Address of fv : %d  \n",&hobj.dobj.fv);

    printf("%d  \n",hobj.iValue); //11
    printf("%f  \n",hobj.fValue); //11.11
    printf("%d  \n",hobj.dobj.no); //21
    printf("%f  \n",hobj.dobj.fv); //21.21



    // WAY--> 2
    //Declare and create object of Inner structure inside the outer structure

    struct first
    {
        int num ;
        float x;

        struct second
        {
            int i;
            int j;
        }obj1;
    };


    struct first fobj;
    struct second sobj;
    sobj.i=51;
    fobj.obj1.i =55;

    printf("%d \n",sobj.i);
    printf("%d \n", fobj.obj1.i );
    return 0;



}