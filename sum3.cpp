#include <iostream>
#include <math.h>
#include<stdio.h>
#include<sys/time.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int len=pow(2.0,28);
	int *a=new int[len];
	srand((unsigned)time(NULL));
	for(int i=0;i<len;i++)
		a[i]=rand()%100;
	for(len;len>=2;len=len/2)
	{
	struct  timeval start;
	struct  timeval end;
	unsigned  long diff;
	gettimeofday(&start,NULL);
	for(int m=len;m>1;m/=2)
		for(int i=0;i<m/2;i++)
			a[i]=a[i*2]+a[i*2+1];
	gettimeofday(&end,NULL);
	diff = 1000000 * (end.tv_sec-start.tv_sec)+ end.tv_usec-start.tv_usec;
	cout<<"n="<<len<<" "<<"timeis"<<diff<<endl;
	}
	delete[]a;
	return 0;
}
