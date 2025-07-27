/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 06:15:50 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/27 06:55:54 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    private:
    
    public:
        Intern();
        ~Intern();
        Intern(const Intern& copy);
        Intern& operator=(const Intern& other);

        AForm* makeForm(const std::string& name, const std::string& target);
        
};

