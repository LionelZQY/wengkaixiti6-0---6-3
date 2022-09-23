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
	int a=0;            //i为运算符，a为运算数 
	int sum=0;
	scanf("%d",&a);      //先输入一个数字，来处理/0的情况
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



//6-1(原先有问题的解答)
int main() 
{
	char i='0';
	int a=0;            //i为运算符，a为运算数 
	int sum=0;
	scanf("%d",&a);      //先输入一个数字，来处理/0的情况 
	sum=a;
	 {
		scanf("%c",&i);              //switch可以是字符吗 
		scanf("%d",&a);   //问题1：do-while循环一定会执行一次 
		if(i=='+'){       //问题2：对/0的处理，可考虑用一个 
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

