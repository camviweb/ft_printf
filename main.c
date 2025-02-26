#include "ft_printf.h"
#include <stdio.h> // printf

int	main(void)
{
	unsigned int	i;
	int	result1;
	int result2;

	i = -1;

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

	printf("---A pointer---\n"); // hard
	result1 = ft_printf("ft_printf : %s\n", "hello");
	result2 = printf("printf : %p\n", "hello");
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A decimal---\n");
	result1 = ft_printf("ft_printf : %d\n", 24);
	result2 = printf("printf : %d\n", 24);
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---An integer---\n");
	result1 = ft_printf("ft_printf : %d\n", 24);
	result2 = printf("printf : %i\n", 24); // diff avec %d
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---An unsigned decimal---\n"); // si nb negatif, nb immense; sinon normal
	result1 = ft_printf("ft_printf : %d\n", 24);
	result2 = printf("printf : %u\n", i); 
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A number in hexa lowercase---\n"); // hard
	result1 = ft_printf("ft_printf : %d\n", 300);
	result2 = printf("printf : %x\n", 300);
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A number in hexa uppercase---\n"); // hard 
	result1 = ft_printf("ft_printf : %d\n", 300);
	result2 = printf("printf : %X\n", 300);
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	printf("---A percent sign---\n");
	result1 = ft_printf("ft_printf : %%\n");
	result2 = printf("printf : %%\n"); // pas d'arguments ?
	printf("The return value\nft_printf : %d | printf : %d\n\n", result1, result2);

	// longue phrase
}