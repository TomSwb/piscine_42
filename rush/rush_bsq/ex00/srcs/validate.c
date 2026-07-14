
#include "../includes/ft_lib.h"

int validate_map(t_map *map)
{
    if (validate_lines_length(map))
        return 1;
    if (validate_characters(map))
        return 1;
    return 0;
}

int validate_lines_length(t_map *map)
{
    int i;
    int len;
    len = ft_strlen(map->grid[0]);
    i = 1;
    while (i < map->rows)
    {
        if (ft_strlen(map->grid[i]) != len)
            return 1;
        i++;
    }
    return 0;
}
int validate_characters(t_map *map)
{
    int i;
    int j;
    i = 0;
    while (i < map->rows)
    {
        j = 0;
        while (j < map->cols)
        {
            char c = map->grid[i][j];
            if (c != map->empty && c != map->obstacle)
                return 1;
            j++;
        }
        i++;
    }
    return 0;
}
