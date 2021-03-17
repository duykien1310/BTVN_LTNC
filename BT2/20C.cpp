#include<iostream>
using namespace std;

int main()
{
	int thoigian, luong;
	if(thoigian <= 100)
	{
		luong = thoigian * 12000;
	}
	if(thoigian > 100 && thoigian <= 150)
	{
		luong = 100 * 12000 + (thoigian - 100)*16000;
	}
	if(thoigian > 150 && thoigian <= 200)
	{
		luong = 100 * 12000 + 50*16000 + (thoigian - 150)*20000;
	}
	if(thoigian > 200)
	{
		luong = thoigian * 20000;
	}
	return 0;
}