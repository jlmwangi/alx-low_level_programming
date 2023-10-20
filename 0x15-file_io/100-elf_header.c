#include "main.h"
void print_err(char *form);

/**
 * print_err - prints error
 * @form: string array
 */
void print_err(char *form)
{
	dprintf(STDERR_FILENO, "%s\n", form);
	exit(98);
}
/**
 * print_elfheader - prints elfheader contents
 * @header: header being referred to
 */
void print_elfheader(const Elf64_Ehdr *header)
{
	int n;

	printf(" Magic:  ");
	for (n = 0; n < 16; n++)
	{
		printf("%02x ", header->e_ident[n]);
	}
	printf("\n");

	printf(" Class:		");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE: printf("none\n"); break;
		case ELFCLASS32: printf("ELF32\n"); break;
		case ELFCLASS64: printf("ELF64\n"); break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_CLASS]); break;
	}

	printf(" Data:		");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE: printf("none\n"); break;
		case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
		case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_DATA]); break;
	}

	printf(" Version:		%d", header->e_ident[EI_VERSION]);
	switch (header->e_ident[EI_VERSION])
	{
		case EV_NONE: printf(" (invalid)\n"); break;
		case EV_CURRENT: printf(" (current)\n"); break;
		default:
			printf("\n"); break;
	}

	printf(" OS/ABI:		");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		case ELFOSABI_AIX: printf("UNIX - AIX\n"); break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
		case ELFOSABI_ARM: printf("ARM\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_OSABI]); break;
	}

	printf(" ABI Version:		%d\n", header->e_ident[EI_ABIVERSION]);

	printf(" Type:		");
	switch (header->e_type)
	{
		case ET_NONE: printf("NONE (None)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default:
			printf("<unknown: %x>\n", header->e_type); break;
	}

	printf(" Entry point address:		%#lx\n", (unsigned long)header->e_entry);
}
/**
 * main - presents entry information
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	int fd;
	char *filename;

	if (argc != 2)
	{
		print_err("Usage : elf_header elf_filename");
	}
	filename = argv[1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_err("Error : can't read file");
	}
	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		close(fd);
		print_err("Error : unable to read ELF file");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1
			|| header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		print_err("Error : Not an ELF file");
	}
	print_elfheader(&header);
	close(fd);

	return (0);
}
