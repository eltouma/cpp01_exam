/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:40:29 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 22:47:03 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"
#include "ASpell.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::~Polymorph(void)
{
}

Polymorph* Polymorph::clone(void) const
{
	return new Polymorph(*this);
}
