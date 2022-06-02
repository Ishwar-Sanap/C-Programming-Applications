#include <stdio.h>

// Structure Declaration (No memory gets alloacted)
struct st
{
    int no;
    float f;
    
};

struct Hello
{   
    // Inside the structure we can also create Array
    int Marr[3];
    float Narr[2];
};


int main()
{
    // Object Creatition (memory gets alloacted)
    struct st Arr[3] ;  // Array of structure (structure cha Array) object ch Array Aahe 
                        // 3 box 

    /* Arr is one dimensional Array which contain 3 elements each elements is of type struct st 
         where st is strcture which conatain 2 members 1st is Integer & 2nd is float

    */

   // Initialization of Array Structure
   // Member by Member
   Arr[0].no =11;
   Arr[0].f=10.11;
    
    Arr[1].no =21;
    Arr[1].f =12.3;

    //Arr[2].no =51;
    Arr[2].f =121.3;

    printf("%d \n", Arr[1].no);
    printf("%d \n", Arr[2].no); // it display garbage or 0 value ( it is non initilized) 

    printf("Size of Arr :%d Bytes \n",sizeof(Arr)); // 24 (8(size of strucure)*3 =24)
    printf("Address of Arr[0] : %d \n",Arr);
    printf("Address of Arr[1] : %d \n",&Arr[1]);
    printf("Address of Arr[2] : %d \n",&Arr[2]);


    struct Hello obj;

    // Memeber by member Initialization

    obj.Marr[0] =10;
    obj.Marr[1] =20;
    obj.Marr[2] =30;

    obj.Narr[0]=3.14;
    obj.Narr[1]=9.45;
    return 0;

}