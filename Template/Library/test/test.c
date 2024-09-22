#include"stdio.h"
#define A   1<<0
#define B   1<<1
#define C   1<<2
#define D   1<<3
#define E   1<<4
#define F   1<<5
#define G   1<<6
#define dp  1<<7
/*
         AAAA
        F    B
        F    B
         GGGG
        E    C
        E    C  dp
         DDDD

*/
int main(){
    char hex[]   = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    /*  dpABC DEFG  */
     
    int var = (F|G|B|C);
    printf("0x%c%c",hex[(0xF0&var)>>4],hex[0x0f&var]);
}