# include <stdio.h>


// function declaration 
int checkEven_odd(int);

int main()

{   

    int value =21 ;
    int  pish=0 ;

    //pish=checkEven_odd(value); // function call

    int (*fptr)(int); // fptr is a Function Pointer that points to the function which take one  argument of type Integer and return Integer

    printf("Enter the number to check even or odd : ");
    scanf("%d",&value);

    fptr =checkEven_odd;
    pish =fptr(value);   // calling function by pointer 

   

    printf("Address of checkEven_odd() %d \n",fptr);
    printf("Address of checkEven_odd() %d \n",checkEven_odd);  // we also get address of function without using '&' referace operator
     printf("Address of checkEven_odd() %d \n",&checkEven_odd);

    /* We can't gate data of function using *ptr b'coze memory fo all function allocated in text section
        text section contain binary instruction of programme

        when we create normal pointer we can fetch data from specific address ;
        but in function pointer for fetching data we call that specific Function
    */

    if(pish ==1){
        printf("%d is Even Number \n",value);
    }
    else{
         printf("%d is Odd Number \n",value);
    }

    return 0;
}

int checkEven_odd(int no)
{
    int ans =0;

    if(no%2==0){
        ans=1;
    }
    else{
        ans =0;
    }

    return ans;
}
  