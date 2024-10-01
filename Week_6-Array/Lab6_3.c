#include<stdio.h>
#include<string.h>
int main(){
    char str[110];
    int vovel=0, constant=0;
    scanf("%s",str);
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' ||str[i]=='I' ||str[i]=='O' || str[i]=='U'){
            vovel++;
        }
        else{
            constant++;
        }
    }
    printf("Vowels: %d\nConsonants: %d",vovel,constant);
}