#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>

#define EI_NIDENT 16

int main(int argc, char *argv[]) {

    int i;
    int fd;
    int val;

    Elf32_Ehdr elfHdr;
    Elf32_Shdr sectHdr;
    FILE* ElfFile = NULL;
    char* SectNames = NULL;

    if(argc != 2) {
        perror("Error while opening file");
        return 0;
    }   



    ElfFile = fopen(argv[1], "r");
    if(ElfFile == NULL) {
        printf("fopen");
        return -1;
    }

    //preberemo elf header
    fread(&elfHdr, 1, sizeof(elfHdr), ElfFile);

    printf("\tMagic: ");
 
    for (i = 0; i < EI_NIDENT; i++)
	    printf(" %.2x", elfHdr.e_ident[i]);

    printf("\n");

    printf("\tVersion: 0x%.2X\n", elfHdr.e_version);

    printf("\tEntry point address: 0x%.8X\n", elfHdr.e_entry);

    printf("\tProgram header offset: 0x%.8X\n", elfHdr.e_phoff);

    printf("\tSection header offset: 0x%.8X\n", elfHdr.e_shoff);

    printf("\tFlags: 0x%.8X\n", elfHdr.e_flags);

    printf("\tSize of this header: 0x%X\n", elfHdr.e_ehsize);

    printf("\tSize of program headers: 0x%X\n", elfHdr.e_phentsize);

    printf("\tNumber of program headers: %d\n", elfHdr.e_phnum);

    printf("\tSize of section headers: 0x%X\n", elfHdr.e_shentsize);

    printf("\tNumber of section headers: %d\n", elfHdr.e_shnum);

    printf("\tSection header string table index: 0x%X\n", elfHdr.e_shstrndx);

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
