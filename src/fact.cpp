#include<iostream>

using namespace std;

long long fact(long long num,long long idx=1)
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
	long long a = stoi(args[1],NULL,10);
	cout << fact(a) << endl;
	return 0;
}
