#include "ft_printf.h"
#include <stdio.h> // printf

int	main(void)
{
	unsigned int	i;
	int	result1;
	int result2;
	char	*ptr;
	int	int_min;

	i = 1;
	ptr = 0;
	int_min =-2147483648;

	printf("\n---Without format specifiers---\n");
	result1 = ft_printf("ft_printf : hello world\n");
	result2 = printf("printf : hello world\n");
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A single character---\n");
	result1 = ft_printf("ft_printf : %c\n", 'c');
	result2 = printf("printf : %c\n", 'c');
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A string---\n");
	result1 = ft_printf("ft_printf : %s\n", "hello");
	result2 = printf("printf : %s\n", "hello");
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A pointer---\n");
	result1 = ft_printf("ft_printf : %p\n", ptr);
	result2 = printf("printf : %p\n", ptr);
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A decimal---\n");
	result1 = ft_printf("ft_printf : %d\n", 24);
	result2 = printf("printf : %d\n", 24);
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A decimal 2---\n");
	result1 = ft_printf("ft_printf : %d\n", int_min);
	result2 = printf("printf : %d\n", int_min);
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---An integer---\n");
	result1 = ft_printf("ft_printf : %i\n", 0x24);
	result2 = printf("printf : %i\n", 0x24);
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---An unsigned decimal---\n"); // si nb negatif, nb immense; sinon normal
	result1 = ft_printf("ft_printf : %u\n", i);
	result2 = printf("printf : %u\n", i); 
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A number in hexa lowercase---\n");
	result1 = ft_printf("ft_printf : %x\n", 300);
	result2 = printf("printf : %x\n", 300);
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A number in hexa uppercase---\n");
	result1 = ft_printf("ft_printf : %X\n", 300);
	result2 = printf("printf : %X\n", 300);
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A percent sign---\n");
	result1 = ft_printf("ft_printf : %%\n");
	result2 = printf("printf : %%\n");
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);
}
