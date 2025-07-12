/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:12:27 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/12 05:06:30 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat yonko(1, "Kaido");
        Form f1("Marine", 1, 10);

        std::cout << f1 << std::endl;

        yonko.signForm(f1);
        std::cout << f1 << std::endl;

        Form f2("Pirate Permit", 2, 50);
        Bureaucrat baggi(150, "Baggi");
        baggi.signForm(f2);

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Form badForm("InvalidForm", 0, 200);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}