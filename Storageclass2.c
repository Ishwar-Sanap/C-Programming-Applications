#include <stdio.h>

int my_External_Variable = 101;         // variable defination
                                        // This variabale can be used in other file



static int P =500;                  // it is Gloal Static
                                    //Due to this static keyword we can't access P Variable Outside the file

                                    // so here is a SCOPe -->Through out File Scope
                                    // so here is a LIFETIME --> Through out programme
                                    // Linkage --> Internal




void ExternalFunction()         // Defenation of External function
{

    double data =3.14;

    printf("Welcome to External Function ...\n");
}