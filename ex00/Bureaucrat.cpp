/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 07:06:12 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/27 06:09:13 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat()
    : _name("Edward Newgate"), _grade(1)
{
    
}
//~~~~~~~~~~~~~~~~~~~~

Bureaucrat::Bureaucrat(int grade)
    : _name("Edward Newgate")
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

//~~~~~~~~~~~~~~~~~~~~

Bureaucrat::Bureaucrat(const std::string _name)
: _name(_name), _grade(1)
{
    
}
//~~~~~~~~~~~~~~~~~~~~

Bureaucrat::Bureaucrat(int grade, const std::string _name)
: _name(_name)
{
     if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}
//~~~~~~~~~~~~~~~~~~~~


Bureaucrat::Bureaucrat(const Bureaucrat& copy)
    : _name(copy._name) , _grade(copy._grade)
{
    
}
//~~~~~~~~~~~~~~~~~~~~

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
    {
        _grade = other._grade;
    }
    return *this;
}

void Bureaucrat::Increment()
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    else
    {
        std::cout << "Increment grade of " << getName() << std::endl;
        _grade -= 1;
    }   
}

void Bureaucrat::Decrement()
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    else
    {
        std::cout << "Decrement grade of " << getName() << std::endl;
        _grade += 1;
    }
}
//~~~~~~~~~~~~~~~~~~~~

const char*  Bureaucrat::GradeTooHighException::what() const throw() 
{
    return ("Grade too high!");
}
//~~~~~~~~~~~~~~~~~~~~

const char*  Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low!");
}

std::string  Bureaucrat::getName() const
{
    return  (_name);
}
//~~~~~~~~~~~~~~~~~~~~


std::ostream& operator<< (std::ostream& os,const Bureaucrat& b)
{
 
    return (os << b.getName()<< " , bureaucrat grade " << b.getGrade());
}
//~~~~~~~~~~~~~~~~~~~~
int Bureaucrat::getGrade() const
{
    return (_grade);   
}
//~~~~~~~~~~~~~~~~~~~~

Bureaucrat::~Bureaucrat()
{
    
}