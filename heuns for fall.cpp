#include<stdio.h>
#include<math.h>

float temp(float th)
{
	return (-2.2067*pow(10,-12))*(pow(th,4)-81*pow(10,8));
}


void heuns(int h,int t)
{
	float y1=0;
	int t1=0;
	float y=1200.00;
	printf("\ny1:%f\n",y1);
	printf("\nt1:%d\n",t1);
	printf("\ny:%f\n",y);
	while(t>t1)
    {
        float k1=temp(y);
        float k2=temp(y+k1*h);
        y1=y+(0.5*k1+0.5*k2)*h;
        printf("\nk1:%f\n",k1);
        printf("\nk2:%f\n",k2);
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
	heuns(h,t);
	return 0;
}



