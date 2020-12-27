#include<iostream>
#include<stdlib.h>

using namespace std;
void bubbleSort();
#define size 4

int arr[size];
int data,i,j;


int main(){
    
    cout<<endl<<"enter the data in array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    bubbleSort();

    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }

}

void bubbleSort(){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){

            if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]= arr[j+1];
               arr[j+1]=temp;
            }
            
        }
    }
}
