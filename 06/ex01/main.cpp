/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 16:32:01 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.class.hpp"

void	display_data(Data *data)
{
	std::cout << data->lol << " " << data->x << std::endl;
	return ;
}


int main(void)
{
	Data m;
	Data *b;
	uintptr_t point;

	m.lol = "lol";
	m.x = 10;

	display_data(&m);
	point = Serializer::seralize(&m);
	std::cout << point << std::endl;
	b = Serializer::deserialize(point);
	display_data(b);
	return 0;
}
