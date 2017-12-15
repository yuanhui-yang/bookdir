/*输入N,计算S=1!+2!+3!+4!+...+n!的末6位（不含前导0）。
**#include<stdio.h>和clock()函数可以获得程序运行的时间。*/
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
	printf("Time used = %.2fs\n",(double)clock() / CLOCKS_PER_SEC); //强制类型转换 
	return 0;
} 
/*2017.10.28*/
