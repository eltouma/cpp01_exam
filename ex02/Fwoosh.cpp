/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:38:01 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 16:40:18 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh(void)
{
}

Fwoosh* Fwoosh::clone() const
{
	return (new Fwoosh(*this));
}
