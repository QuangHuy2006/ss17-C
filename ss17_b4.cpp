#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
void arr(int *a, int n){
	printf("nhap vao gia tri cac phan tu:");
	for(int i=0;i<n;i++){
		scanf("%d", &*(a+i));
	}
}
void print(int *a,int n){
	for(int i=0;i<n;i++){
		if(*(a+i)%2==0){
		printf("%d ", a[i]);
		}
	}
}
void snt(int *a, int n){
	for(int j=0;j<n;j++){
	int cnt=0;
		for(int i=1;i<=a[j];i++){	
			if(a[j]%i==0) {
				cnt++;
			}
		}
		if(cnt==2){
		printf("%d ", a[j]);
		}
	}
}
void sum(int *a,int n){
	for(int i=0;i<n/2;i++){
		std::swap(a[i], a[n-i-1]);
	}
		for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
void arrangeincrease(int *a,int n){
	for(int i=0;i<n;i++){
		int minpos=i;
		for(int j=i+1;j<n;j++){
			if(a[minpos]<a[j]){
				minpos=j;
			}
		}
		std::swap(a[i],a[minpos]);
	}
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
void arrangedecrease(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
			std::swap(a[j], a[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
void found(int *a, int n){
	int pos;
	int x;
	int find=0;
	printf("nhap phan tu ban muon tim kiem");
	scanf("%d", &x);
	for(int i=0;i<n;i++){
		if(a[i]==x){
			pos=i;
			++find;
		}
	}
	if(find){
		printf("phan tu %d nam o vi tri %d", x, pos+1);
		printf("\nFOUND!");
	}else{
		printf("khong tim thay phan tu %d trong mang", x);
		printf("\nNOT FOUND!");
	}
}
int main(){
	int choice;
	int a[100];
	int b[100];
	int n;
	int i;
	do{
		printf("\n\n1:nhap vao so phan tu va gia tri cac phan tu");
		printf("\n2:in ra cac phan tu la so chan");
		printf("\n3:in ra cac phan tu la so nguyen to");
		printf("\n4:dao nguoc mang");
		printf("\n5:sap xep mang");
		printf("\n6:nhap vao mot phan tu va tim kiem phan tu trong mang");
		printf("\n7:thoat");
		printf("\nnhap lua chon cua ban:");
		scanf("%d", &choice);
		if(choice==1){
			printf("nhap so phan tu trong mang:");
			scanf("%d", &n);
			arr(a,n);
		}
		if(choice==2){
			print(a,n);
		}
		if(choice==3){
			printf("so nguyen to trong mang la :");
			snt(a,n);
		}
		if(choice==4){
			sum(a,n);
		}       
		if(choice==5){
			int choice2;
			printf("\n1:tang dan");
			printf("\n2:giam dan\n");
			scanf("%d", &choice2);
			if(choice2==1){
			arrangeincrease(a,n);
			}
			if(choice2==2){
			arrangedecrease(a,n);
			}
		}
		if(choice==6){
			found(a,n);
		}
		if(choice==7){
			printf("thoat chuong trinh !");
		}
	}while(choice!=7);
	exit(0);
}