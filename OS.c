#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <unistd.h>  //Header file for sleep(). 
#include <pthread.h>  

typedef struct Queue{
	int item;
	char name;
}Queue;
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
void bubbleSort(Queue* a,int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(a[j].item<a[j+1].item){
				Queue temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}
void main(){
	pthread_t thread_id; 
	pthread_create(&thread_id, NULL, myThreadFun, NULL);      
	pthread_join(thread_id, NULL);
	system("CLS");
	Queue Q[10];
	int a[10],sum=0;
	printf("Enter the number of item all ten kids (with names a,b,c,d,e,f,g,h,i,j) have one by one:\n");
	for(int i=0;i<10;i++){
		scanf("%d %c",&Q[i].item,&Q[i].name);
	}
	for(int i=0;i<10;i++){
		sum=sum+Q[i].item;
	}

	bubbleSort(Q,10);
	for(int i=0;i<10;i++){
		printf("%c ",Q[i].name);
	}
	printf("\nTotal Time taken by Billing person: %d",sum);
	
}

