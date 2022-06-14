//In c, we can generate a random number using rand() function.
//the range of the random value is in between 0 and RAND_MAX, the value of RAND_MAX varies for different implementations but mostly will be equal to 32767.
/* run this code to check the value of RAND_MAX
#include <stdio.h>
int main()
{
    printf("%d to %d", 0, RAND_MAX);
    return 0;
}
*/
/*    run this code multiple times and observe the output.
#include <stdio.h>

int main(){
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());
    return 0;
}
*/
//we can see that we get different values for the 4 print statements but the sequence of random numbers produced is same in every run.
//Its because the algorithm of the function depends on a single variable which is hardcoded in it and excutes sequence of instructions on that variable to generate random numbers, so the sequence of random numbers generated will be same in every run.
//So, to generate random numbers we take help of one more function srand() from stdlib.h header file.
//srand() function takes one parameter as input which is formely called as seed.(by default value of seed is 1)

/*    run this code multiple times by changing the value of seed.
#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(1);                   //srand(unsigned int seed);
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());
    return 0;
}
*/
//we can observe we get multiple sequences in multiple runs depending upon the value of c.
//So, we are almost done. The value of seed is hardcoded in the above code, now we have to find a way to input a value(which is keep on changing) as the value of seed.
//Luckily in c, we have time() function in time.h header file. The time() function accepts one parameter to set timer in our case we dont need anything so we set it to NULL .
//time() function returns the time elasped in seconds from the day jan 1, 1971. So, it keep on changing every second.


/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>   

int main()
{
    srand(time(NULL));
    printf("%d\n", rand());

    return 0;
}
*/

//To generate a random number between a particular range.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    srand(time(NULL));
    num = rand()%100 + 1; //Generates a random number between 1 and 100.
    printf("the number is %d",num);
    return 0;
}

//NOTE: using the above method for generating a random number wont ensure the uniformity in generating a completely random number as the range depends on the implementation, the algorithm of the rand follows the same sequences and even we didnt consider the exceptional cases which may cover due to change in range with implementation in our code. So we cannot use this for cryptographic use case.
