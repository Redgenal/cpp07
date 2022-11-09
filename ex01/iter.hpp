/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utawana <utawana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:00:33 by utawana           #+#    #+#             */
/*   Updated: 2022/11/09 21:00:33 by utawana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define  ITER_H

#include <iostream>

template <typename T>
void iter(T* arr, int len, void(*f)(T const &elem)) {
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

#endif