/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:40:29 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 21:55:16 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"
#include "ASpell.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh(void)
{
}

Fwoosh* Fwoosh::clone(void) const
{
	return new Fwoosh(*this);
}
