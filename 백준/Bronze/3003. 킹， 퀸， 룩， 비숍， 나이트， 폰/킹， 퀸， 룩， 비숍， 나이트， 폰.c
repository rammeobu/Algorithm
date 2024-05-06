#include <stdio.h>
#include<string.h>
int main() {
	int A ,B ,C , D, E, F ;
	int temp;
	int kin = 1, que = 1, rook = 2,bes = 2, night= 2, phon = 8;
	scanf("%d %d %d %d %d %d", &A, &B,&C,&D,&E,&F);
	if (A !=kin) {
		temp = kin - A;
		A = temp;
	}
	else
	{
		A = 0;
	}
	if (B != que) {
		temp = que - B;
		B = temp;
	}
	else
	{
		B = 0;
	}
	if (C != rook) {
		temp = rook - C;
		C = temp;
	}
	else {
		C = 0;
	}
	if (D != bes) {
		temp = bes - D;
		D = temp;
	}
	else {
		D =0;
	}
	if (E != night) {
		temp = night - E;
		E = temp;
	}
	else {
		E =0;
	}
	if (F != phon) {
		temp = phon - F;
		F = temp;
	}
	else {
		F =0;
	}
	printf("%d %d %d %d %d %d", A, B, C,D, E, F);

}
