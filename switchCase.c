# include <stdio.h>

int main()
{

    auto int iStd =0;

    printf("Enter standerd : \n");
    scanf("%d",&iStd);

    switch(iStd)
    {   
        
        default:
            printf("Invalid standard \n"); 
            break;       // here writting break is compulsory nahitr programme ghsrto 

        case 1:
            printf ("Your exam is at 8 \n");
            break;

        case 2:
            printf("Your exam is at 9 \n");
            break;
                                                            // cases should be in interger only 
                                                            // sequence is not matter in cases 4,5,1,3
                                                            // but case should not be repeted
        case 3:
            printf("Your exam is at 10 \n");
            break;

        case 4:
            printf("Your exam is at 11 \n");
            break;

        case 5:
            printf("Your exam is at 12 \n");

        // default:
        //     printf("Invalid standard \n");
        //     break;                                      // Writing break after default case is optional beacuse it is end of our case no any case below it
                                                        // if it is there then we have to use break keyword 

    }



    /*
        in switch case code ghsrto mhanun we have to use break after each case

        it execuate fast than if else if ladder b'coze it directly jump to your entrerd case 
        not check all the conditions due to { jump table }
    */
    return 0; 
}