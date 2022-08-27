#include "main.h"
/* #define EI_NIDENT 16[no need already defined in elf.h] */

/**
 * if_elf - checks if file is elf file
 * @e_ident: array that specify how to read the file
 * Return: nothing
 */

void if_elf(unsigned char *e_ident)
{
	if (e_ident[0] != 0x7F || e_ident[1] != 0x45 ||
	    e_ident[2] != 0x4c || e_ident[3] != 0x46) /*0x7F is 127 in ASCII*/
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}
/**
 * print_magic - PRINTS NUMBER AND E_IDENT BYTES
 * @e_ident: array that specify how to read file
 * Return: nothing
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %.2x", e_ident[i]);
	printf("\n");
}

/**
 * print_class - FILE ARCHITECTURE
 * @e_ident: array
 * Return: nothing
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{

		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n",
			       e_ident[EI_CLASS]);
	}
}

/**
* print_data - prints data
* @e_ident: array
* Return: nothing
*/

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n",
			       e_ident[EI_DATA]);
	}
}

/**
 * print_osabi - prints
 * @e_ident: array
 * Return: nothing
 */

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n",
			       e_ident[EI_OSABI]);
	}
}

/**
 * print_version - prints
 * @e_ident: array
 * Return: nothing
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           ");
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("%d (current)\n",
		       e_ident[EI_VERSION]);
	else
		printf("%i (invalid)\n",
		       e_ident[EI_VERSION]);
}
/**
 * print_abi - prints
 * @e_ident: array
 * Return: nothing
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}
/**
 * print_type - prints
 * @e_ident: array
 * @e_type: type
 * Return: nothing
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Exexutable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x\n", e_type);
	}
}
/**
 * print_entry - prints
 * @e_entry: entry
 * @e_ident: array
 * Return: nothing
 */

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_file - closes the ELF file
 *
 * @Elffile: the file descriptor for the ELF file
 *
 * Return: nothing
*/
void _close(int Elffile)
{
	if (close(Elffile) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", Elffile);
		exit(98);
	}
}


/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	Elf64_Ehdr elfHdr;
	FILE *ElfFile = NULL;
	int R_file;

	if (argc != 2)
	{
		perror("Usage: elf_header elf_filename\n");
		exit(98);
	}
	ElfFile = open(argv[1], O_RDONLY);
	if (Elffile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	elfHdr = malloc(sizeof(Elf64_Ehdr));
	if (elfHdr == NULL)
	{
		_close(Elffile);
		free(elfHdr);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	R_file = read(Elffile, elfHdr, sizeof(Elf64_Ehdr));
	if (Rfile == -1)
	{
		free(elfHdr);
		_close_(Elffile);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	if_elf(elfHdr.e_ident); /* check if elf */
	printf("ELF Header:\n");
	print_magic(elfHdr.e_ident);
	print_class(elfHdr.e_ident);
	print_data(elfHdr.e_ident);
	print_version(elfHdr.e_ident);
	print_osabi(elfHdr.e_ident);
	print_abi(elfHdr.e_ident);
	print_type(elfHdr.e_type, elfHdr.e_ident);
	print_entry(elfHdr.e_entry, elfHdr.e_ident);

	_close(ElfFile);
	return (0);
}
