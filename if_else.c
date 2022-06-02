# include <stdio.h>

int main()
{

    auto int imarks =0;

    printf("Enter your marks : \n");
    scanf("%d",&imarks);

    if((imarks>=40) && (imarks<=60))
    {
        printf("you are pass with grade C \n");
    }

    else if((imarks>60) && (imarks<=80))
    {
        printf("you are pass with grade B \n");
    }

    else if((imarks>80) && (imarks<=100))
    {
        printf("you are pass with grade A with Distingastion \n");
    }

    else                              ///
    {
        printf("You are fail !!! \n");
    }

    /* 
        if else if ladder ==>

        1) it will check every matching  condition if found then control will enter into that block
        2) if not any matching condition found then control comes in else part and it execute
        3) writing else block is not complusory 
        



    */
    return 0; 
}