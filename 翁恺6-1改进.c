#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d",&a);
	while(scanf("%c",&c)){   //����һ�����Խ���ѭ������ο�������������C 
		switch(c){
			case '+': {scanf("%d", &b); a+=b; break;}    //��case�ڲ��������������㣬���������¸��������� 
			case '-': {scanf("%d", &b); a-=b; break;}    //��break����ѭ�����������󣨳���Ϊ0ʱ��return 0������ 
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
