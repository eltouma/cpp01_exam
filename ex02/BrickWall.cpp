/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:38:01 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 17:19:50 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::~BrickWall(void)
{
}

BrickWall* BrickWall::clone() const
{
	return (new BrickWall(*this));
}
