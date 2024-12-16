#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
void arr(char *a){
	printf("nhap vao chuoi bat ky:");
	gets(a);
}
void print(char *a){
	for(int i=0;i<strlen(a)/2;i++){
		std::swap(a[i],a[strlen(a)-i-1]);
	}
	for(int i=0;i<strlen(a);i++){
		printf("%c", a[i]);
	}
}
void length(char *a){
	int cnt;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a' && a[i]<='z') ++cnt;
		if(a[i]>='A' && a[i]<='Z') ++cnt;
	}
	printf("\nso luong tu trong mang la: %d", cnt);
}
void sum(char *a,char *b){
	printf("nhap vao chuoi bat ky:");
	gets(b);
	if(strlen(a)>strlen(b)){
		printf("chuoi moi dai hon chuoi ban dau !");
		}else {
		printf("chuoi moi ngan hon chuoi ban dau !");	
		}
}
void max(char *a){
int cnt;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a' && a[i]<='z') a[i]-=32;
		if(a[i]>='A' && a[i]<='Z') a[i]+=0;
	}
	printf("\nchuoi moi la:");
	for(int i=0;i<strlen(a);i++){
		printf("%c", a[i]);
	}
}
void newstring(char *a, char *b){
	printf("nhap vao chuoi bat ky:");
	gets(b);
	strcat(b,a);
		printf("%s", b);
}
int main(){
	int choice;
	char a[100];
	char b[100];
	do{
		printf("\n\n1:nhap vao chuoi");
		printf("\n2:in ra chuoi dao nguoc");
		printf("\n3:dem so luong tu trong chuoi");
		printf("\n4:tao chuoi moi so sanh voi chuoi ban dau");
		printf("\n5:in hoa cac chu cai trong chuoi");
		printf("\n6:nhap vao chuoi khac noi voi chuoi ban dau");
		printf("\n7:thoat");
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
			sum(a,b);
		}       
		if(choice==5){
			fflush(stdin);
			max(a);
		}
		if(choice==6){
			fflush(stdin);
			newstring(a,b);
		}
		if(choice==7){
			printf("thoat chuong trinh !");
		}
	}while(choice!=7);
	exit(0);
}