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

int  stripconmean(int a,int arr[],int arr1[],int fre[],int n){
    int fsum=0;
    int d[100];
    int fd[100];
    int fdsum=0;
    int h;
    int x[100];
    for(int i=0;i<n;i++){
        fsum+=fre[i];
        x[i]=(arr[i]+arr1[i])/2;
    
    }

    h=arr1[0]-arr[0];
    // printf("%d",h);


    for(int i=0;i<n;i++){
     d[i]=(x[i]-a)/h;
        // printf("%d",x[i]);


    }
    for(int i=0;i<n;i++){
    fd[i]=fre[i]*d[i];
    }
    for(int i=0;i<n;i++){
        fdsum+=fd[i];
        
        printf("%d\n",d[i]);

    }
int mean=a+(fdsum/fsum*h);
// printf("%d,%d",fdsum,fsum);
return mean;
    
}

// harmonic mean for discreate series
float harmonic(float arr[],float fre[],int n){

    float N=0;
    float fxsum=0;
    float fx[100];

    for(int i=0;i<n;i++){
        N+=fre[i];
        fx[i]=fre[i]/arr[i];
 
    }
    for(int i=0;i<n;i++){
    fxsum+=fx[i];
}
    for(int i=0;i<n;i++){
// printf("%f",fx[i]);

    }
float hmean=N/fxsum;
printf("%f , %f\n",N,fxsum);
return hmean;


}
// geometric mean for discrete series

float geometricmean(float arr[],float fre[],int n){


}


// int main(){
// int arr[100];
// float arr1[]={10,12,14,16,18,20,22};
// int n=7;
// float fre[100]={2,5,8,10,7,4,4};
// int a;

// // for(int i=0;i<n;i++){
// // scanf("%d",&arr[i]);
// // }
// srand(time(NULL));

// int ri=rand()%n;
// a=arr[ri];

// printf("%f",harmonic(arr1,fre,n));

// }


