/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utawana <utawana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:00:30 by utawana           #+#    #+#             */
/*   Updated: 2022/11/09 21:00:30 by utawana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void    test(T const &elem) {
    std::cout << "This is " << elem << std::endl;
}

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    std::string arr2[5] = {"hello", "hi", "hola", "bonjour", "ola"};

    iter(arr1, 5, test<int>);
    iter(arr2, 5, test);
    return (0);
}