#include <stdio.h>

int main()
{
    int yc,i;
    printf("1-Spring\n2-Summer\n3-Autumn\n4-Winter\n");
    printf("Your choice= ");scanf("%d",&yc);
    if(0<yc<=4){
    switch(yc){
        case(1):
            printf("March, April, May");
        case(2):
            printf("June, July, August");
        case(3):
            printf("September, October, November");
        case(4):
            printf("December, January, February");
        }
    }
    else{
        printf("You entered an invalid number!");
    }
    return 0;
}
