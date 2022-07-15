#include <stdio.h>
unsigned char G_Msg_EngineInformation_Byte[5];
void binary_values(char a);
void binary_values(char a)
{
  for(int i=7;i>=0;i--)
  {
      a&(1<<i)?printf(" 1 "):printf(" 0 ");
  }
}

int main()
{
   
    unsigned int G_Eng_EngineRpm_uint = 1000;
    unsigned char G_Eng_EngineTemperature_uchar = 50 ;
    int i;
    for(i=0;i<5;i++)
    {
        if(i==0)
        {
            G_Msg_EngineInformation_Byte[0]=G_Msg_EngineInformation_Byte[0]|0x01;
            
            printf("%d\n",G_Msg_EngineInformation_Byte[0]);
            //printf("rpm %d\n",G_Msg_EngineInformation_Byte[i]);
            binary_values(G_Msg_EngineInformation_Byte[i]);
            printf("\n");
        }
        if(i==1)
        {
            G_Msg_EngineInformation_Byte[1]=G_Msg_EngineInformation_Byte[1]|0xF4;
            //printf("rpm %x\n",G_Msg_EngineInformation_Byte[i]);
            binary_values(G_Msg_EngineInformation_Byte[i]);
             printf("\n");
        }
        if(i==2)
        {
            G_Msg_EngineInformation_Byte[i]=0x00;
            //G_Msg_EngineInformation_Byte[i]=(G_Msg_EngineInformation_Byte[i]|(0<<7));
            G_Msg_EngineInformation_Byte[i]=G_Msg_EngineInformation_Byte[i]|0x00;
            //printf("rpm %x\n",G_Msg_EngineInformation_Byte[i]);
            binary_values(G_Msg_EngineInformation_Byte[i]);
             printf("\n");
        }
        if(i==3)
        {
            G_Msg_EngineInformation_Byte[i]=(G_Msg_EngineInformation_Byte[i]|0x32);
            //printf(" temperature %d\n",G_Msg_EngineInformation_Byte[i]);
            binary_values(G_Msg_EngineInformation_Byte[i]);
             printf("\n");
            
        }
    }
     
        return 0;
}
