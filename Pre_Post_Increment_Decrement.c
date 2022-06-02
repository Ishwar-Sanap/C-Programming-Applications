#include <stdio.h>

int main(){                         // Enntry Point Function


     /*  ShortHand  Increment Decrement Operator in C/C++     */

    int p=100;
    int ans=0;
    printf("\n ======= Pre Increment ( ++p ) =========\n ");

    /*******Increment Operator ******/
     
    //  Pre Increment == (ans = ++p ) --> p =p+1
    //**  value get increment first and then Initialized **

    printf("value of p Before Increment : %d\n",p);
    ans=++p;

    /* ans = ++p
        p = p+1   //increment first 
        ans =p    // and then Initialized
     */
    printf("value of p after Increment : %d\n",p);
    printf("value of ans : %d\n",ans);

    p=10;
    ans =0;

    ////////////////////////////////////////////////////////
     printf("\n ========Post Increment ( p++ ) ========= \n ");
    
    // Post Increment == (ans= p++ ) --> p =p+1

    // ** value get Initialize first and then increment
     
    printf("value of p Before Increment : %d\n",p);
    ans =p++;

    /* ans = p++
        ans =p    //  first Initialize
        p = p+1   //and then increment
     */
    printf("value of ans : %d\n",ans);
    printf("value of p after Increment : %d\n",p);



    /*******Decrement Operator ******/

 
    printf("\n ====== Pre Decrement (--p) =========\n ");

     p=20;
     ans=0;
    
    //  Pre Decrement == (ans =  --p ) --> p = p-1
    //**  value get Decrement first and then Initialized **

    printf("value of p Before Decrement : %d\n",p);
    ans = --p;

    /*  ans = --p
        p = p-1   //Decrement first 
        ans =p    // and then Initialized
     */
    printf("value of p after decrement : %d\n",p);
    printf("value of ans : %d\n",ans);



    ////////////////////////////////////////////////////////
     printf("\n ======== Post decrement ( p-- ) ========= \n ");
     p=11;
    ans =0;
    
    // Post Decrement == (ans= p-- ) --> p =p-1

    // ** value get Initialize first and then Decrement
     
    printf("value of p Before Decrement : %d\n",p);
    ans =p++;

    /* ans = p--
        ans =p    //  first Initialize
        p = p+1   //and then Decrement
     */
    printf("value of ans : %d\n",ans);
    printf("value of p after Decrement : %d\n",p);


    // ++p  -->> Increment
    // p++  -->> Increment

    // --a  -->> Decrement
    // a--  -->> Decrement
    
    return 0;                       // successful termination
}