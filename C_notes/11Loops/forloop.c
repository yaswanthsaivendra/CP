/* for loop
	
	for(intialization;condition;increment/decrement/update)
    {
        statement block;
    }
    _in for loop one or all the expressions can be omitted, even though semicolons should be mentioned.
	_if we do more than one intialization in first section of for loop, they should be seperated by commas.
	_we can check for more than one condition in the second condition of for loop using logical operators(|| or &&)
	_we can omit third section, if we make the update to the variable inside the loop of code.
*/

#include <stdio.h>

int main(){             //exactly works same as the while loop.
    
    for(int a=0; a<10; a++){
        printf("The value of a is %d \n", a);
    }
    return 0;
}

//break;
//continue;    these can be used in loops for their asusual purpose.