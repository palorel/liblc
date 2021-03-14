#ifndef FT_STRING_H
#define FT_STRING_H

size_t		lc_strlen(const char *str);
size_t		lc_strnlen(const char *s, size_t maxlen);

char		*lc_strchr(const char *s, int c);
char		*lc_strrchr(const char *s, int c);

char		*lc_strstr(const char *str, const char *needle);
char		*lc_strnstr(const char *s, const char *needle, size_t n);
char		**lc_strstrs(const char **strs, const char *needle);

int			lc_strcmp(const char *s1, const char *s2);
int			lc_strncmp(const char *s1, const char *s2, size_t n);

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
