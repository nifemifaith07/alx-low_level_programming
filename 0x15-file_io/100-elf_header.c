#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>
#include <unistd.h>

/* #define EI_NIDENT 16 */

int main(int argc, char *argv[])
{
	int i, j, fd, val;

	Elf64_Ehdr elfHdr;
	Elf64_Shdr sectHdr;
	FILE* ElfFile = NULL;
	char* SectNames = NULL;

	if(argc != 2)
	{
		perror("Usage: elf_header elf_filename\n");
		exit(98);
	}   

	ElfFile = fopen(argv[1], "r");
	if(ElfFile == NULL)
	{
		printf("Error: can't read file\n");
		exit(98);
	}

	j = 0;

	if (elfHdr.e_ident[EI_MAG0] == 127 &&
	    elfHdr.e_ident[EI_MAG1] == 'E' &&
	    elfHdr.e_ident[EI_MAG2] == 'L' &&
	    elfHdr.e_ident[EI_MAG3] == 'F') /*0x7F is 127 in ASCII*/
		continue;
	else
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}

	fread(&elfHdr, 1, sizeof(elfHdr), ElfFile);

	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %.2x", elfHdr.e_ident[i]);
	printf("\n");

	printf("  Class:                             ");
	switch (elfHdr.e_ident[EI_CLASS]) /*EI_CLASS - File class*/
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

	printf("  Data:                              ");
	switch (elfHdr.e_ident[EI_DATA]) /*EI_DATA - Data encoding*/
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

    printf("\tSection header offset: 0x%.8X\n", elfHdr.e_shoff);

    printf("\tFlags: 0x%.8X\n", elfHdr.e_flags);

    printf("\tSize of this header: 0x%X\n", elfHdr.e_ehsize);

    printf("\tSize of program headers: 0x%X\n", elfHdr.e_phentsize);

    printf("\tNumber of program headers: %d\n", elfHdr.e_phnum);

    printf("\tSize of section headers: 0x%X\n", elfHdr.e_shentsize);

    printf("\tNumber of section headers: %d\n", elfHdr.e_shnum);

    printf("\tSection header string table index: 0x%X\n", elfHdr.e_shstrndx);

    printf("\tEntry point address: 0x%.8X\n", elfHdr.e_entry);

    //premik do section tabele

    fseek(ElfFile, elfHdr.e_shoff + elfHdr.e_shstrndx * elfHdr.e_shentsize, SEEK_SET);

    fread(&sectHdr, 1, sizeof(sectHdr), ElfFile);

    SectNames = malloc(sectHdr.sh_size);

    fseek(ElfFile, sectHdr.sh_offset, SEEK_SET);

    fread(SectNames, 1, sectHdr.sh_size, ElfFile);

    for (int idx = 0; idx < elfHdr.e_shnum; idx++){

        char* name = "";

        fseek(ElfFile, elfHdr.e_shoff + idx * sizeof(sectHdr), SEEK_SET);

        fread(&sectHdr, 1, sizeof(sectHdr), ElfFile);

        // print section name

        if (sectHdr.sh_name);

        name = SectNames + sectHdr.sh_name;

            

        printf("%i %s\n", idx, name);

    }

    close(fd);

    return 0;

} 
