#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// for individual arithmatic
int mean(int arr[],int n){
    int sum=0;
    for (int  i = 0; i < n; i++)
    {  
        sum+=arr[i];

    }
    int mean=sum/n;
    return mean;
    
}
// for discrete arithmatic direct method
int discmean(int arr[], int fre[],int n){
    int fsum=0,fxsm=0;
    int mean=0;
    int fx[1000];
    for(int i=0;i<n;i++){
       fsum+=fre[i];
       fx[i]=arr[i]*fre[i];}

    for(int i=0;i<n;i++){
        fxsm+=fx[i];}
        
    for(int i=0;i<n;i++){
        mean=fxsm/fsum;
}    

printf("%d,%d",fxsm,fsum);

return mean;
}

// discrete mean using shortcut method  
int sdiscmean(int a,int arr[],int fre[],int n){
int d[100];
int fd[100];
int mean=0;
int fsum=0;
int fdsum=0;
for(int i=0;i<n;i++){
d[i]=arr[i]-a;
fsum+=fre[i];
}
for(int i=0;i<n;i++){
fd[i]=fre[i]*d[i];

}
for(int i=0;i<n;i++){
fdsum+=fd[i];

}

mean=a+(fdsum/fsum);
return mean;



}


//  arithmatic mean for continues series
float conmean(int arr[],int fre[],int n){
    int fx[100];
    int fsum=0;
    int fxsum=0;
    for(int i=0;i<n;i++){
        fsum+=fre[i];
        fx[i]=arr[i]*fre[i];

}  

for(int i=0;i<n;i++){
fxsum+=fx[i];

}
float mean=fxsum/fsum;
return mean;
} 


// #arithmatic mean for continues series strip deviation method

int  stripconmean(){

}


int main(){
int arr[100];
int n=5;
int fre[100]={5,15,25,30,25};
int a;

for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
srand(time(NULL));

int ri=rand()%n;
a=arr[ri];

printf("%f",conmean(arr,fre,n));

}


