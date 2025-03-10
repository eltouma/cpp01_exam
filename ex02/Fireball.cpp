/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:38:01 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 17:11:31 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::~Fireball(void)
{
}

Fireball* Fireball::clone() const
{
	return (new Fireball(*this));
}
