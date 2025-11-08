#include <stdio.h>
#include <stdlib.h>

int ConvertToDec(int c){
    if ('0' <= c && c <= '9') return c - '0';
    if ('a' <= c && c <= 'f') return c - 'a' + 10;
    return -1; // invalid
}

char ConvertToHex(int d) {
    if (d >= 0 && d <= 9)  return '0' + d;
    if (d >= 10 && d <= 15) return 'a' + (d - 10);
}

void PrintRec(int value, int TargetBase){

    if(value == 0) return;
    PrintRec(value/TargetBase,TargetBase);
    printf("%c",ConvertToHex(value%TargetBase));  
}


void main(void)
{
    int SourceBase,TargetBase,SourceNumber;

    printf("enter the source base:\n");
    scanf("%d", &SourceBase);
    
    if(SourceBase < 2 || SourceBase > 16){
        printf("invalid source base! \n");
        return;
    }

    printf("enter the target base:\n");
    scanf("%d", &TargetBase);

    if(TargetBase < 2 || TargetBase > 16){
        printf("invalid target base! \n");
        return;
    }

    printf("enter a number in base %d:\n",SourceBase);
    int c;
    c = getchar(); //gets rid of /n left over from scanf

    int value = 0;
    int curr;
    while ((c = getchar()) != '\n' && c != EOF) {
        curr = ConvertToDec(c);
        if (curr < 0 || curr >= SourceBase) {
            printf("invalid input number!\n");
            return;
        }
        value = value * SourceBase + curr;
    }

    printf("The number in base %d is:\n",TargetBase);
    if( value == 0){
      printf("0");  
    }

    PrintRec(value,TargetBase);
    
    printf("\n");

}




int power(int counter){
    int sum = 1;
    for (int i = 1 ; i<=counter; i++){
        sum *= 10;
    }
    return sum;
}




