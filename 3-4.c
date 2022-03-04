//#include<stdio.h>
//int main()
//{
//	printf("c++");
//	return 0;
//}
//#include<stdio.h>
//
//void hello()
//{
//	printf("hello,world!\n");
//}
//void main ()
//{
//	void hello();
//	hello;
//	printf("hello,world!\n");
//	
//}
////#include<stdio.h>
////int max(int a,int b )
////{
////	if(a>b)return a;else return b;
////}
////void main()
////
////
////{
////	int max(int a ,int b);
////	int x,y,z;
////	scanf("%d%d",&x,&y);
////	z=max(x,y);
////	printf("maxmum=%d",z);
////		return 0;
////}
//#include<stdio.h>
//void main()
//{
//	int m;
//	int fun(int m);
//	printf("input number:");
//	scanf("%d",&m);
//	printf("m=%d\n",m);
//	fun(m);
//	printf("m=%d\n",m);
//
//}
//int fun(int n)
//{
//	int i;
//	for(i=n-1;i>=1;i--)
//		n=n+i;
//	printf("n=%d\n",n);
//	return 0;
//}
//#include<stdio.h>
// void move(int n,int x,int y,int z)
//{
//	if (n==1)
//		printf(" %c->%c",x,z);
//	else
//	{
//		move(n-1,x,z,y);
//		printf("%c->%c",x,z);
//		move(n-1,y,x,z);
//	}
//
// }
// void main()
//
// {
//	 int h; 
//	 printf("input number:");
//	 scanf("%d",&h);
//	 printf("the step to moving %2d diskes:\n",h);
//	 move(h,'a','b','c');
//	 printf("\n");
//
// }
//#include<stdio.h>
//void nzp(int v)
//{
//	if(v>0)printf("%d",v);
//	else printf("%d",0);
//}
//void mian()
//
//{
//	int a[5],i;
//	printf("intput 5 munbers:\n");
//	for(i=1;i<5;i++)
//	{
//		scanf("%d",&a);
//		nzp(a[i]);
//	}
//}
//#include <stdio.h>
//
//fun(int a)
//
//{
//	auto int b=0;
//	static int c=3;//¾²Ì¬´æ´¢
//	b=b+1;
//	c=c+1;
//	return(a+b+c);
//}
//void main()
//{
//	int a=2,i;
//	for(i=0;i<3;i++)
//		printf("%d",fun(a));
//
////}
//#include<stdio.h>
//void main()
//{
//	int i=2;
//	int p=0;
//	p=fun(i,i++);
//	printf("i=%d,p=%d\n",i,p);
//
//}
//int fun(int a,int b)
//{
//	int c;
//	printf("a=%d,b=%d\n",a,b);
//	if(a>b)
//		c=1;
//	else if(a==b)
//		c=0;
//	else 
//		c=-1;
//	return c;
//
//}
//
//int a;
//int* p=&a;
//int a,*p=&a;
//int a;
//int *p;
//p=&a;
//int i,j,*p1,*p2;
//i='a';
//j='b';
//p1=&i;
//p2=&j;
//#include<stdio.h>
//void main()
//{
//	int a,b;
//	int *pointer_1;
//	int *pointer_2;
//	a=100;b=10;
//	pointer_1=&a;
//	pointer_2=&b;
//	printf("%d,%d\n",a,b);
//	printf("%d,%d\n",*pointer_1,*pointer_2);
//
//}
//
//#include <stdio.h>

//void main()
//{
//	int *p1,*p2,*p,a,b;
//	scanf("%d%d",&a,&b);
//	p1=&a;p2=&b;
//	if(a<b)
//	{
//		p=p1;
//		p1=p2;
//		p2=p;
//
//	}
//	printf("\na=%d,b=%d\n",a,b);
//	printf("max=%d,min=%d\n",*p1,*p2);
//
//
//}
//#include<stdio.h>
//void swap(int *p1,int *p2)
//{
//	int temp=0;
//	temp=*p1;
//	*p1=*p2;
//	*p2=temp;
//}
//void main()
//{
//	int a,b,*pointer_1,*pointer_2;
//	scanf("%d%d",&a,&b);
//	pointer_1=&a;
//	pointer_2=&b;
//	if(a<b)
//		swap(pointer_1,pointer_2);
//	printf("after swap:%d,%d\n",a,b);
//}
//
//int a[5],*pa;
////pa=&a[0];
//int a[5];
//int *pa=a;
//char *pc;
////pc="c language";
//char *pc="c language!";
//int (*pf)();
//pf=fun;
//#include <stdio.h>
//
//void main()
//{
//	int a,b,c,*pmax,*pmin;
//	printf("input three numbers:\n");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//	{
//		pmax=&a;
//		pmin=&b;
//	}
//	else
//	{
//		pmax=&b;pmin=&a;
//
//	}
//	if(c>*pmax)pmax=&c;
//	if(c<*pmin)pmin=&c;
//	printf("max=%d\nmin=%d\n",*pmax,*pmin);
//}
//
//
//
struct student
{
}