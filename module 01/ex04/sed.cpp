/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:38:22 by damoncad          #+#    #+#             */
/*   Updated: 2025/06/19 16:43:10 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void replace(const std::string &filename, const std::string &s1, const std::string &s2)
{
    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }
    std::string output_filename = filename + ".replace";
    std::ofstream outfile(output_filename.c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: Could not create output file " << output_filename << std::endl;
        return;
    }
    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    std::cout << "Replacement complete. Output written to " << output_filename << std::endl;
}

