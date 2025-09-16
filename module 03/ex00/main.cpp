/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:24:12 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/16 20:29:06 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*int main() {
    ClapTrap a("Alpha");
    a.attack("Bandit");        // attacca (danno iniziale 0)
    a.takeDamage(3);           // perde 3 HP -> 7
    a.beRepaired(5);           // consuma 1 energia, HP -> 12
    a.takeDamage(12);          // porta HP a 0 -> "dead"
    a.beRepaired(3);           // non può riparare (è morto)
    return 0;
}*/


int main() {
    std::cout << "===== CREAZIONE CLAPTRAP =====\n";
    ClapTrap a("Alpha");
    ClapTrap b("Bravo");

    std::cout << "\n===== TEST BASE: ATTACCO =====\n";
    a.attack("Bravo");     // consumo energia, danno 0
    b.takeDamage(0);       // Bravo subisce 0 danni (hp rimane invariato)

    std::cout << "\n===== TEST: TAKE DAMAGE =====\n";
    b.takeDamage(3);       // Bravo scende a 7 HP
    b.takeDamage(5);       // Bravo scende a 2 HP
    b.takeDamage(2);       // Bravo scende a 0 HP, "muore"
    b.takeDamage(1);       // Bravo è già morto → nessun effetto

    std::cout << "\n===== TEST: RIPARAZIONE =====\n";
    a.beRepaired(5);       // Alpha passa da 10 a 15 HP, energia -1
    a.beRepaired(3);       // Alpha passa a 18 HP, energia -1
    b.beRepaired(4);       // Bravo è morto → non può ripararsi

    std::cout << "\n===== TEST: ENERGIA A 0 =====\n";
    // Consumiamo tutta l'energia di Alpha con attacchi
    for (int i = 0; i < 20; i++) {
        a.attack("target");
    }
    a.beRepaired(2);       // Non può ripararsi (energia finita)

    std::cout << "\n===== TEST: COSTRUTTORE DI COPIA =====\n";
    ClapTrap c(a);         // copy constructor
    c.attack("Dummy");     // stesso stato di Alpha (energia probabilmente 0)

    std::cout << "\n===== TEST: OPERATORE = =====\n";
    ClapTrap d("Delta");
    d = b;                 // assegniamo lo stato di Bravo (hp 0)
    d.attack("target");    // dovrebbe stampare che non può attaccare (hp=0)

    std::cout << "\n===== FINE TEST =====\n";
    return 0;
}
