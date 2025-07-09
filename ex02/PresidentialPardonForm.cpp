/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:34:16 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/22 20:39:03 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : _name("PresidentialPardonForm"), SignGrade(25) , ExecGrade(5) , _target("default")

{

}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : _name("PresidentialPardonForm"), SignGrade(25) , ExecGrade(5) , _target(target)

{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm PresidentialPardonForm::&operator=(const PresidentialPardonForm &other)
{

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{

}
