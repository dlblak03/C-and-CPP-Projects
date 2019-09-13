/*
Written by: Dalton Blake 
Lab #2
Lab Section 02 (Thursday Section)
January 15, 2019
In this program I made a currency conversion table between six
different countries. (USA, JPY, GDP, CHF, CAD, and AUD)
*/

#include <stdio.h>

int main()
{
	float iamount = 0;
	printf("\nPlease enter the amount of money: ");
	scanf("%f", &iamount);
	
	printf("\n\tUSD\t\tJPY\t\tGDP\t\tCHF\t\tCAD\t\tAUD");
	
	const float iusd = 1;
	const float iusdtojpy = 108.44;
	const float iusdtogdp = 0.78;
	const float iusdtochf = 0.99;
	const float iusdtocad = 1.33;
	const float iusdtoaud = 1.39;
	
	printf("\nUSD\t%.2fUSD \t", iamount * iusd);
	printf("%.2fJPY \t", iamount * iusdtojpy);
	printf("%.2fGDP \t", iamount * iusdtogdp);
	printf("%.2fCHF \t", iamount * iusdtochf);
	printf("%.2fCAD \t", iamount * iusdtocad);
	printf("%.2fAUD \t", iamount * iusdtoaud);
	
	// END OF ROW 1
	
	const float ijpy = 1;
	const float ijpytousd = 0.0092;
	const float ijpytogdp = 0.0072;
	const float ijpytochf = 0.0091;
	const float ijpytocad = 0.012;
	const float ijpytoaud = 0.013;
	
	printf("\nJPY\t%.2fUSD \t", iamount * ijpytousd);
	printf("%.2fJPY \t", iamount * ijpy);
	printf("%.2fGDP \t", iamount * ijpytogdp);
	printf("%.2fCHF \t", iamount * ijpytochf);
	printf("%.2fCAD \t", iamount * ijpytocad);
	printf("%.2fAUD \t", iamount * ijpytoaud);
	
	//END OF ROW 2
	
	const float igdp = 1;
	const float igdptousd = 1.28;
	const float igdptojpy = 139.09;
	const float igdptochf = 1.26;
	const float igdptocad = 1.70;
	const float igdptoaud = 1.78;
	
	printf("\nGDP\t%.2fUSD \t", iamount * igdptousd);
	printf("%.2fJPY \t", iamount * igdptojpy);
	printf("%.2fGDP \t", iamount * igdp);
	printf("%.2fCHF \t", iamount * igdptochf);
	printf("%.2fCAD \t", iamount * igdptocad);
	printf("%.2fAUD \t", iamount * igdptoaud);
	
	//END OF ROW 3
	
	const float ichf = 1;
	const float ichftousd = 1.02;
	const float ichftojpy = 110.04;
	const float ichftogdp = 0.79;
	const float ichftocad = 1.35;
	const float ichftoaud = 1.41;
	
	printf("\nCHF\t%.2fUSD \t", iamount * ichftousd);
	printf("%.2fJPY \t", iamount * ichftojpy);
	printf("%.2fGDP \t", iamount * ichftogdp);
	printf("%.2fCHF \t", iamount * ichf);
	printf("%.2fCAD \t", iamount * ichftocad);
	printf("%.2fAUD \t", iamount * ichftoaud);
	
	//END OF ROW 4
	
	const float icad = 1;
	const float icadtousd = 0.76;
	const float icadtojpy = 81.95;
	const float icadtogdp = 0.59;
	const float icadtochf = 0.74;
	const float icadtoaud = 1.05;
	
	printf("\nCAD\t%.2fUSD \t", iamount * icadtousd);
	printf("%.2fJPY \t", iamount * icadtojpy);
	printf("%.2fGDP \t", iamount * icadtogdp);
	printf("%.2fCHF \t", iamount * icadtochf);
	printf("%.2fCAD \t", iamount * icad);
	printf("%.2fAUD \t", iamount * icadtoaud);
	
	//END OF ROW 5
	
	const float iaud = 1;
	const float iaudtousd = 0.72;
	const float iaudtojpy = 78.15;
	const float iaudtogdp = 0.56;
	const float iaudtochf = 0.71;
	const float iaudtocad = 0.95;
	
	printf("\nAUD\t%.2fUSD \t", iamount * iaudtousd);
	printf("%.2fJPY \t", iamount * iaudtojpy);
	printf("%.2fGDP \t", iamount * iaudtogdp);
	printf("%.2fCHF \t", iamount * iaudtochf);
	printf("%.2fCAD \t", iamount * iaudtocad);
	printf("%.2fAUD \t", iamount * iaud);
	
	//END OF ROW 6
		
	return 0;
}
