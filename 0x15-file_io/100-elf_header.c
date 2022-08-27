
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>
#include <unistd.h>
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
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int i;

	Elf64_Ehdr elfHdr;
	FILE* ElfFile = NULL;

	/* no of arguments must be two */
	if(argc != 2)
	{
		perror("Usage: elf_header elf_filename\n");
		exit(98);
	}   

	/* open filename with read only flag */
	ElfFile = fopen(argv[1], "r");
	if(ElfFile == NULL)
	{
		printf("Error: can't read file\n");
		exit(98);
	}

	/* read file */
	fread(&elfHdr, 1, sizeof(elfHdr), ElfFile);

	if_elf(elfHdr.e_ident); /* check if elf */

	/* PRINT MAGIC NUMBER AND E_IDENT BYTES */
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %.2x", elfHdr.e_ident[i]);
	printf("\n");

	/* PRINT CLASS - FILE ARCHITECTURE */
	printf("  Class:                             ");
	switch (elfHdr.e_ident[EI_CLASS])
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
			printf("<unknown: %x>\n", elfHdr.e_ident[EI_CLASS]);
	}

	/* PRINT DATA ENCODING OF THE PROCESSOR_SPECIFIC DATA IN THE FILE */
	printf("  Data:                              ");
	switch (elfHdr.e_ident[EI_DATA])
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
			printf("<unknown: %x>\n", elfHdr.e_ident[EI_DATA]);
	}

	/* PRINT VERSION OF THE ELF SPECIFICATION */
	printf("  Version:                           ");
	if (elfHdr.e_ident[EI_VERSION] == EV_CURRENT)
		printf("%d (current)\n", elfHdr.e_ident[EI_VERSION]);
	else
		printf("%i (invalid)\n", elfHdr.e_ident[EI_VERSION]);

	/* PRINT OPERATING SYSTEM&ABI TO WHICH THE OBJECT IS DIRECTED */
	printf("  OS/ABI:                            ");
	switch (elfHdr.e_ident[EI_OSABI])
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
			printf("<unknown: %x>\n", elfHdr.e_ident[EI_OSABI]);
	}
 
	/* PRINT ABI VERSION TO WHICH THE OBJECT IS TARGETED */
	printf("  ABI Version:                       %d\n",
	       elfHdr.e_ident[EI_ABIVERSION]);

	if (elfHdr.e_ident[EI_DATA] == ELFDATA2MSB)
		elfHdr.e_type >>= 8;

	printf("  Type:                              ");
	switch (elfHdr.e_type)
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
			printf("<unknown: %x\n", elfHdr.e_type);
	}

	printf("  Entry point address:               ");
	if (elfHdr.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		elfHdr.e_entry = ((elfHdr.e_entry << 8) & 0xFF00FF00) |
			  ((elfHdr.e_entry >> 8) & 0xFF00FF);
		elfHdr.e_entry = (elfHdr.e_entry << 16) | (elfHdr.e_entry >> 16);
	}
	if (elfHdr.e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elfHdr.e_entry);
	else
		printf("%#lx\n", elfHdr.e_entry);

	fclose(ElfFile);

	return 0;
}
