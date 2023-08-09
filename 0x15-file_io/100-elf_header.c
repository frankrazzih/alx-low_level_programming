#include "main.h"
#include <elf.h>
#include <stdint.h>
int main(int argc, char *argv[])
{
    int x;
    ssize_t y;

    struct elf
    {   unsigned char he_indent[EI_MAG1];
        unsigned char ge_indent[EI_MAG1];
        unsigned char fe_indent[EI_MAG2];
        unsigned char ee_indent[EI_MAG3];
        unsigned char de_indent[EI_CLASS];
        unsigned char ce_indent[EI_DATA];
        unsigned char be_indent[EI_VERSION];
        unsigned char ae_indent[EI_OSABI];
        uint32_t   e_version;
        uint16_t   e_type;
        uintptr_t  e_entry;
    };
    struct  elf header;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: ./elf_header elf_filename\n");

    }
    x = open(argv[1], O_RDONLY);
    if (x == -1)
    {
        dprintf(STDERR_FILENO, "Can't open file");
        exit (98);
    }
    y = read(x, &header, sizeof(header));
    if (y == -1)
    {
        printf("Can't read file\n");
        exit (98);
    }
    printf("ELF Header:\n");
    printf(" Magic:  %c %c %c %c\n", header.he_indent[EI_MAG0],header.ge_indent[EI_MAG1],header.fe_indent[EI_MAG2],header.ee_indent[EI_MAG3]);
    printf(" Class: %c\n", header.de_indent[EI_CLASS]);
    printf(" Data: %c\n", header.ce_indent[EI_DATA]);
    printf(" Version: %c\n", header.be_indent[EI_VERSION]);
    printf(" OS/ABI: %c\n", header.ae_indent[EI_OSABI]);
    printf(" ABI Version: %d\n", header.e_version);
    printf(" Type: %d\n", header.e_type);
    printf(" Entry point address: 0x%lx\n", (unsigned long)header.e_entry);
    return (0);
}
