#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void    del(void *str)
{
    free(str);
}

void    *upper(void *str)
{
    int i = 0;
    char *new = ft_strdup(str);
    while (new[i])
    {
        new[i] = ft_toupper(new[i]);
        i++;
    }
    return (new);
}
#include <unistd.h>
void    ft_putstr(void *s)
{
    size_t len = ft_strlen(s);
    write(1, s, len);
	write(1, " ", 1);
}

int     main(int frite, char **poutine)
{
    t_list   *lst = NULL;
    t_list   *mapped = NULL;

    if (frite < 2)
        return (0);
    int i = 1;
    while (i < frite)
        ft_lstadd_back(&lst, ft_lstnew(ft_strdup(poutine[i++])));
    mapped = ft_lstmap(lst, &upper, &del);
    printf("Liste d'origine :\n");
    ft_lstiter(lst, ft_putstr);
    printf("\nListe mappee :\n");
    ft_lstiter(mapped, ft_putstr);
    ft_lstclear(&lst, del);
    ft_lstclear(&mapped, del);
}
