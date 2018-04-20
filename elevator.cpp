#include<iostream>  
#include <fstream>  
using namespace std;
class Elevator {
public:
	int destination; //目的地
	int currentFloor; //当前位置
	Elevator()
	{
		destination = 0;
		currentFloor = 0;
	}
	int getdestination()
	{
		return destination;
	}
	int getcurrentFloor()
	{
		return currentFloor;
	}
	void setdestination(int d)
	{
		destination = d;
	}
	void setcurrentFloor(int c)
	{
		currentFloor = c;
	}
	int	time(int d, int b, int t)
	{

		if (d < b)
			t += b - d;
		else
			t += d - b;
		cout << t << " " << b << endl;
		return t;
	}
	int time2(int c, int b, int t)
	{
		if (b > c)
			t += b - c;
		else
			t += c - b;
		cout << t << " " << c << endl;
		return t;
	}
};
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	

	int n, i, a, b, c, d, f, t = 0;
	cin >> n;
	Elevator e;
	for (i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		if (a > t)
			t = a;
		d = e.getcurrentFloor();
		if (d != b)
		{
			f = e.time(d, b, t);
			t = f + 1;
			e.setcurrentFloor(b);
		}
		e.setdestination(c);
		f = e.time2(c, b, t);
		t = f + 1;
		e.setcurrentFloor(c);
	}
	return 0;
}
