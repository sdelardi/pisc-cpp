NAME	=	replace
SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)
	FLAGS	=	-Wall -Wextra -Werror
	CC		=	clang++
	RM		=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
		$(CC) -o $@ -c $< $(FLAGS)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY : re fclean clean all
