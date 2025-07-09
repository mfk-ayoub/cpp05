/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:36:36 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/22 20:36:55 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : _name("robotmyrequestform") , SignGrade(72) , ExecGrade(45) , _target("default")
{

}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : _name("robotmyrequestform") , SignGrade(72) , ExecGrade(45) , _target(target)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{

}

RobotomyRequestForm RobotomyRequestForm::&operator=(const RobotomyRequestForm &other)
{
    
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}