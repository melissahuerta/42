
Understand how pipe() works [here](https://www.youtube.com/watch?v=Mqb2dVRe0uo)
Understand how fork() works [here](https://www.youtube.com/watch?v=cex9XrZCU14)


functions allowed:
◦ access
◦ open
◦ unlink
◦ close
◦ read
◦ write
◦ malloc
◦ waitpid
◦ wait
◦ free
◦ pipe
◦ dup
◦ dup2
◦ execve
◦ fork
◦ perror
◦ strerror
◦ exit


Your objective is to code the Pipex program. It should be executed in this way:
    $> ./pipex file1 cmd1 cmd2 file2
Just in case: file1 and file2 are file names, cmd1 and cmd2 are shell commands with their parameters.
The execution of the pipex program should do the same as the next shell command:
    $> < file1 cmd1 | cmd2 > file2
III.1 Examples
     $> ./pipex infile ``ls -l'' ``wc -l'' outfile
should be the same as “< infile ls -l | wc -l > outfile”
     $> ./pipex infile ``grep a1'' ``wc -w'' outfile
should be the same as “< infile grep a1 | wc -w > outfile”