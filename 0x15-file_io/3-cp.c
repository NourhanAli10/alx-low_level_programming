#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    int fn_from, fn_to;
    int read_f, write_f;
    char *file_from, *file_to;
    char mem[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
        exit(97);
    }
    file_from = argv[1];
    file_to = argv[2];

    fn_from = open(file_from, O_RDONLY);

    if (fn_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    fn_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

    if (fn_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        exit(99);
    }
   
    
    while ((read_f = read(fn_from, mem, BUFFER_SIZE) > 0))
    {
        write_f = write(fn_to, mem, read_f);
        if (write_f == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            exit(99);
        }
    }
    if (read_f == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    if (close(fn_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
        exit(100);
    }
    
    if (close(fn_to) == -1) 
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_to);
        exit(100);
    }

    return (0);
}
