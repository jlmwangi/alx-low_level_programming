#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd;
	const char *elf_filename;
	Elf64_Ehdr header;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (INVALID_ELF);
}
elf_filename = argv[1];
fd = open(elf_filename, O_RDONLY);
if (fd == -1)
{
perror("Error opening ELF file");
return (INVALID_ELF);
}
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
perror("Error reading ELF header");
close(fd);
return (INVALID_ELF);
}
if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
{
fprintf(stderr, "Error: Not a valid ELF file\n");
close(fd);
return (INVALID_ELF);
}
display_elf_header(&header);
close(fd);
return (0);
}
