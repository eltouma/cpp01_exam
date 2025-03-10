/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:38:01 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 17:12:48 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::~Polymorph(void)
{
}

Polymorph* Polymorph::clone() const
{
	return (new Polymorph(*this));
}
