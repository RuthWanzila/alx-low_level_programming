#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
/**
* print_error - print error message
* @message: message to be printed
* Return: void
*/

void print_error(const char *message)
{
fprintf(stderr, "Error: %s\n", message);
}
/**
* print_elf_header_info – prints header info
* @header: to be printed
*/
void print_elf_header_info(Elf64_Ehdr *elf_header)
{
int i;
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", elf_header->e_ident[i]);
printf("\n");

printf("  Class:                             ELF%d\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? 64 : 32);

printf("  Data:                              %s\n", (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");

printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (elf_header->e_ident[EI_OSABI]) {
case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
default: printf("<unknown: %d>\n", elf_header->e_ident[EI_OSABI]);
}
printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (elf_header->e_type) {
case ET_NONE: printf("NONE (Unknown type)\n"); break;
case ET_REL: printf("REL (Relocatable file)\n"); break;
case ET_EXEC: printf("EXEC (Executable file)\n"); break;
case ET_DYN: printf("DYN (Shared object file)\n"); break;
case ET_CORE: printf("CORE (Core file)\n"); break;
default: printf("<unknown: %d>\n", elf_header->e_type);
}
printf("  Entry point address:               0x%lx\n", elf_header->e_entry);
}
/**
* main – entry point
* @argc: count
* @argv: vector
* Return: success
*/
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
return (0);
}
