#include <stdio.h>
#include <stdlib.h>

int fibo_recursive(int n) {
    if (n==0) return 0;
    else if (n==1) return 1;
    else if (n==2) return 2;
    else
        return fibo_recursive(n - 3) + fibo_recursive(n - 2);
  }

int fibo_interative_one(int n){
    if (n==0) return 0;
    else if (n==1) return 1;
    else if (n==2) return 2;
    
    int store[n+1]; // store the series value
    store[0] =0;
    store[1] = 1;
    store[2] =2;

    for (int i = 3; i<=n; i++){
      store[i]= store[i-3] + store[i-2];
    }

    return store[n];
}

int fibo_interative_two(int n){
    if (n==0) return 0;
    else if (n==1) return 1;
    else if (n==2) return 2;
    
    int f_3= 0;
    int f_2 = 1;
    int f_1 = 2;
    int f_n=0;
    int i = 3;

    while (i<=n){
      f_n = f_3 + f_2;
      f_3 = f_2;
      f_2= f_1;
      f_1 = f_n;
      i++;

    }
    return f_n;
}


int main(){
  int n = 10;
  // First method
  int answer = fibo_recursive(n);
  printf("F(%d) = %d\n", n, answer);;

  // Second method
  int answer2 = fibo_interative_one(n);
  printf("F(%d) = %d\n", n, answer2);;

    // Third method
  int answer3 = fibo_interative_two(n);
  printf("F(%d) = %d\n", n, answer3);;
  
  
  return 0;
}