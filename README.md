_This project has been created as part of the 42 curriculum by mhumbert._

## Description :

The goal of this project was to learn the classics functions of the C language, initiating the bases of algorithmy.

- ft_atoi.c : The atoi() function converts the initial portion of the string pointed to by nptr to int.

- ft_bzero.c : The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros to that area.

- ft_calloc : The calloc() function  allocates  memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.

- ft_isalnum : These functions check whether c, which must have the value of an unsigned char or EOF, falls  into a certain character class according to the specified locale.

- ft_isalpha : Checks for an alphabetic character.

- ft_isascii : Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.

- ft_isprint : Checks for any printable character including space.

- ft_isdigit : Checks for a digit (0 through 9).

- ft_itoa : The ft_itoa function does the opposite work of ft_atoi, converting a number to a string.

- ft_lstadd_front : This function lets us add a new element to the front of an existing list. We receive the new element and the existing list. 

- ft_lstadd_back : This function lets us add a new element to the end of an existing list.

- ft_lstclear : This function removes the element passed as parameter as well as all the following elements.

- ft_lstdelone : This function takes a list element as parameter and deletes its content as well as free the allocated memory using the del function passed as parameter too.

- ft_lstiter : This function iterates over the whole list and applies the function f to the content of each elements.

- ft_memchr : The  memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.

- ft_memcmp : The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.

- ft_memcpy : The  memcpy()  function  copies  n bytes from memory area src to memory area dest.The memory areas must not overlap.

- ft_memmove : The  memmove()  function  copies n bytes from memory area src to memory area dest.

- ft_memset : The  memset()  function fills the first n bytes of the memory area pointed to by s with the constant byte c.

- ft_putchar_fd : Outputs the character ’c’ to the given file descriptor.

- ft_putendl_fd : Outputs the string ’s’ to the given file descriptor followed by a newline.

- ft_putnbr_fd : Outputs the integer ’n’ to the given file descriptor.

- ft_putstr_fd : Outputs the string ’s’ to the given file descriptor.

- ft_split : Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.

- ft_strchr : The  strchr()  function returns a pointer to the first occurrence of the character c in the string s.

- ft_strdup : The  strdup()  function  returns  a pointer to a new string which is a duplicate of the string s.

- ft_striteri : Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument.

- ft_strjoin : Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

- ft_strlcat : The  strlcat()  function  appends  the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

- ft_strlcpy : The strlcpy() function copies up to size - 1 characters from the NUL-terminated  string src to dst, NUL-terminating the result.

- ft_strlen : The  strlen()  function  calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').

- ft_strmapi : Applies the function ’f’ to each character of the string ’s’, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to collect the results from the successive applications of ’f’.

- ft_strncmp : strncmp() compares string in a lexicographic order, this means that it compares each characters by their corresponding ASCII values.

- ft_strnstr : The strnstr() function works in the same way as strchr() but searches for a complete substring in max n characters instead of a single character.

- ft_strrchr : The  strchr()  function returns a pointer to the first occurrence of the character c in the string s.

- ft_strtrim : Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

- ft_substr : ft_substr returns a substring of the string s passed as parameter.

- ft_tolower : This function converts uppercase letters to lowercase.

- ft_toupper : This function converts lowercase letters to uppercase.

## Intructions :

compilation : GCC

flags : -Wall -Wextra -Werror

## Resources :

- My classmates

- The man

- [Koor](https://koor.fr/C/Tutorial/Instructions.wp)

- [42-cursus](https://42-cursus.gitbook.io/guide)
