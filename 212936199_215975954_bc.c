#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
    int SourceBase,TargetBase,SourceNumber;
    
    printf("enter the source base:\n");
    scanf("%d", &SourceBase);
    printf("enter the target base:\n");
    scanf("%d", &TargetBase);
    printf("enter a number in base %d:\n",SourceBase);
    int c;
    scanf("%d", &c);
    printf("enter a number in base %d:\n",SourceBase);
    int NumOfDigits = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
        NumOfDigits++;
    }

    while ((c = getchar()) != '\n' && c != EOF) {
        converter(c);
    }
}

char converter(){

}

char ConvertToDecimal(int SourceBase,int character){

}