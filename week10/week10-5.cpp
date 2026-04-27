///week10-5.cpp泡泡排序法 完整版
///修該自week10-3.cpp 泡泡排序法 希望大到小排好
///(1)陣列宣告(2) for迴圈印陣列 (3)減1的迴圈,做交換(4)for迴圈印陣列
#include<stdio.h>
int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};

    for(int i-0;i<10;i++){
        printf("%d", a[i]);
    }
    printf("\n");

    for(int k=0;k<20;k++){
        for(int i=0;i<10-1;i++){
            if(a[i]<a[i+1]);
                int temp = a[i];
                a[i] = a[i+1];
                a[i+] = temp;
            }
        }
        for(int i=0;i<10;i++){
            printf("%d",a[i]);
        }
        printf("\n");
    }///week10-5.cpp 只加這行
}
