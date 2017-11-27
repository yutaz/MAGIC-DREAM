#include<Windows.h>

#include<iostream>
#include<conio.h>

#include<xnamath.h>

using namespace std;

ostream &operator << (ostream &os, CXMMATRIX m)
{
	for (int i = 0; i < 4; ++i)
	{
		for(int j = 0;j < 4;++j)
		{
			os << m(i, j) << "\t";
		}
		os << endl;
	}
	return os;
}

int main(void)
{
	XMMATRIX A(1.f, 0.f, 0.f, 0.f,
				0.f, 2.f, 0.f, 0.f,
				0.f, 0.f, 4.f, 0.f,
				1.f, 2.f, 3.f, 0.f );

	XMMATRIX B = XMMatrixIdentity();

	XMMATRIX C = A*B;

	XMMATRIX D = XMMatrixTranspose(A);//A‚Ì“]’u

	XMVECTOR det = XMMatrixDeterminant(A);//A‚Ìs—ñŽ®

	XMMATRIX E = XMMatrixInverse(&det, A);//A‚Ì‹ts—ñ

	XMMATRIX F = A * E;

	cout << "A = " << endl << A << endl;
	cout << "B = " << endl << B << endl;
	cout << "C = AB = " << endl << C << endl;
	cout << "D = transpose(A) = " << endl << D << endl;
	cout << "det = determinant(A) = " << XMVectorGetX(det) << endl;
	cout << "E = inverse(A) = " << endl << E << endl;
	cout << "F = A * F = " << endl << F << endl;

	_getch();
	return 0;
}