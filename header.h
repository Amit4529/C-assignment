int factorial(int n);
int evenodd(int l);
int prime(int a);

int evenodd(int l){
    if(l%2==0){
        return 0;
    }
    return 1;
}

int prime(int a){
    int b=1;
    if(a==1 || a==0){
        b=0;
    }
    for(int i =2;i<=a/2;i++){ 
        if(a%i==0){
            b=0;
            break; 
        }
    }     
    return b;
}

int factorial(int n){
    int prod=1;
    for (int i =1;i<=n;i++){
        prod*=i;
    }
    return prod;
}
