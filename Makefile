NAME		= btc

CXX			= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -g
RM			= rm -rf

OBJDIR = build

FILES		= main BitcoinExchange

SRC			= $(FILES:=.cpp)
OBJ			= $(SRC:%.cpp=%.o)
HEADER		= BitcoinExchange.hpp


.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CXXFLAGS) $(OBJ) $(OPTS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all