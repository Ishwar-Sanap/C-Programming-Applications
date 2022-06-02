#include<stdio.h>

// auto storage class

void myFunction()
{
 	auto float num =3.14;		// memory gets allocated in stack Frame	
								// By Default Local Variables are auto storage class
								// auto is default storage class so write keyword 'auto is Optional
								// when we call the function memmory gets alloacted to variable
	num++;						// Increment by 1
	
	printf("%f \n",num);
	
								
}								// when we return from the function memmory gets dealloacted 


// register storage class
void fun()
{
	
	register char ch ='I';		// memory allocation in direct cpu register
								// Cpu register  is a REQUEST 	; they are limited so if they are available then it provide else, default storage class i.e  auto storage is provided
								// we can't fetch the address of variable of  register storage class
								// generally applicable for integer and chracter
	printf("%c \n",ch);			

	register float f = 3.14;   // if for float and double register storage is not applicabe then deafult auto storage class is give but no error will be generate
	printf("%f \n",f);
}


// Static storage class
void hello()
{
	// Local Static 
		static int no =18;		  // Memory gets allocated in the static segment (Data Section)
								// due to Loocal static value get Preserved of that integer for further instruction acrros the function call
								// Scope --> Block or Function Scope
								// Lifetime --> Through out the programme
								// Linkage --> No Linkage

	no++;
	printf("%d \n",no);

}


// extern storage class 

// *** Extern is default storage class of global variable but still to access variable from one file to another file it is neccessory to write extern keyword


										// Linkage -->  External
										// Scope --> Through out the programme
										// Lifetime --> Through out the programme

	extern int my_External_Variable;	// declaration of a varible 
										// variable defination is in other file
										// using extern keyword we can access variable from External files
										// Memory allocation in Data Section
	
	//my_External_Variable =1;			// we can also change or modify the value of  that external defined variable
										// it loss the privacy of that varible

	

extern void ExternalFunction();			// Declaration of External function

// Global Static 

	//extern int P;					// Linkage --> Internal b'coze it can not Access this P vriable outside of storageclass2 file
									//SCOPE -->Through out File Scope
                                    // LIFETIME --> Through out programme
extern int is;

int main()
{
	auto int var =111;			
	
	printf("%d \n",var);		
	
	myFunction();				//function call
	myFunction();				// when we call the function memmory gets alloacted to variable

	fun();						//function call

	hello();
	hello();

	printf("%d \n", my_External_Variable);

	ExternalFunction();

	//printf("%d \n",P);

	return 0;

}
	int is =11;