#include<iostream>

using namespace std;

int fact(int num,int idx=1)
{
	if(num==1)
	{
		return idx;
	}
	else
	{
		return fact(num-1,idx*num);
	}
}

int main(int n,char *args[])
{
	int a = stoi(args[1],NULL,10);
	cout << fact(a) << endl;
	return 0;
}
