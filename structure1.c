#include <stdio.h>

// Structure is a user Defined DATA TYPE 
// Structure Declaration --> No Memeory get alloacted  hence no storage class for structure Declaration

// struct is keyword 
// Demo is structure name / identifier
struct Demo     
{

    int iValue ;    // we can't Initialize the value of any variable of structure here b'coze No Memory allocate here
    //float fVaue=3.14 ; give Error 
    float fValue;
    int iNO;

} My_obj3; 
// semicoulman is must here at the end of structure declaration

/*
 We can aslo create the object (My_obj3) at the end of structure Declaration (Before Semicolumn)
 ==================================================================
    Memory for the My_obj3 gets alloacted in the Data section
    b'coze it is Global (declare outside function) 
    hence it has storage class extern
==================================================================
*/
int main()
{
    // object creation of struct Demo

    struct Demo My_obj;   // Here memory gets allocated to structure ; when we create the object 
                         // Memory gets alloacted in such order that they variable gets declare in structure
                         //(jas Declare kelay tashich oreder madhe memory milte)

    // My_obj is a object 

    printf("\nSize of Struct Demo (My_obj): %d Bytes \n",sizeof(My_obj));
    printf("Address of My_obj : %d \n",&(My_obj));
    printf("Address of My_obj.iValue : %d \n",&(My_obj.iValue));
    printf("Address of My_obj.fValue : %d \n",&(My_obj.fValue));
    printf("Address of My_obj.iNO : %d \n",&(My_obj.iNO));

    /* when we create the Object of a structure we can access the members of structure in 2 ways ...

        1) Direct Accessing Operator ( . )
        2) Indirect Accessing Operator ( -> ) // When we Have pointer of a structure
        
        ==================================================================
        Memory for the My_obj gets alloacted in the Stack section
        b'coze it is local (declare inside the function) 
        hence it has storage class auto

        Every Local variable has default storage class is auto
        ==================================================================


        */


    // Initialization of Members by using Member by Member Initializatation
    // by any sequence we can initialiation the value   (sice,aapn nav gheun Initialize kartoy tyamule sequence does't matter)

    My_obj.fValue=3.14;
    My_obj.iNO =101;
    My_obj.iValue=111;

    printf("iValue  : %d \n",My_obj.iValue);
    printf("fValue  : %f \n",My_obj.fValue);
    printf("iNo     : %d \n",My_obj.iNO);

    
    // Initialization of Members by using Member Initializatation List
    // We have to Initilize the variable [ In Curley Braces{ } seprated by , ] in oreder that they are declare in our structure(Sequence Matter)
    struct Demo My_obj2 ={ 11, 51.2 ,21};

    printf("iValue  : %d \n",My_obj2.iValue);
    printf("fValue  : %f \n",My_obj2.fValue);
    printf("iNo     : %d \n",My_obj2.iNO);

   printf(" My_obj3.iNO :%d \n",My_obj3.iNO);  // default value Integer get display  0

   

    return 0;
}