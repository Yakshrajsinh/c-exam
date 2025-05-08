#include<stdio.h>

int main(){
    char letter;
    printf("enter any letter:");
    scanf("%c",&letter);
    
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
        printf("%c is a vovel",letter);
        break;
        default:
        printf("%c is consonant",letter);
        break;
    }

}