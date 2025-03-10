/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:40:29 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 22:01:31 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"
#include "ATarget.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy(void)
{
}

Dummy* Dummy::clone(void) const
{
	return new Dummy(*this);
}
