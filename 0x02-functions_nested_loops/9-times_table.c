#include "main.h"
void times_table(void)
{
	int x;
	for (x = 0; x <= 9;x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (x=0;x<=9;x++)
	{

		_putchar(x+ '0');
		if (x<9)
		{
                _putchar(',');
                _putchar(' ');
		}
	}
	_putchar('\n');
	for (x=0;x<=18;x+=2)
        {
		int x1=x/10;
                int x2=x%10;
		if (x>9)
		{
			_putchar(x1+ '0');
			_putchar(x2+ '0');
		}
		else
		{
			_putchar(x+ '0');
		}
                _putchar(',');
                _putchar(' ');
        }
        _putchar('\n');
	 for (x=0;x<=27;x+=3)
        {
		int x1=x/10;
                int x2=x%10;

                if (x>9)
                {
                        _putchar(x1+ '0');
                        _putchar(x2+ '0');
                }
                else
                {
                        _putchar(x+ '0');
                }
                _putchar(',');
                _putchar(' ');
        }
        _putchar('\n');
	 for (x=0;x<=36;x+=4)
        {
		int x1=x/10;
                int x2=x%10;
                if (x>9)
                {
                        _putchar(x1+ '0');
                        _putchar(x2+ '0');
                }
                else
                {
                        _putchar(x+ '0');
                }
                _putchar(',');
                _putchar(' ');
        }
        _putchar('\n');
	 for (x=0;x<=45;x+=5)
        {
		int x1=x/10;
                int x2=x%10;
                if (x>9)
                {
                        _putchar(x1+ '0');
                        _putchar(x2+ '0');
                }
                else
                {
                        _putchar(x+ '0');
                }
                _putchar(',');
                _putchar(' ');
        }
        _putchar('\n');
	 for (x=0;x<=54;x+=6)
        {
		int x1=x/10;
                int x2=x%10;
                if (x>9)
                {
                        _putchar(x1+ '0');
                        _putchar(x2+ '0');
                }
                else
                {
                        _putchar(x+ '0');
                }
                _putchar(',');
                _putchar(' ');
        }
        _putchar('\n');
	 for (x=0;x<=63;x+=7)
        {
		int x1=x/10;
                int x2=x%10;
                if (x>9)
                {
                        _putchar(x1+ '0');
                        _putchar(x2+ '0');
                }
                else
                {
                        _putchar(x+ '0');
                }
                _putchar(',');
                _putchar(' ');
        }
        _putchar('\n');
	 for (x=0;x<=72;x+=8)
        {
		int x1=x/10;
                int x2=x%10;
                if (x>9)
                {
                        _putchar(x1+ '0');
                        _putchar(x2+ '0');
                }
                else
                {
                        _putchar(x+ '0');
                }
                _putchar(',');
                _putchar(' ');
        }
        _putchar('\n');
	 for (x=0;x<=81;x+=9)
        {
		int x1=x/10;
                int x2=x%10;
                if (x>9)
                {
                        _putchar(x1+ '0');
                        _putchar(x2+ '0');
                }
                else
                {
                        _putchar(x+ '0');
                }
                _putchar(',');
                _putchar(' ');
        }
        _putchar('\n');
}
