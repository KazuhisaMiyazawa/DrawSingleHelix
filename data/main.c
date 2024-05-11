#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	FILE *fp=fopen("data.txt","w");
	int P=1000;
	double height=1.0;
	double r=0.8;
	double dP = height/P;
	for(int i=0;i<P;i++){
		double z = dP*i;
		double x = r * cos(2*M_PI*z);
		double y = r * sin(2*M_PI*z);
		fprintf(fp,"%8.3f %8.3f %8.3f\n",x,y,z);
	}
	fclose(fp);
	return 0;
}
