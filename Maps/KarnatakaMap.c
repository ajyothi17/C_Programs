# include <stdio.h>

int main(void)
{
    int i;
	int a;
	int b = 0; 
	int c = '*';

    for ( ;(a = "D LC\"KA$K?(I=(K<(L33J.7K);L)<K);L'<M(:N':O(9O(5S(7Q)""6Q*:L+;J+6O,=G,?E-AB-BA.;G/7J15J31L60J8,L<'Mp"[b]); )
	{
        for (i = a; i > ' '; i--)
			putchar (b % 3 == 1 ? c - 10: c);

		((b++ % 3) == 2) ? putchar (c - ' ') : (2 & 1);
    }

    putchar (c - ' ');

    return 0;
}
