#pragma once
int reverse_number(int n1) {
	int reversed_n = 0;
	while (n1 != 0) //getting the degree of ten to multiply the lastest digit with it
	{
		reversed_n += n1 % 10;
		reversed_n *= 10;
		n1 /= 10;
	}
	reversed_n /= 10;
	return reversed_n;
}