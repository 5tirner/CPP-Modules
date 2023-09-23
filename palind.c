#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *makestr(char *s, int i, int j, int l)
{
    int o = 0;
    char *r = malloc(j - i + 2);
    while (i <= j)
    {
        r[o] = s[i];
        o++;
        i++;
    }
    r[o] = 0;
    return (r);
}
char *makerev(char *s, int i, int j, int l)
{
    int o = 0;
    char *r = malloc(j - i + 2);
    while (j >= i)
    {
        r[o] = s[j];
        j--;
        o++;
    }
    r[o] = 0;
    return (r);
}
char * longestPalindrome(char * s)
{
    int i = 0, j,l = strlen(s);
    char *s1 = NULL, *s2 = NULL, *r = NULL;
    while (s[i])
    {
        j = l - 1;
        while (j > i)
        {
            s1 = makestr(s, i, j, l);
            s2 = makerev(s, i, j, l);
            if (!strcmp(s1, s2))
            {
                if (!r)
                    r = s1;
                else if (!strcmp(s1, s2) && strlen(r) < strlen(s1))
                    r = s1;
                break;
            }
            j--;
        }
        i++;
    }
    if (!r)
    {
        r = malloc(2);
        r[0] = s[0];
        r[1] = 0;
    }
    return r;
}

int main()
{
    char *s = "zudfweormatjycujjirzjpyrmaxurectxrtqedmmgergwdvjmjtstdhcihacqnothgttgqfywcpgnuvwglvfiuxteopoyizgehkwuvvkqxbnufkcbodlhdmbqyghkojrgokpwdhtdrwmvdegwycecrgjvuexlguayzcammupgeskrvpthrmwqaqsdcgycdupykppiyhwzwcplivjnnvwhqkkxildtyjltklcokcrgqnnwzzeuqioyahqpuskkpbxhvzvqyhlegmoviogzwuiqahiouhnecjwysmtarjjdjqdrkljawzasriouuiqkcwwqsxifbndjmyprdozhwaoibpqrthpcjphgsfbeqrqqoqiqqdicvybzxhklehzzapbvcyleljawowluqgxxwlrymzojshlwkmzwpixgfjljkmwdtjeabgyrpbqyyykmoaqdambpkyyvukalbrzoyoufjqeftniddsfqnilxlplselqatdgjziphvrbokofvuerpsvqmzakbyzxtxvyanvjpfyvyiivqusfrsufjanmfibgrkwtiuoykiavpbqeyfsuteuxxjiyxvlvgmehycdvxdorpepmsinvmyzeqeiikajopqedyopirmhymozernxzaueljjrhcsofwyddkpnvcvzixdjknikyhzmstvbducjcoyoeoaqruuewclzqqqxzpgykrkygxnmlsrjudoaejxkipkgmcoqtxhelvsizgdwdyjwuumazxfstoaxeqqxoqezakdqjwpkrbldpcbbxexquqrznavcrprnydufsidakvrpuzgfisdxreldbqfizngtrilnbqboxwmwienlkmmiuifrvytukcqcpeqdwwucymgvyrektsnfijdcdoawbcwkkjkqwzffnuqituihjaklvthulmcjrhqcyzvekzqlxgddjoir";
    char *p = longestPalindrome(s);
    printf("%s\n", p);
}