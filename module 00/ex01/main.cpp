/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:02:31 by damoncad          #+#    #+#             */
/*   Updated: 2025/05/23 11:39:39 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string input;
	std::string fields[5];
	const char* prompts[] = { "Enter first name: ",
								"Enter last name: ",
								"Enter nickname: ",
								"Enter phone number: ",
								"Enter darkest secret: "
	};

	while (1)
	{
		std::cout << "Enter a command (EXIT, ADD, SEARCH): ";
		if(!std::getline(std::cin, input))
			return 0;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			std::string first_name, last_name, nickname, phone_number, darkest_secret;
			for (int i = 0; i < 5; i++)
			{
				do {
					std::cout << prompts[i];
					if (!std::getline(std::cin, fields[i]))
						return 0;
					if (fields[i].empty())
						std::cout << "Field cannot be empty. Please try again." << std::endl;
				}
				while (fields[i].empty());
			}
			phonebook.addContact(fields[0], fields[1], fields[2], fields[3], fields[4]);
			std::cout << "\nContact added!" << std::endl;

		}
		else if (input == "SEARCH")
		{
			phonebook.searchContact();
		}
		else
			std::cout << "You entered: " << input << std::endl;
	}
	return 0;
}