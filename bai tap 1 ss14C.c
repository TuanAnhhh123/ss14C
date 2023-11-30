#include<stdio.h>
#include<string.h>
int main(){
	int a;
	printf("nhap vao gia tri : ");
	scanf("%d",&a);
	
	int *var=&a;
	int var1=*var;
	printf("gia tri cua bien a la :%d\n",*var);
	printf("dia chi cua bien a la :%d\n",var);
	printf("gia tri cua bien vua nhap la :%d\n",var1);
	printf("dia chi cua bien vua nhap la :%d\n",&a);
	
}
