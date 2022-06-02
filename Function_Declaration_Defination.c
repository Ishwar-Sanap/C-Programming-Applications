# include <stdio.h>  // Preprocessor directive sentence
                    // inclusion header file

 int data =10;  // Global Variable it can be access from any function

/* Function Defination */
void fun1()
{
    
    printf("This is the function 1 \n");
}   

/* Function Declaration*/   // no memory get allocated

// Jar function defination function call nanatar asel tr  Function Declaration is MUST...Before function call

int mult(int,int);      // ase function pudh yeil as sangtoy 
                       

int main()      // Entry point function
{   
    // Local Variable it access in only scope of that function

    int valule1 =11;
    int valule2 =21;
    auto int p=0;   // auto storage class is only applicable for LOCAL VARIALES

    fun1();  // function call
            // When we call the  function then only memory get allocated 
            // when we return from function then memory gets deallocated
    
    p=mult(valule1,valule2);  // function call
                            // value1 & value2 are function paramreters

    printf("Multiplication of 11 * 21 = %d \n",p);

    return 0;
}



/* Function Defination */

int mult(int num1,int num2)          // num1 & num2 are function arguments
{
    int ans =0;     // Local Variable it access in only scope of that function

    ans = num1 * num2;

    return ans;
}