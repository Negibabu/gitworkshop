#include<stdio.h>
void insert(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
}

void sort(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(array[j]>array[j+1])
			{
				int tmp=array[j];
				array[j]=array[j+1];
				array[j+1]=tmp;
			}
		}
	}
}

int main()
{
	int array[1000];
	int size;
	scanf("%d",&size);
	insert(array,size);
	sort(array,size);
	for(int i=0;i<size;i++)
		printf("%d\n",array[i]);
	return 0;
}

