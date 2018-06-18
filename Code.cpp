#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int n, m, c, D, d, h;
	int h = 1, D = 0;
	int cost[10][12];
	int make[12][12];
	cout << "Enter The Number of Months: ";
	cin >> n;
	cout << endl;
	cout << "Enter Machines to be made: ";
	cin >> m;
	cout << endl;
	cout << "Cost of Labour: ";
	cin >> c;
	cout << endl;
	cout << "Total demand: ";
	cin >> D;
	cout << endl;
	int n=1, D=0;
	int cost[10][12];
	int make[12][12];

	int cost = INVENTORY_PLANNING(n, m, c, D, d, h);

}

int INVENTORY_PLANNING(int n, int m, int c, int D, int d,int h)
{
	int U,val;
	for (int s = 0; s <= D; s++)
	{
		f = max((d*n) - s, 0);
		cost[n][s] = c * max(f - m, 0) + h(s + f - (d*n));
		make[n][s] = f;
		U = d*n;
	}
	for (int k = n; k > 0; k--)
	{
		U = U + d*k;
		for (int s = 0; s <= D; s++)
		{
			cost[k][s] = INFINITY;
			for (int f = max(d*k - s); f > 0; f--)
			{
				val = cost[k + 1][s + f - d*k] + c*max(f - m, 0) + h(s + f - d*k);
				if (val < cost[k][s])
				{
					cost[k][s] = val;
					make[k][s] = f;
				}
			}
		}
	}
	cout << cost[1][0];
}