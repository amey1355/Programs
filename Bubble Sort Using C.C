#include<stdio.h>

int main()
{
int arr[100], i, j, n, temp,flag=0;
clrscr();
printf("Enter the number of elements to be sorted: ");
scanf("%d", &n);

for(i=0; i<n; i++)
{
printf("Enter element no. %d: ", i+1);
scanf("%d", &arr[i]);
}
for(i=0; i<n; i++)
{
for(j=0; j<n-i-1; j++)
{
if(arr[j]>arr[j+1])
{
temp= arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
flag=1;
}
}
if(flag==0)
{
break;
}
}
printf("Sorted Array: ");
for(i=0; i<n; i++)
{
printf("%d", arr[i]);
}
return 0;
}
