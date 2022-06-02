# include <stdio.h>
 // The concept of Structure and union is exactly same except memmory allocation strategy

 // In Case of Union  memory allocated for Largest Data type 
 // due to which we can Initilize only one element at a time

union Demo
{
    int i;
    int j;

};

 // In case of structure memory gets allocated for every member seprately

struct Hello
{
    int i;
    int j;
    float f;
};

 int main()
 {  
     struct Hello obj ;
     printf("size of Struct %d \n",sizeof(struct Hello)); // 12

     obj.i= 11;
     obj.j = 21;

     printf("%d , %d \n",obj.i , obj.j); // 11 ,21
     
    union Demo obj2;
     printf("size of union %d \n",sizeof(union Demo)); // 4

     obj2.i=11;
     obj2.j =21;
 

      printf("%d , %d \n",obj2.i , obj2.j); // 21 ,21

      // b'coze In case of Union Union only  one Value get Initilized
      // if we try to initialize  multiple value then last initilized value considerd as final value

    return 0 ;
}