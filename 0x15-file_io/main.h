#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <elf.h>

#define INVALID_ELF 98

/**
 * display_elf_header - displays info on elf header
 * @header: pointer to string
 */
void display_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

printf("Class:  %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
printf("Data:  %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement" "little-endian" : "2's complement, big-endian");
printf("Version:  %d\n", header->e_ident[EI_VERSION]);
printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
printf("ABI Version:  %d\n", header->e_ident[EI_ABIVERSION]);

printf("Type:  %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" :
	       (header->e_type == ET_DYN ? "DYN (Shared object file)" :
		(header->e_type == ET_REL ? "REL (Relocatable file)" : "UNKNOWN")));

printf("Entry address: 0x%lx\n", (unsigned long)header->e_entry);
}

int _putchar(int c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
