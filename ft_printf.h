#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
int		ft_format(va_list args, const char format);
int		ft_prt_char(int c);
int		ft_prt_string(char *str);
size_t	ft_strlen_pointer(uintptr_t ptr);
void	ft_putpointer(uintptr_t ptr);
int		ft_prt_pointer(unsigned long long ptr);
int		ft_prt_number(int n);
size_t	ft_strlen_unumber(unsigned int number);
char	*ft_un_itoa(unsigned int n);
int		ft_prt_unsigned(unsigned int n);
size_t	ft_strlen_hexa(unsigned int num);
void	ft_puthexa(unsigned int num, const char format);
int		ft_prt_hexadecimal(unsigned int num, const char format);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
char    *ft_itoa(int n);


#endif
