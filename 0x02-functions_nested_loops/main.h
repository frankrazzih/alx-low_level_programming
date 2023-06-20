void print_alphabet(void);
void print_alphabet_x10(void);
void print_alphabet(void)
{
    char alpha;

    for (alpha = 'a'; alpha <= 'z'; alpha++)
    {
        putchar(alpha);
    }
}

void print_alphabet_x10(void)
{
        int times=0;
        while (times < 10)
        {
        char a='a';
        for (a='a'; a <='z'; a++)
        {
                putchar(a);
        }
                        putchar('\n');
                        times++;
        }
}
int _islower(int c);
