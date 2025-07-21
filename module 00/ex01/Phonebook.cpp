/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:50:45 by damoncad          #+#    #+#             */
/*   Updated: 2025/05/23 11:43:57 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() : count(0), index(0)
{
    int i = 0;
    while (i < 8)
    {
        contacts[i] = NULL;
        i++;
    }
}

PhoneBook::~PhoneBook()
{
    int i = 0;
    while (i < 8)
    {
        delete contacts[i];
        i++;
    }
}

void    PhoneBook::addContact(const  std::string &first_name,
                                const std::string &last_name,
                                const std::string &nickname,
                                const std::string &phone_number,
                                const std::string &darkest_secret)
{
    if (contacts[index] != NULL)
        delete contacts[index];

    contacts[index] = new Contact(first_name, last_name, nickname, phone_number, darkest_secret);
    index = (index + 1) % 8;
    if (count < 8)
        count++;
    std::cout << "Contact added at index: " << ((index + 7) % 8) << std::endl;
}

void    PhoneBook::searchContact() const
{
    if (count == 0)
    {
        std::cout << "No contacts to display." << std::endl;
        return;
    }
    displayAllContacts();

    std::string input;
    int selectIndex;

    while (true)
    {
        std::cout << "Enter the index of the contact you want to view (0 to " << (count - 1) << "): ";
        if (!std::getline(std::cin, input))
        {
            std::cin.clear();
            std::cout << "Invalid input. Please try again." << std::endl;
            return;
        }

        if (input.size() == 1 && std::isdigit(input[0]))
        {
            selectIndex = input[0] - '0';
            if (selectIndex >= 0 && selectIndex < count)
                break;
        }
        std::cout << "Invalid index. Please enter a number between 0 and " << (count - 1) << "." << std::endl;
    }

    contacts[selectIndex]->displayContact();
}

std::string truncateField(const std::string &s)
{
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return s;
}

void    PhoneBook::displayAllContacts() const
{
    std::cout << std::right << std::setw(10) << "Index" << "|"
              << std::right << std::setw(10) << "First Name" << "|"
              << std::right << std::setw(10) << "Last Name" << "|"
              << std::right << std::setw(10) << "Nickname" << "|" << std::endl;

    for (int i = 0; i < count; i++)
    {
        std::cout << std::right << std::setw(10) << i << "|"
                  << std::right << std::setw(10) << truncateField(contacts[i]->getFirstName()) << "|"
                  << std::right << std::setw(10) << truncateField(contacts[i]->getLastName()) << "|"
                  << std::right << std::setw(10) << truncateField(contacts[i]->getNickname()) << "|" << std::endl;
    }
    std::cout << "Total contacts: " << count << std::endl;
}