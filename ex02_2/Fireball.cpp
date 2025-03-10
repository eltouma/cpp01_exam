/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:40:29 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 22:45:34 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"
#include "ASpell.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::~Fireball(void)
{
}

Fireball* Fireball::clone(void) const
{
	return new Fireball(*this);
}
