#ifndef FT_STRING_H
#define FT_STRING_H

size_t		lc_strlen(const char *str)
{
    size_t l = 0;

    while(*str)
    {
        ++l;
        ++str;
    }
    return (l);
}
size_t		lc_strnlen(const char *s, size_t maxlen)
{
    size_t l = 0;

    while(*s)
    {
        ++l;
        ++s;    
    }
    return(maxlen > l ? l : maxlen);
}

char		*lc_strchr(const char *s, int c)
{
    while(*s)
    {
        if (*s == c)
            return(s);
        ++s;
    }
    return (0);
}

char		*lc_strrchr(const char *s, int c)
{
    char l = 0;

    while(*s)
    {
        if (*s == c)
            l = s;
        ++s;
    }   
    return (l);
}

char		*lc_strstr(const char *str, const char *needle)
{
    int k = 0;
    int l = 0;
    char needle_2;

    needle_2 = needle;
    k = lc_strlen(needle);
    while (*str)
    {
        if (*str == *needle)
        {
            if (k == l)
                return (s);
            else
            {
                ++l;
                ++needle;
                ++str;
            }
        }
        ++str;
        needle = needle_2;
        l = 0;
    }
    return (0);
}
char		*lc_strnstr(const char *s, const char *needle, size_t n)
{

}
char		**lc_strstrs(const char **strs, const char *needle)
{
    
}

int			lc_strcmp(const char *s1, const char *s2){
    int k = 0;
    int l = 0;

    while (*s1 && *s2)
    {
        if (*s1)
            ++l;
        if (*s2)
            ++k;
        ++s1;
        ++s2;
    }
    return(l - k)
}
int			lc_strncmp(const char *s1, const char *s2, size_t n)
{
    //Функция strncmp() работает аналогичным образом, но сравнивает только первые n символов строки s1.  Что под этим имеется ввиду?
}

char		*lc_strcpy(char *dest, const char *src);
char		*lc_strncpy(char *dest, const char *src, size_t n);
size_t		lc_strlcpy(char *dest, const char *src, size_t size);

char		*lc_strdup(const char *s);
char		*lc_strndup(const char *s, size_t size);

char		*lc_strcat(char *dest, const char *src);
char		*lc_strncat(char *dest, const char *src, size_t n);
size_t		lc_strlcat(char *dest, const char *src, size_t n);

char		*lc_strjoin(char *str1, char *str2);
char		**lc_split(char *str, char c);

char		*lc_substr(char const *s, unsigned int start, size_t len);
char		*lc_strtrim(char const *s1, char const *set);
char		*lc_strmapi(char const *s, char (*f)(unsigned int, char));

char		*lc_rand_word(size_t len, char *alpha);
size_t		lc_word_count(char *str, const char sep);
void		lc_clear_strs(char **strs, size_t size);

void		lc_bzero(void *s, size_t n);
void		*lc_memchr(const void *ptr, int c, size_t n);
void		*lc_memrchr(const void *ptr, int c, size_t n);
int			lc_memcmp(const void *ptr1, const void *ptr2, size_t n);
void		*lc_memcpy(void *dest, const void *src, size_t n);
void		*lc_memccpy(void *dest, const void *src, int c, size_t n);
void		*lc_memset(void *str, int c, size_t n);
void		*lc_memmove(void *dest, const void *src, size_t num);
void		*lc_memswap(void *dest, void *src, size_t num);

#endif
