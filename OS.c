#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <unistd.h>  //Header file for sleep(). 
#include <pthread.h>  


void *myThreadFun(void *vargp)  {
	  
      
    system("CLS");
    printf(" \n");
	printf(" \n");
	printf("\t\t\t\t ================================================= \n");
	sleep(1); 
	printf(" \t\t\t\t||\t  ___(Billing System)___\t ||\n");
	printf("\t\t\t\t ================================================= \n");
	sleep(1); 
	system("COLOR 17");
	sleep(1); 
	system("COLOR 47");
	sleep(1); 
	system("COLOR 9");
	printf("\n\n\n\n\n\n\n\n\t\t\t                   (Press any key to continue)\n");
	printf(" ---------------------------------------------------------------------------------------------------------------------");
	getch();
	return NULL;  
}
int max(int* b, int size){
	int maxi=b[0],loc=0;
	for(int i=0;i<size;i++){
		if(b[i]>maxi){
			loc=i;
		}
	}
	return loc;

}
void bubbleSort(int* a,char* v,int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(a[j]<a[j+1]){
				char temp=v[j+1];
				v[j+1]=v[j];
				v[j]=temp;
			}
		}
	}
}
void main(){
	pthread_t thread_id; 
	pthread_create(&thread_id, NULL, myThreadFun, NULL);      
	pthread_join(thread_id, NULL);
	system("CLS");
	int a[10],sum=0;
	printf("Enter the number of item all ten kids have one by one:\n");
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		int loc=max(a,10);
		int temp=a[loc];
		a[loc]=0-sum;
		sum=sum+temp;
	}
	char c[]="abcdefghij";
	bubbleSort(a,c,10);
	for(int i=0;i<10;i++){
		printf("%c ", c[i]);
	}
	
}

