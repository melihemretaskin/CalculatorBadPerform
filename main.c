#include <stdio.h>
#include <math.h>
#include <colordlg.h>



int main() {

    int x ,y;
    int s;
    printf("\n Welcome to Calcy \n");

    printf("\n Enter first number: ");
    scanf("%d",&x);
    printf("First Number = %d \n ",x);
    printf("Enter second number: ");
    scanf("%d",&y);
    printf("Second Number = %d \n ",y);



    printf("Actions for (add (+) == 1) || (sub(-) == 2) || (multi(*) == 3 ) || (div(/) == 4 )  : ");
    scanf("%d",&s);


    if(s == 1){

        printf(" %d + % d = %d ",x,y,x + y);
        int total = x + y;
        int n ;
        int c;
        printf("\n If you want new number continue for  enter 1 ");
        scanf("%d",&c);
        if(c == 1){
            printf("Enter continue Number: ");
            scanf("%d",&n);
            printf("%d + %d = %d",n,total,n+total);

        }
        else{
            return main();
        }
    }
    else if(s == 2){

        printf(" %d - %d = %d ",x,y,x-y);

    }
    else if(s == 3){

        printf(" %d * %d = %d",x,y,x * y);
    }
    else if(s == 4){
        if(y != 0){
            printf(" %d / %d = %d ",x,y,x / y);
        }
        else{
            printf("undefined because the denominator cannot be 0 from Division");
        }


    }
    else{
        printf("Enter for range 1-4 !\n"
                    "Actions for (+ = 1)  (- = 2)  ( * = 3 )  ( / = 4 )\n "
                    " Please try again :) ");
    }

return main();

}


