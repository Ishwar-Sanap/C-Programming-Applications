# include<stdio.h>

int main()
{                   
    printf("\t Multidimensional Array .. is Arrray of Array \n") ; // Number of pair of square bracket is equal to no of Dimensional array

    int Arr2D[3][4];        // Array Defination
                            // non Initialized array
/*  3--> Rows
    4--> Column */

    // Arr2D is two dimensional array [][]
    //  which contains 3 one dimnesional array
    // each one dimensional array conation 4 elements
    // every elements is of type integer

    printf("Size of Arr2D : %d  byte\n",sizeof(Arr2D));

    // Member by member Initilization

    Arr2D[0][0] =50;
    Arr2D[0][1]=51;
    Arr2D[0][2]=52;
    Arr2D[0][3]=53;
    Arr2D[1][1]=60;
    Arr2D[2][3]=80;

    printf("Address of Arr2D using (&) :%d  \n",&Arr2D);
    printf("Address of Arr2D  without using (&) :%d  \n",Arr2D);

    printf("Value of Arr2D at index [2][3] is : %d \n",Arr2D[2][3]);
    printf("Value of Arr2D at index [3][3] is : %d \n",Arr2D[3][3]);  // it show  Garbage or 0 b'coz non initialized index value in  Member by member Initilization

    return 0;
}