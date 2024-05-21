
#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <exception>
#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
# define MICROSECOND 100000

class PmergeMe {
    public:
        PmergeMe(void);
        PmergeMe(const PmergeMe& other);
        PmergeMe &operator=(const PmergeMe& other);
        ~PmergeMe(void);

        void sortVec(int argc, char **argv);
        void sortList(int argc, char **argv);

        class InvalidElementException : public std::exception {
            public:
                virtual const char* what() const throw();  
        };
};
#endif
