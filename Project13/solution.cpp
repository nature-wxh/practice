#include "aic++.h"

 void N18Ascii() 
{
	for (char c = 'a'; c <= 'z'; c++) 
	{
		cout << c
			<< ":"
			<< (int)c
			<< endl;
	}
}
 void C3p5()
 {
	 double a, b, c;
	 cin >> a >> b >> c;
	 if (a == 0 && b == 0)
	 {
		 cout << "error";
	 }
	 else if (a == 0)
	 {
		 cout <<"x="
			 <<-c / b;
	 }
	  
	 else {
		 double s = b * b - 4 * a * c;
		 if (s > 0) {
			 double x1 = (-b + sqrt(s)) / (2 * a);
			 double x2 = (-b - sqrt(s)) / (2 * a);
			 cout << "x1:" << x1 << endl;
			 cout << "x2:" << x2 << endl;
		 }
		 if (s == 0) {
			 double x = (-b) / (2 * a);
			 cout << "x:" << x << endl;
		 }
		 else {
			 double x1 = (-b) / (2 * a);
			 double x2 = (sqrt(-s)) / (2 * a);
			 cout << "x1:" << x1 << "+" << x2 << "i" << endl;
			 cout << "x2:" << x1 << "-" << x2 << "i" << endl;
		 }
	 }
	 
 }
 void isPrime()
 {
	 bool prime=true;
	 int num,k;
	 cin >> num;
	 if (num == 1)
	 {				//1不是素数
		 prime = false ;
	 }
	 k= int( sqrt(num));
	 for (int i = 2; i <k; i++)
	 {
		 if (num % i == 0)
		 {
			 prime = false;
			 break;		//能整除则不是素数
			 
		 }
		 
	 }
	 
	 if (prime)
	 {
		 cout << num << "是素数";
	 }
	 else
	 {
		 cout << num << "不是素数";
	 }
 }
 void C3p15()
 {
	 char c;
	 while ((c = getchar()) != '\n')
	 {
		 if (c >= 'a' && c < 'z' || (c >= 'A' && c <= 'Z'))
		 {
			 c = c + 4;
			 if (c > 'Z' && c <= 'Z' + 4 || c > 'z')
				 c = c - 26;
		 }
		 cout << c;
	 }
	 cout << endl;

 }
 void printPrime() {
	 int num[101];
	 for(int i=1;i<101;i++)
	 {
		 num[i] = i;
	 }
	 num[1] = -1;
	 num[2] = 2;
	 num[3] = 3;
	 num[4] = -1;
	    for(int i=5;i<101;i++)
		{
	        for(int j=2;j<=int(sqrt(i));j++)
			{
				if (i % j == 0) 
				{
					num[i] = -1; break;
				}

			}
		
		}
		int count = 0;for(int i=1;i<101;i++)
		{
			if ((num[i]) != -1)
			{
				count++;
				cout << setw(5)
					<< num[i];
					

			}
		}
		cout << endl
		 << "count=" << count;
 
    }
     
	 
 