#include<stdio.h>
#include<math.h>
int main()
{
	int i;float a,b,c,fa,fb;float x[i],fx[i];
	printf("enter the lowest and highest value:");
	scanf("%f%f",&a,&b);
	fa=pow(a,3)-5*a-7;
	printf("%f",fa);
	fb=pow(b,3)-5*b-7;
	printf("%f",fb);
	i=1;
	x[0]=0;
 do
	{
		printf("itr%d\n",i);
		fa=pow(a,3)-5*a-7;
		fb=pow(b,3)-5*b-7;
		c=x[i]=(a*fb-b*fa)/(fb-fa);
		printf("%f\n",x[i]);
	//	printf("%d",x[i]);
		fx[i]=pow(x[i],3)-5*x[i]-7;
	//	printf("fxi%f\n",fx[i]);
		//printf("%d",fxi);
		if(fx[i]<0)
		{a=x[i],b=b;
		}
		else
		{ 
		   a=a;b=x[i];}
		   
		   
		i++;
	}while(x[i-1]-x[i-2]>0.01 );
	printf("final value=%f",c);
	
}
