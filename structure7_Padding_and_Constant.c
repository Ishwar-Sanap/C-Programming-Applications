#include <stdio.h>

# pragma pack(1)

// due to pragma directive the preprocessor will send request to compiler to allocate memory in terms of 1,2,4 byte as per instruction

// # pragma pack(1)  1-1 chys patit memmory milte 
struct Demo
{
   int Data;
    char ch;
    float f;
    int j;
   // double d;
   
};

/* ========= CONSTANT ============ */
struct cons
{

    int i;
    float j;
};

struct con
{

    // we can also make  constant member in structure
     const int i;
     float j;
};
int main()
{
    struct Demo obj ;

    printf("Size of struct Demo :%d \n",sizeof(obj));   // 16 
    printf("Size of struct Demo : %d \n",sizeof(struct Demo)); // 16 

    // Basically size of structuture Demo is 4+1+4+4 = 13 Byte but we get size 16 byte due to concept of Padding
    // Due to padding there is some  Memory westage 
    // Integer --> 4-4 chya patit memoery milte
    // double --> 8-8 chys patit memmory milte 

    // to avoid padding we use concept of pragma pack



    /* ========= CONSTANT ============ */

    // We can create consantant object of a structure

    const struct cons obj2={11,3.14};

    // if we create constant object then we have to use member Initialization list to initialize the members ; 
    // otherwise compiler will generate error 

     //obj2.i =11;  error
     //obj2.j =3.14;  error
     
    // b'coze when we crete object then default value of get initialize to that variable 
    // after creating the constant object then we can't reinitilize that variable so it gaves error for memeber by member Initialization


    // we can also make  constant member in structure

    struct con obj3 ={ 10 , 10.10} ;
    // obj3.i=11;  
    obj3.j = 21.21;

    return 0;
}