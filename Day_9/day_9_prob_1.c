#include<stdio.h>
int main()
{
    int ADC0NO=0x20,CMCON=0,mask;
    printf("enter the register value\n");
    //scanf("%d",&ADC0NO);
    mask=0x06;
    mask=(mask<<3);
    printf("the value of mask is %x",mask);
    ADC0NO=(ADC0NO|mask);
    if(ADC0NO==0x30)
    {
        CMCON=((CMCON)|((1<<7)|(1<<6)|(1<<3)));
        printf("the value of CMCON is %x",CMCON);
    }
    return 0;
}
