# include <stdio.h>

 //( Address of Operator --> & also called Referance Operator) Variable cha Address aanun deto

 // (Dereferance operator --> *) it fetch the data of that variable whose address is stored in pointer

// Jevdhe * mhanje tevdhe ghar vr ja tya variable madhla data milel

int main()
{
    int iValue =111;

    int *p = &iValue;       // p is pointer of type integer currently store address of iValue 
                            // p points to--> &iValue
    printf("Address of Pointer p :%d  \n", p);   // it display value in p i.e Address of  iVlue
    printf("%d  \n", *p);   // it display  111

    int **q =&p;
    printf("%d  \n", **q);
    printf(" Address of Pointer q :%d  \n", &(**q));

    int ***r =&q;
    printf("%d  \n", ***r);

    int ****s =&r;
    printf("%d \n",****s);

    int *****t =&s;
    printf("%d \n",*****t);



    char no ='I';

    char *a =&no;

    char **b =&a;

    char ***c =&b;

    printf("Size of **c : %c \n",sizeof(**c));  // display pointer size
    return 0;
}