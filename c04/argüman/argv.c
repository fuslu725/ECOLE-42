#include <unistd.h>
int main(int argc, char *argv[])
{
    int i,j,control;


    i = 0;
    while(argv[i])
    {
        control = 0;
        j = 0;
        while(argv[i][j])
        {
            if(argv[i][j] == 'a')
            {
                control = 1;
            }
            j++;
        }
        if(control == 1)
        {
            j = 0;
            while (argv[i][j])
            {
                write(1, &argv[i][j], 1);
                j++;
            }
        }
        write(1, "\n", 1);
        i++;
    }
    return 0;
}