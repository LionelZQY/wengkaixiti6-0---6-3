#include <stdio.h>

//6-0
int main()
{
	double a1,a2;
	char b;
	int c;
	scanf("%lf %d %c %lf",&a1,&c,&b,&a2);
	printf("%c %d %.2f %.1f",b,c,a1,a2);
}



//6-1
int main() 
{
	char i='0';
	int a=0;            //iΪ�������aΪ������ 
	int sum=0;
	scanf("%d",&a);      //������һ�����֣�������/0�����
	scanf("%c",&i); 
	sum=a;
	 while(i!='='){
		scanf("%d",&a);
		if(i=='+'){      
			sum+=a;
		}
		if(i=='-'){
			sum-=a;
		}
		if(i=='*'){
			sum*=a;
		}
		if(i=='/'){
			if(a==0){
				printf("error");
				goto out;
			}
			sum/=a;	
		}
		scanf("%c",&i);
	}
	printf("%d",sum);
out:
	return 0;
}



//6-1(ԭ��������Ľ��)
int main() 
{
	char i='0';
	int a=0;            //iΪ�������aΪ������ 
	int sum=0;
	scanf("%d",&a);      //������һ�����֣�������/0����� 
	sum=a;
	 {
		scanf("%c",&i);              //switch�������ַ��� 
		scanf("%d",&a);   //����1��do-whileѭ��һ����ִ��һ�� 
		if(i=='+'){       //����2����/0�Ĵ����ɿ�����һ�� 
			sum+=a;
		}
		if(i=='-'){
			sum-=a;
		}
		if(i=='*'){
			sum*=a;
		}
		if(i=='/'){
			if(a==0){
				printf("error");
				goto out;
			}
			sum/=a;	
		}
	}while(i!='=');
	printf("%d",sum);
out:
	return 0;
}




//6=2
int main()
{
	char a;
	while(a!='#'){
		scanf("%c",&a);
		if(a!='#'){
			if(a>='A'&&a<='Z'||a>='a'&&a<='z'){
				if(a>90){
					a-=32;
					printf("%c",a);
					continue;
				}
				if(a<90){
					a+=32;
					printf("%c",a);
				}
			}
			else{
				printf("%c",a);
			}
		}
	}
	return 0;
}



//6-3
int main()
{
	char a='0';
	scanf("%c",&a);
	int cnt=0;
	for(;a!='.';){
		cnt=0;
		if(a==' '){
			scanf("%c",&a);
		}
		for(;a!=' ';){
			cnt++;
			scanf("%c",&a);
			if(a==' '){
			printf("%d ",cnt);
			}
			if(a=='.'){
				printf("%d ",cnt);
				break;
			}
		}
	}
	return 0;
}

