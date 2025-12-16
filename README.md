# libzen

<details open>
  <summary><h2>Utility functions</h2></summary>

  Name | Prototype | Description
  --|--|--
  [isalpha](./src/util/zen_isalpha.c) | `int  zen_isalpha(int c);` | _check for alphabetic characters_
  [isdigit](./src/util/zen_isdigit.c) | `int  zen_isdigit(int c);` | _check for digit (`0` through `9`)_
  [isalnum](./src/util/zen_isalnum.c) | `int  zen_isalnum(int c);` | _check for alphanumeric characters_
  [isspace](./src/util/zen_isspace.c) | `int  zen_isspace(int c);` | _check for whitespace characters_
  [isascii](./src/util/zen_isascii.c) | `int  zen_isascii(int c);` | _check whether `c` is a 7-bit `unsigned char` that fits into the ASCII character set_
  [isprint](./src/util/zen_isprint.c) | `int  zen_isprint(int c);` | _check for any printable character (including `SPACE`)_
  [toupper](./src/util/zen_toupper.c) | `int  zen_toupper(int c);` | _convert a lowercase letter to uppercase_
  [tolower](./src/util/zen_tolower.c) | `int  zen_tolower(int c);` | _convert an uppercase letter to lowercase_

</details>

  <!-- [strlen](./ft_strlen.c) | `size_t  ft_strlen(const char *s);` | _calculate the length of a string_
  [memset](./ft_memset.c) | `void  *ft_memset(void *s, int c, size_t n);` | _fill memory with a constant byte_
  [bzero](./ft_bzero.c) | `void  ft_bzero(void *s, size_t n);` | _write zero-valued bytes_
  [memcpy](./ft_memcpy.c) | `void  *ft_memcpy(void *dest, const void *src, size_t n);` | _copy memory area (can only copy in forward direction)_
  [memmove](./ft_memmove.c) | `void  *ft_memmove(void *dest, const void *src, size_t n);` | _copy memory area (can copy in both forward and backward direction)_
  [strlcpy](./ft_strlcpy.c) | `size_t  ft_strlcpy(char *dst, const char *src, size_t size);` | _size-bounded string copying_
  [strlcat](./ft_strlcat.c) | `size_t  ft_strlcat(char *dst, const char *src, size_t size);` | _size-bounded string concatenation_
  [strchr](./ft_strchr.c) | `char  *ft_strchr(const char *s, int c)` | _locate a character in a string (1st occurrence)_
  [strrchr](./ft_strrchr.c) | `char  *ft_strrchr(const char *s, int c)` | _locate a character in a string (last occurrence)_
  [strncmp](./ft_strncmp.c) | `int  ft_strncmp(const char *s1, const char *s2, size_t n)` | _compare two strings_
  [memchr](./ft_memchr.c) | `void  *ft_memchr(const void *s, int c, size_t n)` | _scan memory for a character_
  [strnstr](./ft_strnstr.c) | `char  *ft_strnstr(const char *big, const char *little, size_t len)` | _locate a substring in a string_
  [atoi](./ft_atoi.c) | `int  ft_atoi(const char *nptr)` | _convert a string to an integer_
  [calloc](./ft_calloc.c) | `void  *ft_calloc(size_t nmemb, size_t size);` | _allocate dynamic memory: the memory is set to zero_
  [strdup](./ft_strdup.c) | `char *ft_strdup(const char *s);` | _duplicate a string_ -->