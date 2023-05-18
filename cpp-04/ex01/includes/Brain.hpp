#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
    std::string _ideas[100];

public:
    Brain(void);
    virtual ~Brain(void);
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);

    void setIdea(std::string const raw);
    std::string getIdea(int pos) const;
};

#endif // BRAIN_HPP
