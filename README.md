# Projet en cours 👾
- Recoder printf()
- Page 9/9 done 
- **A variadic function** is a function which accepts a variable number of arguments. 
- bien structure et extensible ?

## To code
- [ ] %s prints a (null-terminated \0) string (as defined by the common C convention)
- [ ] %p The void * pointer argument has to be printed in hexadecimal format. (Print the address of a pointer or any other variable. It's a format specifier which is used if we want to print data of type (void *))
- [ ] %i Prints an integer in base 10
- [ ] d and i print an int as a signed integer. %d and %i are synonymous for output, but are different when used with scanf for input (where using %i will interpret a number as hexadecimal if it's preceded by 0x, and octal if it's preceded by 0.)
- [ ] %u Prints an unsigned decimal (base 10) number/int.
- [ ] %x Prints a number in hexadecimal (base 16) lowercase format. (Print an unsigned int as a hexadecimal number.)
- [ ] %X Prints a number in hexadecimal (base 16) uppercase format. (Print an unsigned int as a hexadecimal number.)
- [ ] good header 42

## To test
- [ ] norminette
- [ ] file names/git repo
- [ ] guidelines -> main
- [ ] valgrind (no leaks)
- [ ] "your Makefile must not relink"
- [ ] Your libftprintf.a has to be created at the root of your repository.
