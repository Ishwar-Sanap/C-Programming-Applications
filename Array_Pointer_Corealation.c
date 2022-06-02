#include <stdio.h>


// ========== Array pointer corealation =========== //

// Array is internally considered as a pointer
// Array chya navatch tyacha address asto (no need & operator)

int main()
{

    int arr[4] ={11,21,51,101};
    // When we Access any element of array we use Array Subscript operator []

    //  Array Subscript operator [] is internally considered as pointer representation 
    // compiler converts subscript operator syntax into its corresponding pointer syntax
    
  
    printf("%d \n",arr);     // Base address of arr
    printf("%d \n",&arr[0]);     //  address of arr at 0th index
    printf("%d \n",&arr);     // address of  whole arr 

    printf("%d \n",arr+1);   // Pointer arithmetic   arry pointer incremented by ==> [ Address of Arr + 1* 4(size of arry data type ) ] 
    printf("%d \n",&(arr)+1);   // Pointer arithmetic a  arry pointer incremented by ==> [ Address of Arr + 1* 16(size of arr) ] 
     printf("%d \n",&arr+1); 

    printf(" arr[3]   : %d \n",arr[3]);     //101
    printf(" *(arr+3) : %d \n",*(arr+3));   //101
    printf(" *(3+arr) : %d \n",*(3+arr));   //101
    printf(" 3[arr]   : %d  \n",3[arr]);    //101   
    printf(" arr[4-1] : %d \n",arr[4-1]);   //101

    // Technically meaning of all above Syntax is exactly same

    printf(" arr[3-1] : %d \n",arr[3-1]);   //51
     printf(" &(arr[3]): %d \n",&(arr[3]));    
    printf(" arr+3 : %d \n",arr+3); 

    /*  WHY ARRY INDEX START FROM 0 ???

     ANS --> IF Array index start from 1 then our first element of array should be arr[1]
            due to arr[1] we acan accessing data from the address ( arrr +1) 
            at *(arr +1) we get data 21 which is 2nd element of array
            due to this approach we can't acces first element of array ie is 11
            to avoid above problem array index should be start from indext 0
    */


    return 0;
}