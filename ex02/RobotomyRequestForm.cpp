/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:36:36 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/27 05:51:14 by ayel-mou         ###   ########.fr       */
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



void RobotomyRequestForm::executeAction() const
{
    std::cout << "* DRILLING NOISES *" << std::endl;
    srand(time(NULL)); 
    if (rand() % 2)
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed on " << _target << "." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}