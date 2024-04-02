/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:45:12 by martorre          #+#    #+#             */
/*   Updated: 2024/04/02 13:02:43 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replaceInFile(std::string& filename, std::string& s1, std::string& s2) 
{
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Unable to open input file " << filename << std::endl;
        return;
    }
    std::ofstream outputFile(filename + ".replace");
    if (!outputFile) {
        std::cerr << "Error: Unable to create output file " << filename + ".replace" << std::endl;
        return;
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) { //Buscamos s1 en la line a partir de la posicion 
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length()); // trimeamos antes de encontrar la ocurrencia sumamos la nueva palabra y sumamos el final
            pos += s2.length(); // actualizamos la pos
        }
        outputFile << line << std::endl;
    }
    std::cout << "Replacement completed successfully. New file created: " << filename + ".replace" << std::endl;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Error: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    replaceInFile(filename, s1, s2);
    return (0);
}
