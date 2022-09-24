#include<stdio.h>
int main()
{
    int a[5]={50,10,5,2,1};//定义5种面值的钱币
    int b[5];
    
    int back;
    scanf("%d", &back);
    
    int i,x=back;
    for(i=0;i<5;i++){
        b[i]=x/a[i]; 
        x%=a[i];
    }
    
    printf("共需要找您%d分,需要找您%d个5角,%d个1角,%d个5分,%d个2分,%d个1分。\n",back,b[0],b[1],b[2],b[3],b[4]);
    return 0;
}