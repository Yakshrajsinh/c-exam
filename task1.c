#include<stdio.h>

int main(){
    char letter;
    printf("enter any letter:");
    scanf("%d",&letter);

    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%d is a vovel",letter);
        break;
        default:
        printf("%d is consonant",letter);
        break;
    }

}