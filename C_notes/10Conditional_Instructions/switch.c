//switch-case control statement

#include <stdio.h>

int main(){
    int rating;
    printf("Enter your rating(1-5)\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("Your rating is 1\n");
        break; /*every case is ended with an break, if it is not mentioned in a particular case then the following cases will also be executed within this case until it encounters a break*/
    case 2:
        printf("Your rating is 2\n");
        break;
    case 3:
        printf("Your rating is 3\n");
        break;
    case 4:
        printf("Your rating is 4\n");
        break;
    case 5:
        printf("Your rating is 5\n");
        break;
    default:
        printf("Invalid rating");

    }
    return 0;
}
/*
1. Switch can only deal with control expression of integral type (i.e., either be an integer or any value that can be converted to an integer. i.e., int and char.
2. If the variable is a character it should be included in single quotes.
3. It is always recomended to use default case in 3. switch statement but not mandatory.
4. default should appear at the end and there is no need of break statement in default case.
*/