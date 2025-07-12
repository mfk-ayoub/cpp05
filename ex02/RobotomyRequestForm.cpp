/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:36:36 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/12 11:45:36 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    :  AForm("robotmyrequestform" ,72 , 45) , _target("default")
{

}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    :  AForm("robotmyrequestform" ,72 , 45) , _target(target)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other) , _target(other._target)
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    return *this;
}

const std::string& RobotomyRequestForm::GetTarget() const
{
    return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    (void)executor;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}