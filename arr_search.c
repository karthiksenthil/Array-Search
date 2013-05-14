#include<stdio.h>
int arr[50];
void sort_arr(int num);
int binary_search(int num,int element);
int main()
{
     int n;   //no. of elements of array//
     int i;
     scanf("%d",&n);
     
     for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
       
     sort_arr(n);
     //printing the sorted array//
     for(i=0;i<n;i++)
       printf("%d ",arr[i]);
     printf("\n");
     int item;   //item to be searched//
     scanf("%d",&item);
     
     int pos=binary_search(n,item);
     
     if(pos==-1)
       printf("\nElement not found in the array.\n");
       
     else
       printf("\nElement found at position %d \n",pos+1);
         
    
     
     
     system("pause");   
     return 0;
}

void sort_arr(int num)
{
     int i,j,temp=0;
     
     for(i=0;i<num;i++)
     {
          for(j=0;j<(num-1)-i;j++)
             {
                   if(arr[j+1]<arr[j])
                     {
                            temp=arr[j+1];
                            arr[j+1]=arr[j];
                            arr[j]=temp;
                     }
             }
     }
}

int binary_search(int num,int element)
{
    int beg=0,end=num-1;
    int mid=0;
    
    while(beg<=end)
    {
       mid=(beg+end)/2;
       
       if(arr[mid]==element)
          return mid;
          
       else if(arr[mid]<element)
         {
             beg=mid+1;
         }
         
       else
           end=mid-1;
           
    }
    
    return -1;
    
}
     
