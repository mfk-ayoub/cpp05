/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 06:15:59 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/27 06:54:40 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& copy)
{
   (void)copy;
}


Intern& Intern::operator=(const Intern& other)
{
    if (this != &other)
    {
        
    }
    
    return *this;
}

typedef AForm* (*FormCreator)(const std::string&);

static AForm* createShrubbery(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

static AForm* createPresidential(const std::string& target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& name, const std::string& target)
{
    const std::string names[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    FormCreator creators[3] = {
        &createShrubbery,
        &createRobotomy,
        &createPresidential
    };

    for (int i = 0; i < 3; ++i)
    {
        if (names[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return creators[i](target);
        }
    }

    std::cerr << "Error: Form '" << name << "' does not exist." << std::endl;
    return NULL;
}