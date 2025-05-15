/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 07:06:12 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/15 11:17:41 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat()
    : _name("default"), _grade(0)
{
    
}
//~~~~~~~~~~~~~~~~~~~~

Bureaucrat::Bureaucrat(int _grade)
    : _name("default"), _grade(_grade)
{
    
}
//~~~~~~~~~~~~~~~~~~~~

Bureaucrat::Bureaucrat(const std::string _name)
: _name(_name), _grade(0)
{
    
}
//~~~~~~~~~~~~~~~~~~~~

Bureaucrat::Bureaucrat(int _grade, const std::string _name)
: _name(_name), _grade(_grade)
{
    
}
//~~~~~~~~~~~~~~~~~~~~

void Bureaucrat::Increment()
{
    
    _grade += 1;   
}
//~~~~~~~~~~~~~~~~~~~~

void Bureaucrat::Decrement()
{
    _grade -= 1;   
}
//~~~~~~~~~~~~~~~~~~~~

std::string  Bureaucrat::getName() const
{
    return  (_name);
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