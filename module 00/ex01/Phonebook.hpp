/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:36:08 by damoncad          #+#    #+#             */
/*   Updated: 2025/05/23 11:36:42 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

class PhoneBook
{
    private:
        Contact* contacts[8];
        int count;
        int index;
    public:
        PhoneBook();
        ~PhoneBook();

        void addContact(const std::string &first_name,
                        const std::string &last_name,
                        const std::string &nickname,
                        const std::string &phone_number,
                        const std::string &darkest_secret);
        void displayAllContacts() const;
        void searchContact() const;
};
