/*����N,����S=1!+2!+3!+4!+...+n!��ĩ6λ������ǰ��0����
**#include<stdio.h>��clock()�������Ի�ó������е�ʱ�䡣*/
#include<stdio.h>
#include<time.h> 
int main(void)
{
    int n,s=1;
    scanf("%d",&n);
    for(int i=2; i<=n; i++){
    	int x=1;
    	for(int j=1; j<=i; j++){
    		x=x*j;
		}
		s=x+s;
	}
	printf("%d\n",s%100000);
	printf("Time used = %.2fs\n",(double)clock() / CLOCKS_PER_SEC); //ǿ������ת�� 
	return 0;
} 
/*2017.10.28*/
