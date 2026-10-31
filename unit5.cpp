/*#include <iostream>
using namespace std;
int main()
{
	const int size{12}; 
	//数组必须有序 
	int a[size]{1,2,3,4,13,14,17,19,30,40};
	int n=10;
	int x {},idx{};
	cout<<"原来数组的元素为：";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	cout<<"\n请输入要增加的成绩:";
	cin>>x;
	
	for(idx=0;idx<n;idx++)
	if(x<a[idx])
	break;
	
	for(int i=n-1;i>=idx;i--)
	a[i+1]=a[i];
	
	a[idx]=x;
	n++;
	cout<<"插入后数组中的元素为：";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	 
	
	
	
	
	
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
 int arr[5]={1,3,2,5,4};//要变位置就不能加const 

	int start=0;
	int end=sizeof(arr)/sizeof(arr[start])-1;
	while(start<end)
	{int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	
	start++;
	end--;
	}
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
	
	return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
	int arr[9]={4,2,8,0,5,7,1,3,9};
	cout<<"排序前的数组为：";
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	int temp=0;
	for(int i=0;i<8;i++)
{
	
	for(int j=0;j<8-i;j++)
	{
		if(arr[j]>arr[j+1])
    {   temp=arr[j+1];
		arr[j+1]=arr[j];
	    arr[j]=temp;
	}
		else continue;	
	}	
}
		cout<<"\n冒泡排序后的数组为：";
		for(int i=0;i<9;i++)
		{
		cout<<arr[i]<<" ";
		}
	
	return 0;	 
}
	
	
	
	
	
	
	
	
	











