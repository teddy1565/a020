#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char ID_number[10];
int getN(char c){
    switch(c){
        case'A':
            return 10;
        case 'B':
            return 11;
        case 'C':
            return 12;
        case 'D':
            return 13;
        case 'E':
            return 14;
        case 'F':
            return 15;
        case 'G':
            return 16;
        case 'H':
            return 17;
        case 'I':
            return 34;
        case 'J':
            return 18;
        case 'K':
            return 19;
        case 'L':
            return 20;
        case 'M':
            return 21;
        case 'N':
            return 22;
        case 'O':
            return 35;
        case 'P':
            return 23;
        case 'Q':
            return 24;
        case 'R':
            return 25;
        case 'S':
            return 26;
        case 'T':
            return 27;
        case 'U':
            return 28;
        case 'V':
            return 29;
        case 'W':
            return 32;
        case 'X':
            return 30;
        case 'Y':
            return 31;
        case 'Z':
            return 33;
        default:
            break;
    }
    return 0;
}
int main(){
    ID_number data;
    memset(data,'\0',10);
    while(scanf("%s",data)!=EOF){
        int EN_num=getN(data[0]);
        int sum=0;
        for(int i=1,k=8;i<9;i++,k--){
            sum = sum +((data[i]-'0')*k);
        }
        sum+=((EN_num/10)+((EN_num%10)*9))+data[9]-'0';
        if(sum%10==0)printf("real");
        else printf("fake");
    }
    return 0;
}