#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void arr(int *a,int n){
	printf("nhap cac phan tu trong mang: ");
	for(int i=0;i<n;i++){
		scanf("%d", &*(a+i));
	}
}
void print(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d ", *(a+i));
	}
}
void length(int *a, int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		++cnt;
	}
	printf("\nmang co %d phan tu", cnt);
}
void sum(int *a, int n){
	int tong=0;
	for(int i=0;i<n;i++){
	tong +=*(a+i);	
	}
	printf("tong cac phan tu = %d", tong);
}
void max(int *a,int n){
	int max=pow(-10,9);
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("phan tu lon nhat la %d", max);
}
int main(){
	int choice;
	int a[100];
	int n;
	do{
		printf("\n\n1:nhap so phan tu va gia tri cac phan tu");
		printf("\n2:hien thi cac phan tu trong mang");
		printf("\n3:tinh do dai mang");
		printf("\n4:tinh tong cac phan tu co trong mang");
		printf("\n5:hien thi phan tu lon nhat");
		printf("\n6:thoat");
		printf("\nnhap lua chon cua ban:");
		scanf("%d", &choice);
		if(choice==1){
			printf("nhap so phan tu co trong mang: ");
			scanf("%d", &n);
			int count;
			for(int i=0;i<n;i++){
				if(*(a+i)>='0' && *(a+i)<='9'){
					++count;
				}
			}
			if(count>n){
				printf("thua phan tu !");
			}else{
			arr(a,n);
		}
	}
		if(choice==2){
			printf("cac phan tu trong mang la:");
			print(a,n);
		}
		if(choice==3){
			length(a,n);
		}
		if(choice==4){
			sum(a,n);
		}       
		if(choice==5){
			max(a,n);
		}
		if(choice==6){
			printf("thoat chuong trinh !");
		}
	}while(choice!=6);
	exit(0);
}