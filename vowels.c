#include<stdio.h>
int main(){
    char ch;
    printf("please enter an alphabet:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("\n %c is a vowel",ch);
    }
    else
    {
        printf("\n %c is a consonant",ch);
    }
    return 0;
}