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

#FILES           = ft_isalpha.c
#FILES           += ft_strlen.c
FILES           = *.c
#FILES           = ft_putchar.c 
#FILES           += ft_putstr.c
#FILES 			+= ft_strcmp.c 
#FILES 			+= ft_strlen.c
#FILES 			+= ft_swap.c

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
	    $(RM) $(OBJS)

fclean: clean
	 $(RM) $(NAME)
    
re: fclean all
