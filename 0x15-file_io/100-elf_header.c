#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <elf.h>

void exit_error(int code, char *msg)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(code);
}
/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
int fd;
ssize_t read_bytes;
Elf64_Ehdr header;
if (ac != 2)
exit_error(98, "Usage: elf_header elf_filename\n");
fd = open(av[1], O_RDONLY);
if (fd == -1)
exit_error(98, "Error: Unable to open ELF file\n");
read_bytes = read(fd, &header, sizeof(header));
if (read_bytes == -1 || read_bytes != sizeof(header))
exit_error(98, "Error: Unable to read ELF header\n");
if (check_elf_header(&header) == -1)
exit_error(98, "Error: Not an ELF file\n");
print_elf_info(&header);
if (close(fd) == -1)
exit_error(100, "Error: Unable to close file descriptor\n");
return (0);
}
/**
 * check_elf_header - checks if the file has an ELF header
 * @header: pointer to ELF header
 * Return: 0 if it is an ELF file, -1 otherwise
 */
int check_elf_header(Elf64_Ehdr *header)
{
if (header->e_ident[EI_MAG0] != ELFMAG0 ||
header->e_ident[EI_MAG1] != ELFMAG1 ||
header->e_ident[EI_MAG2] != ELFMAG2 ||
header->e_ident[EI_MAG3] != ELFMAG3)
return (-1);
return (0);
}
/**
 * print_elf_info - prints information from the ELF header
 * @header: pointer to ELF header
 */
void print_elf_info(Elf64_Ehdr *header)
{
char *type = NULL;
char *data = NULL;
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
type = "ELF32";
break;
case ELFCLASS64:
type = "ELF64";
break;
default:
type = "Unknown";
}
switch (header->e_ident[EI_DATA])
{
case ELFDATA2LSB:
data = "2's complement, little endian";
break;
case ELFDATA2MSB:
data = "2's complement, big endian";
break;
default:
data = "Unknown";
}
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; ++i)
{
printf("%02x", header->e_ident[i]);
if (i != EI_NIDENT - 1)
printf(" ");
}
printf("\n");
printf("  Class:                             %s\n", type);
printf("  Data:                              %s\n", data);
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            UNIX - %s\n", header->e_ident[EI_OSABI] == 0 ? "System V" : "Unknown");
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (No file type)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
default:
printf("Unknown\n");
break;
}
printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}
