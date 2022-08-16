int romanToInt(char * s)
{
    int i = 0;
    while (s[i])
        i++;
    if(!(i >= 1 && i <= 15))
        return 0;
    while(s[i])
    {
        if (!(s[i] == 'I' || s[i] == 'V' || s[i] == 'X' || s[i] == 'L' || s[i] == 'C' || s[i] == 'D' || s[i] == 'M'))
            return 0;
        i++;
             
    }
    int k_ = 0;
    int a_ = 0;
    int c_ = 0;
    int n_ = 0;
    int e_ = 0;
    int g_ = 0;
    int k = 0;
    int m = 0;
    int n = 0;
    int l = 0;
    int e = 0;
    int x = 0;
    int w = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int g = 0;
    int h = 0;
    int f = 0;
    i = 0;
    while (s[i])
    {    
        if (s[i] == 'I')
        {
            if (s[i + 1] && (s[i + 1] == 'V' || s[i + 1] == 'X'))
            {
                k = -1;
                a++;
            }
            else 
            {
                k_ = 1;
                a_++;
            }
                
        
        }
        if (s[i] == 'V')
        {
            m = 5;
            b++;
        }
        if (s[i] == 'X')
        {
            if (s[i + 1] && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            {
                c = -10;
                n++;
            }
            else
            {
                c_ = 10;
                n_++;
            }
        }
        if (s[i] == 'L')
        {
            l = 50;
            d++;
        }
        if (s[i] == 'C')
        {
            if (s[i + 1] && (s[i + 1] == 'D' || s[i + 1] == 'M'))
            {
                e = -100;
                g++;
            }
            else
            {
                e_ = 100;
                g_++;
            }
        }
        if (s[i] == 'D')
        {
            x = 500;
            h++;
        }
        if (s[i] == 'M')
        {
            w = 1000;
            f++;
        }    
        i++;
    }
    return (k * a + m*b + n*c + l*d + e*g + x*h + w*f + k_*a_ + e_*g_ + c_*n_);
}
#include <stdio.h>
int main()
{
	printf("%d", romanToInt("CMIV"));
}
