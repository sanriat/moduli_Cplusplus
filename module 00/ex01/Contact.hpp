/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:16:13 by damoncad          #+#    #+#             */
/*   Updated: 2025/05/21 20:45:23 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact(const std::string &first_name,
				const std::string &last_name,
				const std::string &nickname,
				const std::string &phone_number,
				const std::string &darkest_secret);
				const std::string &getFirstName() const { return first_name; }
				const std::string &getLastName() const { return last_name; }
				const std::string &getNickname() const { return nickname; }
		~Contact();
		void displayContact() const;
};

#endif