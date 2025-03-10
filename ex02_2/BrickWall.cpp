/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:40:29 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 22:49:25 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"
#include "ATarget.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::~BrickWall(void)
{
}

BrickWall* BrickWall::clone(void) const
{
	return new BrickWall(*this);
}
