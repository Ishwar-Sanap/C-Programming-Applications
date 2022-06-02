# include <stdio.h>

// Global variable 
// It can be Access from Anywhere or From any function (Bhintivarche Ghadal )

int g =10;
float x;    // Value of Non Initailiized GLOBAL Variable --> 0.0(Float)
char b='A';

void myfunction(){

    // Local Variables 
    // It Can Access from only that Scope of that the Varible  (Hathch Ghadal)

    int i=11;
    int j;      // Value of Non Initailiized local Variable --> GARBAGE VALUE
   

    printf("%d",i);
    printf("\n");
    printf("%d \n",j);
}

int main()
{   
   //  printf("%d",c); 
    printf("%d" ,g);
    printf("\n");
    printf("Hello ! I am Float . My Value is %f " ,x);
    printf("\n");

    myfunction();   // Function Call
 printf("Hello! I am a character. My value is %c and " "my size is %lu byte.\n", b, sizeof(b));
    return 0;      // Operating system la Sangtoy Succesfullly Termination
}


// int c=10;       