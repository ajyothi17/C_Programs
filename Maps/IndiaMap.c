# include <stdio.h>

int main(void)
{
    int i;
	int a;
	int b = 0; 
	int c = '*';

	for ( ;(a = "P 8 24)]7 7+X  72Q  90Q  90Q  72Q  8.T8 8.8 <:.J (:*A 5:+R #9/R  72Q  62B')25?,(19=,',@7.)+G2*,,J 6.-Q!.-.P\"--'X(',&Y&&/*T($0(X(\"0*T<  +P?  1GB  /GD  2DD  2DD  2BF  2@H  2?I  3?H  4;K  4:L  57N  64P  91P  92O  :1O  ;/P  ;/P  ;/P  =+R  =)T  >'U  ?%V  @#W  z"[b]); ) 
	{
        for (i = a; i > ' '; i--)
			putchar (((b % 5 == 1) || (b % 5 == 3)) ? c - 10: c);
        
		(b++ % 5 == 4) ? putchar (c - ' ') : (2 & 1);
    }

    putchar (c - ' ');

    return 0;
}