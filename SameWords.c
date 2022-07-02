#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
main(){
    char a[255], b[255];
    printf("Digite a palavra A!... :");
    setbuf(stdin, 0);
    fgets(a, 255, stdin);
    printf("Digite a palavra B!... :");
    setbuf(stdin, 0);
    fgets(b, 255, stdin);
    a[strlen(a)-1]='\0';
    b[strlen(b)-1]='\0';
    int aContemB;
    for(int i = 0; i < strlen(a) - 1; i++){
        aContemB = 1;
        for (int j = 0; j < strlen(b) - 1; j++){
            //c a c h o r r o
            //0 1 2 3 4 5 6 7
            //c a c h o
            //0 1 2 3 4
            if (b[j]!=a[i + j]){
                aContemB = 0;
            }
            if (aContemB==1){
                aContemB = 1;
            }           
        }
    }
    if (aContemB=1){
        printf("A palavra A contem a palavra B");
    }else{
        printf("A palavra A nao contem a palavra B");
    }
    return 0;
}