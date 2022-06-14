/* while loop

    while (condition)
{                           //it runs until the condition is true
    statement block;
}
*/

#include <stdio.h>

int main(){
    int num=0;
    while(num<10){
        printf("%d\n",num);
        num++;
    }
    return 0;
}