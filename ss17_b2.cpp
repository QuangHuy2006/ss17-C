#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void arr(char *a){
	printf("nhap vao chuoi bat ky:");
	gets(a);
}
void print(char *a){
	for(int i=0;i<strlen(a);i++){
		printf("%c", *(a+i));
	}
}
void length(char *a){
	int cnt;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a' && a[i]<='z') ++cnt;
		if(a[i]>='A' && a[i]<='Z') ++cnt;
	}
	printf("\nso luong chu cai trong mang la: %d", cnt);
}
void sum(char *a){
	int cnt;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='0' && a[i]<='9') ++cnt;
	}
	printf("\nso luong chu so trong mang la: %d", cnt);
}
void max(char *a){
	int cnt;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>=0 && a[i]<=47) ++cnt;
		if(a[i]>=58 && a[i]<=64) ++cnt;
	}
	printf("\nso luong ky tu dac biet trong mang la: %d", cnt);
}
int main(){
	int choice;
	char a[100];
	do{
		printf("\n\n1:nhap vao chuoi");
		printf("\n2:in ra chuoi");
		printf("\n3:dem so luong chu cai trong chuoi");
		printf("\n4:dem so luong so trong chuoi");
		printf("\n5:dem so luong ky tu dac biet trong chuoi");
		printf("\n6:thoat");
		printf("\nnhap lua chon cua ban:");
		scanf("%d", &choice);
		if(choice==1){
			fflush(stdin);
		arr(a);
		}
		if(choice==2){
			fflush(stdin);
			print(a);
		}
		if(choice==3){
			fflush(stdin);
			length(a);
		}
		if(choice==4){
			fflush(stdin);
			sum(a);
		}       
		if(choice==5){
			fflush(stdin);
			max(a);
		}
		if(choice==6){
			printf("thoat chuong trinh !");
		}
	}while(choice!=6);
	exit(0);
}