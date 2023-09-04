# Piscine C

This is all my projects during my Piscine in 42 !

```bash
Welcome to my 42 School Piscine Projects
```

## Usage

Just clone it and explore it. Create mains like this one and enjoy :)

```c
#include <unistd.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_atoi(argv[3]) == 1)
			rush00(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else if (ft_atoi(argv[3]) == 2)
			rush01(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else if (ft_atoi(argv[3]) == 3)
			rush02(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else if (ft_atoi(argv[3]) == 4)
			rush03(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else if (ft_atoi(argv[3]) == 5)
			rush04(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else
			write(1, "Invalid Rush Argument", 21);
	}
	else
		write(1, "Invalid Arguments", 17);
	return (0);
}
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License

[MIT](https://choosealicense.com/licenses/mit/)
