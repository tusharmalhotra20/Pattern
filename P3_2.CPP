/*Print the following pattern*/


			/*	
				*****
				****
				***
				**
				*
					 */


#include<iostream.h>
#include<conio.h>
void main()
{
	int i, j ;
	clrscr() ;

	for(i=5; i>=1; i--)
	{
		for(j=i ; j>=1; j--)
		{
			cout<<"*" ;
		}
		cout<<endl ;
	}
	getch() ;
}