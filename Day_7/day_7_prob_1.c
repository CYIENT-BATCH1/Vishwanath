int main()
{
int a=23,i;
int b=0;
for(i=0;i<=3;i++)
{
    b=b|(((a>>(i*8)&0xFF)<<((3-i)*8)));
    
}
printf("the converted number is %x",b);
return 0;
}
