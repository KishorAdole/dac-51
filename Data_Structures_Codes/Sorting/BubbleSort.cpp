#include<iostream>
#include<stdlib.h>

using namespace std;

int arr[]={10,5,53,22};
int i,j;
int temp;

int main(){

    for(int i=0;i<=4;i++){
        for(int j=0;j<4-1-i;j++){
            if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]= arr[j+1];
               arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<4;i++){
        cout<<" "<<arr[i];
    }

}