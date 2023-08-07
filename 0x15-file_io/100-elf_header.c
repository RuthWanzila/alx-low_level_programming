#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void print_error(const char *message)
{
fprintf(stderr, "Error: %s\n", message);
}

void print_elf_header_info(Elf64_Ehdr *elf_header)
{
printf("Magic: ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x ", elf_header->e_ident[i]);
printf("\n");

printf("Class: %d-bit\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? 64 : 32);

printf("Data: %s\n", (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");

printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);

printf("OS/ABI: %s\n", (elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX System V ABI" : "Others");

printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

printf("Type: %d\n", elf_header->e_type);

printf("Entry point address: 0x%lx\n", elf_header->e_entry);
}

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr elf_header;

if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
print_error("Failed to open the file");
exit(98);
}

if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
{
print_error("Failed to read the ELF header");
close(fd);
exit(98);
}

if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
{
print_error("The file is not an ELF file");
close(fd);
exit(98);
}

print_elf_header_info(&elf_header);

close(fd);
return 0;
}
