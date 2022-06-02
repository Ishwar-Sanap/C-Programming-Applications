
/*
    Header File should contain -->
        1) user defined macro 
        2) header file inclusion of other header file
        3) prototype of the function (i.e function declaration)
        4) Structure and Union declaration etc.

*/

# define MAX 100         // MAX is MACRO 
                        // Preprocessor replace all the MAX words with the define value 100 ( find and replace ) blind replacement 

# pragma pack(1)      // preprocessor compiler la sangtoy ki eka eka chya patit memory de for structure Demo  (1)     
                    // To avoid the Padding 

struct Demo         // structure declaration 
{
    int no;
    char ch;
    float fValue;
};

void fun();      // Function declaration 

