/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:00:14 by adolivie          #+#    #+#             */
/*   Updated: 2025/12/02 12:48:19 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	int		count;
	va_list	ap;

	if (!format)
		return (-1);
	i = 0;
	count = 0;
	va_start(ap, format);
	len = ft_strlen(format);
	while (i < len)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				count += ft_printf_();
			else if (format[i] == 'c')
				count += ft_printf_c(va_arg(ap, int));
			else if (format[i] == 'd' || format[i] == 'i')
				count += ft_printf_d(va_arg(ap, int));
			else if (format[i] == 'p')
				count += ft_printf_p(va_arg(ap, void *));
			else if (format[i] == 's')
				count += ft_printf_s(va_arg(ap, char *));
			else if (format[i] == 'u')
				count += ft_printf_u(va_arg(ap, unsigned int));
			else if (format[i] == 'x')
				count += ft_printf_x(va_arg(ap, int), 0);
			else if (format[i] == 'X')
				count += ft_printf_x(va_arg(ap, int), 1);
			else
				return (-1);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			i++;
			count++;
		}
	}
	va_end(ap);
	return (count);
}

int main(void)
{
	printf("=== TESTS FT_PRINTF ===\n\n");
	
	// Test 1: Texte simple
	printf("--- Test 1: Texte simple ---\n");
	printf("printf:    ");
	int r1 = printf("Hello World!\n");
	printf("ft_printf: ");
	int r2 = ft_printf("Hello World!\n");
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 2: %c (caractère)
	printf("--- Test 2: %%c (caractère) ---\n");
	printf("printf:    ");
	r1 = printf("Lettre: %c\n", 'A');
	printf("ft_printf: ");
	r2 = ft_printf("Lettre: %c\n", 'A');
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 3: %s (string)
	printf("--- Test 3: %%s (string) ---\n");
	printf("printf:    ");
	r1 = printf("Nom: %s\n", "Claude");
	printf("ft_printf: ");
	r2 = ft_printf("Nom: %s\n", "Claude");
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 4: %d (entier)
	printf("--- Test 4: %%d (entier) ---\n");
	printf("printf:    ");
	r1 = printf("Nombre: %d\n", 42);
	printf("ft_printf: ");
	r2 = ft_printf("Nombre: %d\n", 42);
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 5: %d négatif
	printf("--- Test 5: %%d négatif ---\n");
	printf("printf:    ");
	r1 = printf("Négatif: %d\n", -123);
	printf("ft_printf: ");
	r2 = ft_printf("Négatif: %d\n", -123);
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 6: %u (unsigned)
	printf("--- Test 6: %%u (unsigned) ---\n");
	printf("printf:    ");
	r1 = printf("Unsigned: %u\n", 4294967295u);
	printf("ft_printf: ");
	r2 = ft_printf("Unsigned: %u\n", 4294967295u);
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 7: %x (hexa minuscule)
	printf("--- Test 7: %%x (hexa min) ---\n");
	printf("printf:    ");
	r1 = printf("Hexa: %x\n", 255);
	printf("ft_printf: ");
	r2 = ft_printf("Hexa: %x\n", 255);
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 8: %X (hexa majuscule)
	printf("--- Test 8: %%X (hexa MAJ) ---\n");
	printf("printf:    ");
	r1 = printf("Hexa: %X\n", 255);
	printf("ft_printf: ");
	r2 = ft_printf("Hexa: %X\n", 255);
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 9: %p (pointeur)
	printf("--- Test 9: %%p (pointeur) ---\n");
	int x = 42;
	printf("printf:    ");
	r1 = printf("Adresse: %p\n", &x);
	printf("ft_printf: ");
	r2 = ft_printf("Adresse: %p\n", &x);
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 10: %% (pourcentage)
	printf("--- Test 10: %%%% (pourcentage) ---\n");
	printf("printf:    ");
	r1 = printf("Pourcent: 50%%\n");
	printf("ft_printf: ");
	r2 = ft_printf("Pourcent: 50%%\n");
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 11: Plusieurs arguments
	printf("--- Test 11: Plusieurs arguments ---\n");
	printf("printf:    ");
	r1 = printf("Mix: %c %s %d %x\n", 'Z', "test", 42, 255);
	printf("ft_printf: ");
	r2 = ft_printf("Mix: %c %s %d %x\n", 'Z', "test", 42, 255);
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 12: String NULL
	printf("--- Test 12: String NULL ---\n");
	printf("printf:    ");
	r1 = printf("NULL: %s\n", (char *)NULL);
	printf("ft_printf: ");
	r2 = ft_printf("NULL: %s\n", (char *)NULL);
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 13: Zéro
	printf("--- Test 13: Zéro ---\n");
	printf("printf:    ");
	r1 = printf("Zero: %d %u %x\n", 0, 0, 0);
	printf("ft_printf: ");
	r2 = ft_printf("Zero: %d %u %x\n", 0, 0, 0);
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	// Test 14: Sans arguments
	printf("--- Test 14: Sans arguments ---\n");
	printf("printf:    ");
	r1 = printf("Pas de format\n");
	printf("ft_printf: ");
	r2 = ft_printf("Pas de format\n");
	printf("Retours: printf=%d, ft_printf=%d\n\n", r1, r2);
	
	printf("=== FIN DES TESTS ===\n");
	return (0);
}
