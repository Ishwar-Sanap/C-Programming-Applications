# include<stdio.h>

int main()
{                       // defination of array
    int arr[5];        //  non initialized array
                      //  memory get allocated 20 bytes (5*4 =20)



    int i =5;
    int m_arr[i];     // this is valid b'coze we have not initialize any member in array

    m_arr[0]=1;
    m_arr[1]=2;
    m_arr[2]=3;

    printf(" \n m_array : %d  %d  %d  \n \n",m_arr[0],m_arr[1],m_arr[2]);

    // int j=4;                            
    // int n_arr[j] ={ 11,56,87,98};    // this is non valid it give error
    /* 
        b'coze we can't initialize size of array by using other variable value in member initliazation list
    */

    printf("Size of arr : %d byte \n",sizeof(arr));

     printf("Size of arr : %d byte \n",sizeof(arr[0]+arr[1]));
    printf("Address of arr  using &:%d \n",&arr);               // whole array cha address
    printf("Address of arr without using & :%d \n",arr);       // there is no need to use Address of operator (&) to take  address of array

    printf("Address of arr 0 index :%d \n",&arr[0]); 
    printf("Address of arr 1 index :%d \n",&arr[1]);    // it show array stored in memory is in sequential format
    printf("Address of arr 2 index :%d \n",&arr[2]); 
    printf("Address of arr 3 index :%d \n",&arr[3]); 
    printf("Address of arr 4 index :%d \n",&arr[4]); 


    /* arr is one dimensional array which contains 5 elements and each elements is of type integer */

    /* ============= TWO Ways to Initialization of the Array =================*/

    // 1) Member by member Initialization

    arr[0]=11;
    arr[1]=21;
    arr[2]=51;
    arr[3]=101;
   // arr[4]=111;

    // To access the array elaments we can use array index it start from 0;
    // By using loop also acces elements value

    printf("Value of arr at index 0 is : %d \n",arr[0]);
    printf("Value of arr at index 1 is : %d \n",arr[1]);
    printf("Value of arr at index 2 is : %d \n",arr[2]);
    printf("Value of arr at index 3 is : %d \n",arr[3]);
    printf("Value of arr at index 4 is : %d \n",arr[4]);  // it display may  garbage or  0 value because we not initilize value at index 4
/*/ =============================================================================================== /*/

        printf("\n=====================================\n");

    // 2) Member initialization list


    int brr[5]={10,20,50};               // initialized array
                                        // defination of array

    /* brr is one dimensional array which contains 5 elements and each elements is of type integer */
    // When size of array is n and we initialize less than n values then remainig uninitialized value in array set to default value of data type of array  (in memeber initliazation list )


    printf("Value of brr at index 0 : %d \n",brr[0]);
    printf("Value of brr at index 1 : %d \n",brr[1]);
    printf("Value of brr at index 2 : %d \n",brr[2]);
    printf("Value of brr at index 3 : %d \n",brr[3]);     // it show 0 (in memeber initliazation list ) b'coze we not initialize value at index 3   
                                                        
   printf("Value of brr at index 4 : %d \n",brr[4]);    // it show 0 (in memeber initliazation list ) b'coze we not initialize value at index 4  
 /*/ =============================================================================================== /*/

    printf("\n=====================================\n");

    char crr[]={'I','S','H','W','A','R'};      // there is no need to give size( i.e how many number of elements are stored)in array in [] squre bracket

    printf("Size of crr : %d byte \n",sizeof(crr));
    printf("Value of crr at index 4 : %c \n",crr[4]);
    printf("Value of crr at index 4 : %c \n",crr[6]); // it  show default value i.e (\0 ) null character

    /* crr is one dimensional array which contains 6 elements and each elements is of type chracter */

    /*/ =============================================================================================== /*/

    printf("\n=====================================\n");

   //  double drr[];       (Errror)              // it gives error because size is missiing and also  array is not initialize 




   // int drr[2] ={1,2,3,5};  // this is invalid
                            // Number of initializers cannot be more than the  value of size specifier

    return 0;
}