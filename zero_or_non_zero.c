#include <stdio.h>

int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if(number == 0){
        printf("Zero");
    } else {
        printf("Non Zero");
    }
}