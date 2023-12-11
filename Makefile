SRC 	=		ft_atoi.c			\
				ft_bzero.c			\
				ft_calloc.c			\
				ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_isprint.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memmove.c		\
				ft_memset.c			\
				ft_strchr.c			\
				ft_strdup.c			\
				ft_strlcat.c		\
				ft_strlcpy.c		\
				ft_strlen.c			\
				ft_strncmp.c		\
				ft_strnstr.c		\
				ft_strrchr.c		\
				ft_tolower.c		\
				ft_toupper.c		\
				ft_substr.c			\
				ft_strjoin.c		\
				ft_strtrim.c		\
				ft_split.c			\
				ft_itoa.c			\
				ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_strmapi.c		\
				ft_striteri.c		\

OBJECTS = 	$(SRC:.c=.o)

BONUS	=		ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c			\

BONUSOB	=	$(BONUS:.c=.o)

RM		= 	rm -f

NAME	= 	libft.a

CCFLAGS =	-Wall -Wextra -Werror

# by default the first rule gets executed, so no need to run 'make all'
all:		$(NAME)

# 		@  = befehl wird ausgeführt aber nicht in command line gedruckt
#ar:	ar creates and maintains file archives. 
# r: 	replaces or adds file to archive. If archive does not exist, ar creates it and prints 
#		a message. When ar replaces an existing member, it does not change the archive order.
# s:	regenerates the symbol table regardless of whether the command modifies the archive.
# c: 	suppresses the message ar normally prints when it creates a new archive file.
$(NAME):	$(OBJECTS)
	@ar -rsc $(NAME) $(OBJECTS)

#		andere mgl = -c -o $@ $^
#		aktuelle mgl -> testet ob datei neu kompiliert werden muss
#%.o:		%.c
#	cc $(CCFLAGS) $(SRC) -c

$(OBJECTS):
	cc $(CCFLAGS) $(SRC) -c

clean:
	$(RM) $(OBJECTS) $(BONUSOB)

fclean: 	clean
	$(RM) $(NAME)

re:			fclean all

#auch möglich ohne OBJECTS in beiden zeilen
bonus:		$(OBJECTS) $(BONUSOB)
	@ar -rsc $(NAME) $(OBJECTS) $(BONUSOB)
