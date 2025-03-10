/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:38:01 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 16:41:49 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy(void)
{
}

Dummy* Dummy::clone() const
{
	return (new Dummy(*this));
}
