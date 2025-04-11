# **************************************************************************** #
#                                    Config                                    #
# **************************************************************************** #
MAKE = make
SHELL = bash
# **************************************************************************** #
#                                    NAMES                                     #
# **************************************************************************** #
NAME = libft.a
# **************************************************************************** #
#                                    Paths                                     #
# **************************************************************************** #
SRC_PATH        = .
INC_PATH        = .
BUILD_PATH  	= .build

FILES           = ft_bzero.c
FILES           += ft_isalnum.c
FILES           += ft_isalpha.c 
FILES           += ft_isascii.c
FILES						+= ft_isdigit.c 
FILES						+= ft_isprint.c
FILES						+= ft_memcpy.c
FILES						+= ft_memmove.c
FILES						+= ft_memset.c
FILES						+= ft_strchr.c
FILES						+= ft_strlen.c
FILES						+= ft_strrchr.c
FILES						+= ft_tolower.c
FILES						+= ft_toupper.c
FILES						+= ft_memchr.c
FILES						+= ft_strncmp.c 
FILES						+= ft_memcmp.c
FILES						+= ft_strnstr.c
FILES						+= ft_strlcat.c
FILES						+= ft_atoi.c
FILES						+= ft_calloc.c
FILES						+= ft_strdup.c
FILES						+= ft_substr.c

SRC             = $(addprefix $(SRC_PATH)/, $(FILES))
OBJS            = $(SRC: $(SRC_PATH)/%.c=$(BUILD_PATH)/%.o)

# **************************************************************************** #
#                                   Compiler                                   #
# **************************************************************************** #
CC              = cc
CFLAGS          = -Wall -Wextra -Werror
INC             = -I $(INC_PATH)
# **************************************************************************** #
#                                   Commands                                   #
# **************************************************************************** #
RM              = rm -rf
AR              = ar rcs
MKDIR           = mkdir -p
# **************************************************************************** #
#                                    Rules                                     #
# **************************************************************************** #
 
all: $(BUILD_PATH) $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(BUILD_PATH):
	   	$(MKDIR) $(BUILD_PATH)

$(BUILD_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
	    $(RM) $(BUILD_PATH)

fclean: clean
	 $(RM) $(NAME)
    
re: fclean all
