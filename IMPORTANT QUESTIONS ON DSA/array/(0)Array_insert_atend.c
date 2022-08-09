// array insert at end
#include<stdio.h>
void insertatend(int arr[],int size,int x);
void insertatend(int arr[],int n,int x){
    int idx=n-1;
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;   //time O(1) space O(1)
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int size;
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size-1;i++)
        scanf("%d",&arr[i]);
        int x;
        scanf("%d",&x);
        insertatend(arr,size,x);
        for(int i=0;i<size;i++)
        printf("%d",arr[i]);
        printf("\n"
        );
    }
   return 0;
}