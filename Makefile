NAME = minitalk
SERVER = server
SRC_SERVER = src/server.c
OBJ_SERVER = $(SRC_SERVER:.c=.o)
CLIENT = client
SRC_CLIENT = src/client.c
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
LIB_PATH = libft/
LIBFT = libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(SERVER) $(CLIENT)

$(SERVER): $(LIBFT) $(OBJ_SERVER)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBFT)

$(CLIENT): $(LIBFT) $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBFT)

$(LIBFT):
	make -C $(LIB_PATH) all

all: $(NAME)

clean:
	rm -f src/*.o
	make -C $(LIB_PATH) clean

fclean: clean
	rm -f $(SERVER)
	rm -f $(CLIENT)
	rm -f $(LIBFT)

re: fclean all

.PHONY: include all clean fclean re
