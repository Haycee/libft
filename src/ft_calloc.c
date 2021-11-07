void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	int		total;

	total = nmemb * size;
	result = malloc(total);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb);
	return (result);
}
