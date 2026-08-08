NAME	:libft.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
SRCS	:=
OBJS	:= $(SRCS:.c=.o)
AR		:= ar rcs
RM		:= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all