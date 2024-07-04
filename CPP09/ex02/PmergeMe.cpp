/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:11:30 by martorre          #+#    #+#             */
/*   Updated: 2024/07/04 15:13:19 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <deque>
#include <iostream>

void	merge_vector(std::vector<int> &left_merge, std::vector<int> &right_merge, std::vector<int> &vector_merge)
{
	size_t	l = 0;
	size_t	r = 0;
	size_t	v = 0;

	while (l < left_merge.size() && r < right_merge.size())
	{
		if (left_merge[l] < right_merge[r])
		{
			vector_merge[v] = left_merge[l];
			l++;
			v++;
		}
		else
		{
			vector_merge[v] = right_merge[r];
			r++;
			v++;
		}
	}
	while (l < left_merge.size())
	{
		vector_merge[v] = left_merge[l];
		l++;
		v++;
	}
	while (r < right_merge.size())
	{
		vector_merge[v] = right_merge[r];
		r++;
		v++;
	}
}

bool	merge_sort_vector(std::vector<int> &vector_merge)
{
	if (vector_merge.size() <= 1)
		return false;

	//oppp
 	std::vector<int> left_vector(vector_merge.begin(), vector_merge.begin() + vector_merge.size() / 2);
    std::vector<int> right_vector(vector_merge.begin() + vector_merge.size() / 2, vector_merge.end());
	
	merge_sort_vector(left_vector);
	merge_sort_vector(right_vector);
	merge_vector(left_vector, right_vector, vector_merge);
	return true;
}

void	merge_deque(std::deque<int> &left_merge, std::deque<int> &right_merge, std::deque<int> &list_merge)
{
	size_t	l = 0;
	size_t	r = 0;
	size_t	v = 0;

	while (l < left_merge.size() && r < right_merge.size())
	{
		if (left_merge[l] < right_merge[r])
		{
			list_merge[v] = left_merge[l];
			l++;
			v++;
		}
		else
		{
			list_merge[v] = right_merge[r];
			r++;
			v++;
		}
	}
	while (l < left_merge.size())
	{
		list_merge[v] = left_merge[l];
		l++;
		v++;
	}
	while (r < right_merge.size())
	{
		list_merge[v] = right_merge[r];
		r++;
		v++;
	}
}

bool	merge_sort_deque(std::deque<int> &deque_merge)
{
	if (deque_merge.size() <= 1)
		return false;

	//oppp
 	std::deque<int> left_deque(deque_merge.begin(), deque_merge.begin() + deque_merge.size() / 2);
    std::deque<int> right_deque(deque_merge.begin() + deque_merge.size() / 2, deque_merge.end());
	
	merge_sort_deque(left_deque);
	merge_sort_deque(right_deque);
	merge_deque(left_deque, right_deque, deque_merge);
	return true;
}

void	start_deque(char **argv)
{
	std::deque<int> deque;
	std::clock_t start = std::clock();
	int	i = 1;
	int	j = 0;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if	(std::atoi(&argv[i][j]) == 0 && argv[i][j] != 48)
				throw std::invalid_argument("Is not a number :(");
			j++;
		}
		deque.push_back(std::atoi(argv[i]));
		i++;
	}
	if (deque.size() < 15)
		merge_insertion_sort(deque, deque.size());
	else
		merge_sort_deque(deque);
	print_time(start, deque, 'd');
}

void	start_vector(char **argv)
{
	std::vector<int> vector;
	std::clock_t start = std::clock();
	int	i = 1;
	int	j = 0;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if	(std::atoi(&argv[i][j]) == 0 && argv[i][j] != 48)
				throw std::invalid_argument("Is not a number :(");
			j++;
		}
		vector.push_back(std::atoi(argv[i]));
		i++;
	}
	std::cout << "Before:\t";
	print_container(vector);

	if (vector.size() < 15)
		merge_insertion_sort(vector, vector.size());
	else
		merge_sort_vector(vector);

	std::cout << "After:\t";
	print_container(vector);
	std::cout << std::endl;
	print_time(start, vector, 'v');
}