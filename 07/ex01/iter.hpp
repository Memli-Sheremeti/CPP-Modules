#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename U> void ft_iter(T *arr, size_t size, U fct)
{
    for (size_t i = 0; i < size; i++)
        fct(arr[i]);
}
#endif 