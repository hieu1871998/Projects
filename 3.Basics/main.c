#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	printf("\nBai 1: Demo tinh luong NET:");
	DemoTinhLuong();
	printf("\n__________\nBai 2: Tinh luong NET:");
	TinhLuong();
	printf("\n__________\nBai 3: Giai phuong trinh bac 2 mot an:");
	cal();
	return 0;
}

int DemoTinhLuong()	//Bai 1
{
	int luongCoBan, thuong1, thuong2, thuongKhac, tax1, tax2, luongNet;
	luongCoBan = 1000;
	thuong1 = 20;
	thuong2 = 250;
	thuongKhac = 450;
	tax1 = 15;
	tax2 = 10;
	luongNet = (luongCoBan + luongCoBan/100*thuong1 + thuong2 + thuongKhac) - (luongCoBan/100*tax1 + luongCoBan/100*tax2);
	printf("\nLuong co ban: %d", luongCoBan);
	printf("\nThuong 1: %d%%", thuong1);
	printf("\nThuong 2: %d", thuong2);
	printf("\nThuong khac: %d", thuongKhac);
	printf("\nThue 1: %d%%", tax1);
	printf("\nThue 2: %d%%", tax2);
	printf("\nLuong NET = (Luong co ban + Thuong 1 + Thuong 2 + Khac) - (Thue 1 + Thue 2) = %d", luongNet);
}

int TinhLuong()	//Bai 2
{
	int luongCoBan, thuong1, thuong2, thuongKhac, tax1, tax2, luongNet;
	printf("\nNhap luong co ban: ");scanf("%d",&luongCoBan);
	printf("\nNhap %% thuong 1: ");scanf("%d",&thuong1);printf("%d%%",thuong1);
	printf("\nNhap thuong 2: ");scanf("%d",&thuong2);
	printf("\nNhap thuong khac: ");scanf("%d",&thuongKhac);
	printf("\nNhap %% thue 1: ");scanf("%d",&tax1);printf("%d%%",tax1);
	printf("\nNhap %% thue 2: ");scanf("%d",&tax2);printf("%d%%",tax2);
	luongNet = (luongCoBan + luongCoBan/100*thuong1 + thuong2 + thuongKhac) - (luongCoBan/100*tax1 + luongCoBan/100*tax2);
	printf("\nLuong NET: %d", luongNet);
}

int cal()	//Bai 3
{
	float a, b, c;
	float d,x1,x2;
	/*do
	{
		printf("\nNhap a: ");scanf("%f",&a);
		if(a == 0)
		{
			printf("\na = %.f, vui long nhap lai a",a);
		}
	}
	while(a == 0);*/
	printf("\nNhap a: ");scanf("%f",&a);
	if (a == 0)
	{
		printf("\na = %.f, vui long nhap lai a",a);
		cal();
	}
	printf("\nNhap b: ");scanf("%f",&b);
	printf("\nNhap c: ");scanf("%f",&c);
	d = b * b - 4 * a * c;
	if(d < 0)
	{
		printf("\nPhuong trinh vo nghiem (d = %.2f < 0)",d);
	}
	else if(d == 0)
	{
		x1 = -b / (2 * a);
		printf("\nPhuong trinh co nghiem kep: x = %.2f",x1);
	}
	else
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("\nPhuong trinh co hai nghiem: \nx1 = %.2f \nx2 = %.2f",x1,x2);
	}
}
