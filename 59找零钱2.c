#include<stdio.h>
int main()
{
    int a[5]={50,10,5,2,1};//����5����ֵ��Ǯ��
    int b[5];
    
    int back;
    scanf("%d", &back);
    
    int i,x=back;
    for(i=0;i<5;i++){
        b[i]=x/a[i]; 
        x%=a[i];
    }
    
    printf("����Ҫ����%d��,��Ҫ����%d��5��,%d��1��,%d��5��,%d��2��,%d��1�֡�\n",back,b[0],b[1],b[2],b[3],b[4]);
    return 0;
}