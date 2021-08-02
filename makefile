##############################################################
#	Basic instructions to GNU Make
#
#	To compile one program from multiple source code files, 
#	use gcc -o outputfile file1.c file2.c file3.c
#
#	The standart fuckery that I always use for simple programs
#	gcc FileName.c -o FileNameOutput
#
#	To compile multiple programs at once with multiple source code files, 
#	use gcc -c file1.c file2.c file3.c
##############################################################

# Project name
PPROJ_NAME = Hacker Rank C

# Output folder
OUT = out/

# Compiler & Linker if needed
COMPILER = gcc

# Flags, Libraries & Includes
CFLAGS = -g \
		 -Wall

# What you're compiling
# If more than one, write all of them here 
# with a space separating them
BINS = 

all:$(BINS)

%: %.c
	$(COMPILER) $(CFLAGS) $^ -o out/$@

clean:
	$(RM) $(BINS) $(OUT)
