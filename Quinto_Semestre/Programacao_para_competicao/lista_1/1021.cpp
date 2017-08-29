#include <bits/stdc++.h>

using namespace std;

int main (){

	double n;
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;
	int m100 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1 = 0;

	scanf("%lf", &n);

	n100 = n/100;
	n50 = (n - n100*100)/50;
	n20 = (n - n100*100 - n50*50)/20;
	n10 = (n - n100*100 - n50*50 - n20*20)/10;
	n5 = (n - n100*100 - n50*50 - n20*20 - n10*10)/5;
	n2 = (n - n100*100 - n50*50 - n20*20 - n10*10 - n5*5)/2;

	m100 = (n - n100*100 - n50*50 - n20*20 - n10*10 - n5*5);
	m50 = ((n - n100*100 - n50*50 - n20*20 - n10*10 - n5*5)*100 - m100*100)/50;
	m25 = (((n - n100*100 - n50*50 - n20*20 - n10*10 - n5*5)*100 - m100*100) - m50*50)/25;
	m10 = ((((n - n100*100 - n50*50 - n20*20 - n10*10 - n5*5)*100 - m100*100) - m50*50) - m25*25)/10;
	m5 = (((((n - n100*100 - n50*50 - n20*20 - n10*10 - n5*5)*100 - m100*100) - m50*50) - m25*25) - m10*10)/5;
	m1 = (((((n - n100*100 - n50*50 - n20*20 - n10*10 - n5*5)*100 - m100*100 - m50*50) - m25*25) - m10*10) - m5*5);

	cout << "NOTAS:"<< endl;

	cout << n100 << " nota(s) de R$ 100.00" << endl;
	cout << n50 << " nota(s) de R$ 50.00" << endl;
	cout << n20 << " nota(s) de R$ 20.00" << endl;
	cout << n10 << " nota(s) de R$ 10.00" << endl;
	cout << n5 << " nota(s) de R$ 5.00" << endl;
	cout << n2 << " nota(s) de R$ 2.00" << endl;

	cout << "MOEDAS:"<< endl;

	cout << m100 << " moeda(s) de R$ 1.00" << endl;
	cout << m50 << " moeda(s) de R$ 0.50" << endl;
	cout << m25 << " moeda(s) de R$ 0.25" << endl;
	cout << m10 << " moeda(s) de R$ 0.10" << endl;
	cout << m5 << " moeda(s) de R$ 0.05" << endl;
	cout << m1 << " moeda(s) de R$ 0.01" << endl;


	return 0;
}