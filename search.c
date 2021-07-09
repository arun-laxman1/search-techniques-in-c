#include"arrays.h"

int binary_search(myarray *p,int l,int r,int key)
{
	int mid;
	while(l<=r)
	{
		mid=l+r/2;
		if(p->array[mid]==key)
		return mid;
	else if(p->array[mid]>key)
		r=mid-1;
	else if(p->array[mid]<key)
		l=mid+1;	
	}
	return -1;	
}

int linear_search(myarray *p,int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(p->array[i]==key)
			return i;
	}
	return -1;
}


int main()
{
	myarray d;
	create(&d);
	
	printf("THE ARRAY ELEMENTS ARE:\n");
	display(&d);
	
	printf("\nLINEAR SEARCHING FOR ELEMENT 7!");
	int c=linear_search(&d,d.size,7);
	
	if(c)
	{
		printf("\nTHE ELEMENT IS FOUND AT INDEX %d",c);
	}
	else if(c==-1)
	{
		printf("\nTHE ELEMENT IS NOT FOUND");
	}
	return 1;
}
