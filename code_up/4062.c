#include <stdio.h>

int uc(int a,int b){
  while(b){
    int tmp=b;
    b=a%b;
    a=tmp;
  }
  return a;
}

int lcm(int a,int b){
  int sum=1;
  while(b){
    sum *= a*b;
  }
  return sum;
}

int main(){
  int n, gcd, lcm1;
  scanf("%d",&n);
  
  int arr[n];
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  
  for(int i=1;i<n;i++){
    gcd=uc(arr[i-1],arr[i]);
    lcm1=lcm(arr[i-1],arr[i]);
  }
  printf("%d\n%d",gcd,lcm1/gcd);
  return 0;
}
