#include<stdio.h>
#include<math.h>
float temp(float th)
{
	return (-2.2067*pow(10,-12))*(pow(th,4)-81*pow(10,8));
}


void euler(int h,int t)
{
	float y1=0;
	int t1=0;
	float y=1200.00;
	printf("\ny1:%f\n",y1);
	printf("\nt1:%d\n",t1);
	printf("\ny:%f\n",y);
	while(t>t1)
    {
		y1=y+temp(y)*h;
		printf( "\nResult:%f\n",y1);
		y=y1;
		t1=t1+h;
		printf("\nt1:%d\n",t1);
    }
}



int  main()
{
	int h;
	printf("Input the value of step size:");
	scanf("%d",&h);
	int t=480;
	printf("\nt:%d\n",t);
	euler(h,t);
	return 0;
}


