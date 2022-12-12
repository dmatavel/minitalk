LIBFT = libft
SERVER = server
SRC_PATH = src
SRC_SERVER = $(shell find $(SRC_PATH) -name "server.c")
SRC_CLIENT = $(shell find $(SRC_PATH) -name "client.c")
NAME = minitalk
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = libft/
INCLUDE = libft.a

$(NAME): $(OBJS)
	make -C $(LIBFT_PATH) $(INCLUDE)
	$(CC) $(CFLAGS) $(SRC_SERVER) -o $(SERVER) $(LIBFT_PATH)$(INCLUDE)

all: $(NAME)

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_PATH)$(INCLUDE)

re: fclean all

.PHONY: include all clean fclean re
