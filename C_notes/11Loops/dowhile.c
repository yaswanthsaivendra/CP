/* 
do - while loop     it first execute the do block and then check the condition.
do
{
    statement block;
}
while (condition)
*/

#include <stdio.h>

int main(){
    int i=0;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<10);
    
    return 0;
}