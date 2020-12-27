#include<iostream>
#include<stdlib.h>

using namespace std;

int arr[5]={7,9,2,6,81};
int left,right,mid;
int data;

int binary_Search(int arr[],int left,int right,int x){
    int mid=(left+right)/2;

    //while(left>right)

    while(left<=right){
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
        mid=(left+right)/2;
        
    }
    return 1;

}

int main(){
    cout<<"enter element u want to search ";
    cin>>data;
    int o=binary_Search(arr,0,4,data);
    if(o==1){
        cout<<"the element not found "<<endl;

    }
    else
    {
        cout<<"element found at index "<<o;
    }
    
}