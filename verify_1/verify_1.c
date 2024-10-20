#include<stdio.h>
void four_1(unsigned short x,unsigned short y);
void four_2(short x, short y);
void four_3(short a, short b);
void four_4(short x, short y, short z, short w);
int main()

{
	four_1(015,0x2b);
	four_2(10, 5);
	four_3(5, 3);
	four_4(24, 3, 0, 1);
	return 0;
}

void four_1(unsigned short x,unsigned short y)
{
	
	unsigned short a1, a2, a3, a4, a5, a6, tx, ty;
	tx = x;
	ty = y;
	a1 = x | y;
	a2 = x ^ y;
	a3 = x & y;
	a4 = ~x + ~y;
	a5 = tx <<= 3;
	a6 = ty >>= 4;

	printf("%hx,%hx,%hx,%hx,%hx,%hx\n",a1,a2,a3,a4,a5,a6);
	
	
	
}
void four_2(short i, short j)
{
	short a1, a2, a3, a4, a5, a6, ti1, tj1, ti2, tj2, ti3, tj3;

	ti1 = ti2 = ti3 = i;
	tj1=tj2=tj3 = j;
	a1 = ++ti1 - tj1--;
	a2 = (ti2 = ti2 *= tj2);
	a3 = (ti3 = 3 / 2 * (tj3 = 3 - 2));
	a4 = ~i ^ j;
	a5 = i & j | 1;
	a6 = i + i & 0xff;
	printf("%hd,%hd,%hd,%hd,%hd,%hd\n",a1,a2,a3,a4,a5,a6);
}
void four_3(short a, short b)
{
	short k1, k2, k3, k4, k5, k6, a1, a2, a3, a4, a5, a6, b1, b2, b3, b4, b5, b6;
	a1 = a2 = a3 = a4 = a5 = a6 = a;
	b1 = b2 = b3 = b4 = b5 = b6 = b;
	k1 = !a1 && b1++;
	k2 = a2 || b2 + 4&&a2 * b2;
	k3 = (a3 = 1, b3 = 2, (a3 > b3) ? ++a3 : ++b3);
	k4 = (++b4, a4 = 10, a4 + 5);
	k5 = a5 += b5 %= a5 + b5;
	k6 = a6 != b6 > 2 <= a6 + 1;
	printf("%hd %hd %hd\n", k1, a1, b1);
	printf("%hd %hd %hd\n", k2,a2,b2);
	printf("%hd %hd %hd\n", k3,a3,b3);
	printf("%hd %hd %hd\n", k4,a4,b4);
	printf("%hd %hd %hd\n", k5,a5,b5);
	printf("%hd %hd %hd\n", k6,a6,b6);
}
void four_4(short x, short y, short z, short w)
{
	printf("%hd\n", 3 + 7 % 4 - 1);
	short x1, x2, x3, x4, x5, x6, x7, x8, x9, y1, y2, y3, y4, y5, y6, y7, y8, y9, e1, e2, e3, e4, e5, e6, e7, e8, e9;
	x1 = x2 = x3 = x4 = x5 = x6 = x7 = x8 = x9 = x;
	y1 = y2 = y3 = y4 = y5 = y6 = y7 = y8 = y9 = y;
	e1 = x1++ / --y1;
	e2 = x2 & y2;
	e3 = x3 && y3;
	e4 = x4 | y4;
	e5 = x5 || y5;
	e6 = x6 >>= y6 - 1;
	e7 = y7 <<= 3;
	e8 = x8 ^ y8;
	e9 = ~x9 + ~y9;
	printf("%hd %hd %hd\n",e1,x1,y1);
	printf("%hd %hd %hd\n",e2,x2,y2);
	printf("%hd %hd %hd\n",e3,x3,y3);
	printf("%hd %hd %hd\n",e4,x4,y4);
	printf("%hd %hd %hd\n",e5,x5,y5);
	printf("%hd %hd %hd\n",e6,x6,y6);
	printf("%hd %hd %hd\n",e7,x7,y7);
	printf("%hd %hd %hd\n",e8,x8,y8);
	printf("%hd %hd %hd\n",e9,x9,y9);
	short z1, z2, z3, z4, z5, w1, w2, w3, w4, w5, q1, q2, q3, q4, q5;
	z1 = z2 = z3 = z4 = z5 = z;
	w1 = w2 = w3 = w4 = w5 = w;
	q1 = z1 != w1 <= 2 < z1;
	q2 =( (z2 = w2) ? z2++: w2--);
	q3 = ((z3 == w3) ? z3++ : w3--);
	q4 = (z4 -= w4 *= z4 + 3);
	q5 = (z5 = 2, w5 = z5 * ++w5);
	printf("%hd %hd %hd\n", q1,z1,w1);
	printf("%hd %hd %hd\n", q2,z2,w2);
	printf("%hd %hd %hd\n",q3,z3,w3 );
	printf("%hd %hd %hd\n", q4,z4,w4);
	printf("%hd %hd %hd\n",q5,z5,w5 );


}