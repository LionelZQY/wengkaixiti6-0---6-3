#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d",&a);
	while(scanf("%c",&c)){   //首先一定可以进入循环，其次可以在这里输入C 
		switch(c){
			case '+': {scanf("%d", &b); a+=b; break;}    //在case内部不但可以做运算，还可以做下个数的输入 
			case '-': {scanf("%d", &b); a-=b; break;}    //用break跳出循环，发生错误（除数为0时用return 0结束） 
			case '*': {scanf("%d", &b); a*=b; break;}
			case '/': {
				scanf("%d",&b);
				if(b==0){
					printf("ERROR");
					return 0;
				}else{
					a/=b;
					break;
				}
			}
			case '=':{
				printf("%d\n",a);
				return 0;
			}
			default:{
				printf("ERROR");
				return 0; 
			}				
		}
	}
	return 0;
}
