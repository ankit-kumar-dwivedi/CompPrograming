/*Made by: Ankit Dwivedi
  February challange 2019 */
#define TEN9 1000000000
#include <iostream>
#include <thread> 
#include <cstdio>
#include <cstdlib> 

using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{	
		long long result,x_plus_y,X_plus_Y,xX,yY,x,y,ymid,X,Y,eq2,eq3;
		//bool xyorigin = false;
		cout << "Q" <<" " << 0 << " " << 0 <<endl ;			//QUERY 1
		//fflush ( stdout );/* this line */
		cin >> x_plus_y;
		//if(x_plus_y == 0) xyorigin =true;
		cout << "Q" <<" " << 1000000000 << " " << 0 <<endl ;			//QUERY 2
	//	fflush ( stdout );/* this line */
		cin >> eq2;
		eq2 = eq2 - 1000000000;	//can be y - X
		cout << "Q" <<" " << 0 <<" " << 1000000000 <<endl;			//QUERY 3
	//	fflush ( stdout );/* this line */
		cin >> eq3;		
		eq3 = eq3 - 1000000000;	// x - Y
		cout << "Q" << " " << TEN9 << " " << TEN9 <<endl ;			//QUERY 4
	//	fflush ( stdout );/* this line */
		cin >> X_plus_Y;
		X_plus_Y = 2*1000000000 - X_plus_Y;
		if(x_plus_y != 0)
		{
			
			
				// we have X - y and Y - x
				xX = (x_plus_y - eq2);
				yY = (x_plus_y - eq3);
				 
			/*
			else if( eq2 - eq3 == X_plus_Y - x_plus_y)
			{
				// we have X - y and  x - Y
				yY = (X_plus_Y - eq2);
				xX = (X_plus_Y + eq3);
			}
			else
			{
				// we have y - X and Y - x
				yY = (X_plus_Y + eq2);
				xX = (X_plus_Y - eq3);
			}*/
			ymid = yY/2;
			cout << "Q" << " " << 0 <<" " <<ymid <<endl;				//QUERY 5
		//	fflush ( stdout ); this line */
			cin >> x;
			y = x_plus_y - x;
			Y =	x - eq3;
			X = y - eq2;
			cout << "A "<< x <<" "<< y << " " << X << " "<< Y <<endl ;
		//	fflush ( stdout );/* this line */
			cin>> result;
		//	fflush ( stdout );/* this line */

		}
		else
		{
			
			X = abs(eq2);
			Y = abs(eq3);
			x = 0;
			y = 0;
			cout << "A "<< x <<" "<< y << " " << X << " "<< Y <<endl ;
		//	fflush ( stdout );/* this line */
			cin>> result;
		//	fflush ( stdout );/* this line */
			
		}
	}
	return 0;
}