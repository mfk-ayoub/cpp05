/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:12:27 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/27 05:56:09 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat kaido(1, "Kaido");
        ShrubberyCreationForm form1("Garden");
        RobotomyRequestForm form2("Franky");
        PresidentialPardonForm form3("Zoro");

        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
        std::cout << form3 << std::endl;

        kaido.signForm(form1);
        kaido.signForm(form2);
        kaido.signForm(form3);

        kaido.executeForm(form1);
        kaido.executeForm(form2);
        kaido.executeForm(form3);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat weakling(150, "Buggy");
        ShrubberyCreationForm lowForm("Forest");

        weakling.signForm(lowForm); 
        weakling.executeForm(lowForm);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        PresidentialPardonForm invalidForm("Invalid");
        Bureaucrat bob(100, "Bob");
        invalidForm.execute(bob); 
    }
    catch (const std::exception &e)
    {
        std::cerr << "Execution failed: " << e.what() << std::endl;
    }

    return 0;
}
