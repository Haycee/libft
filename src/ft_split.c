#include <stdlib.h>
#include <stdio.h>


static int ft_word_counter(char
    const * s, char c);
static void ft_malloc_strs(char ** tab_str, char
    const * s, char c);
static void ft_fill_strs(char ** tab_str, char
    const * s, char c);
char ** ft_split(char
    const * s, char c) {
    char ** tab_str;
    int n_words;
    n_words = ft_word_counter(s, c);
    tab_str = malloc(sizeof(char * ) * (n_words + 1));
    if (!tab_str)
        return (NULL);
    ft_malloc_strs(tab_str, s, c);
    ft_fill_strs(tab_str, s, c);
    tab_str[n_words] = NULL;
    return (tab_str);
}
static int ft_word_counter(char
    const * s, char c) {
    int i_s;
    int n_word;
    i_s = 0;
    n_word = 0;
    while (s[i_s]) {
        if (s[i_s] != c && s[i_s + 1] == c)
            n_word++;
        if (s[i_s] != c && s[i_s + 1] == '\0')
            n_word++;
        i_s++;
    }
    return (n_word);
}
static void ft_malloc_strs(char ** tab_str, char
    const * s, char c) {
    int i_s;
    int str_len;
    int i_tab_str;
    i_s = 0;
    i_tab_str = 0;
    while (s[i_s]) {
        while (s[i_s] == c)
            i_s++;
        str_len = 0;
        while (s[i_s] != c && s[i_s + 1] != '\0') {
            i_s++;
            str_len++;
        }
        if (s[i_s] != c && s[i_s + 1] == '\0')
            str_len++;
        i_s++;
        tab_str[i_tab_str] = malloc(sizeof(char) * (str_len + 1));
        i_tab_str++;
    }
}
static void ft_fill_strs(char ** tab_str, char
    const * s, char c) {
    int i_s;
    int i_tab_str;
    int i_str;
    i_s = 0;
    i_tab_str = 0;
    while (i_tab_str < ft_word_counter(s, c)) {
        while (s[i_s] == c)
            i_s++;
        i_str = 0;
        while (s[i_s] != c) {
            tab_str[i_tab_str][i_str] = s[i_s];
            i_str++;
            i_s++;
        }
        if (s[i_s] == c)
            tab_str[i_tab_str][i_str] = '\0';
        i_s++;
        i_tab_str++;
    }
}

int main()
{
	char const	s[100] = "__Hellow_Worl_d__jkekodeldl";
	char		c = '_';
	char		**splitted;
	int			i_1 = 0;

	splitted = ft_split(s, c);
	while (splitted[i_1])
	{
		printf("%s\n", splitted[i_1]);
		i_1 ++;
	}
	return (0);
}
