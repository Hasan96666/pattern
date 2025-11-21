/*
Enter odd Number :1
     *
    ***
   *****
  *******
 *********
***********
     *
     *
     *
     *
     *
     
Input Value :3
      *
     ***
    *****
   *******
  *********
 ***********
*************
     ***
     ***
     ***
     ***
     ***            */

#include<stdio.h>
int main()
{
    while(1){
        int n;
    printf("Enter odd Number :");
    scanf("%d",&n);
    if(n%2!=0){
        int temp;
    for(int i=1; ;i+=2){
            temp=i/2;
        if(i>10 && (n==i%10)){
            break;
        }

    }
    int copyTemp=temp;
    //printf("temp=%d\n",temp);

    for(int i=1; ;i+=2){
        for(int j=temp;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        temp=temp-1;
        printf("\n");
        if(i>10 && (n==i%10)){
            break;
        }
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf(" ");
        }
        for(int k=1;k<=n;k++){
            printf("*");
        }
        printf("\n");
      }
    }else{
        printf("Wrong!!!!");
    }

    }

    return 0;
}

