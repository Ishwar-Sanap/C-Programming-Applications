# include <stdio.h>  // for printf Scanf
# include <stdlib.h>  // for malloc , calloc ,realloc,free
 
int main()
{  
     
     int no = 0;
    printf("Enter the size of array : ");
    scanf("%d",&no);

    int arr[no];

    int *ptr =NULL;


    // Memory Allocation

    ptr = (int*)malloc(no*sizeof(int));

    // Return value of a malloc function is void* since we can use that function for any type of Memory allocation
    // due to void* we have to do typecasting explicitly to access and store data properly (in*)

    //ptr is pointer which holds address of return vakue of malloc 


    if(ptr == NULL )
    {
        printf("Memory is not allocated \n");
    }

    else{
         printf("Memory is  allocated Succesfully !! \n ");
    }


    

    //free(ptr);   // Memory Deallocation 
    
    // it is good programming practice to dealloacte the memmory explicity after use of memory comppleted

    // fre function it return void ie nonthing


    /* ================  Calloc  ================*/

    // Calculated allocation
    // malloc and calloc internal working is exctly same
    // for calloc we haave to provide 2 parameters i) no of element thay you want to allocate
                                                // ii) size of each element 


    // int no1 = 0;
    // printf("Enter the size of array : ");
    // scanf("%d",&no1);

    // int arr1[no1];

    // int *p =NULL;


    // // Calculated Allocation

    // p = (int*)calloc(no,sizeof(int));

    // free(p);






    /* ================  realloc  ================*/

    /*
        realloc is used to reallocte the previously allocated memory
        it used to incresing or decreasing size of Memory

    */

    int n = 0;
    printf("Enter the no. of element for reallocate memory  : ");
    scanf("%d",&n);

    ptr=(int*)realloc(ptr ,n*sizeof(int));
    printf("Previous Allocated memory Address : %d \n",ptr);

    // 1st parameter is address of memory return by malloc
    // 2nd parameter is new size you want to allocate ; it can be incresed or Decresed



        // realloc is also used to allocate fresh memory
        // if 1st parameter is NULL then it works as malloc

        ptr=(int*)realloc(NULL ,n*sizeof(int)); // Behaves like malloc

         printf("New Allocated fresh memory Address : %d\n ",ptr);


        // realloc is also used to deallocate the memory
        // if 2nd parameter is 0

        realloc(ptr,0);

        printf("%d",ptr);
        
         return 0 ;
}