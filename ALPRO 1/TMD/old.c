void row1(){
    int i, j, k; //iterator
    for ( i = 0; i < thick; i++)
    {
        if (mode == 1) //jika mode yang diinput adalah 1 maka akan menjalankan pola +628
        {
            for ( j = 0; j < 5; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            for ( j = 0; j < 3; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            for ( j = 0; j < 3; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            pattern_blank();
        }
        else //jika mode yang diinput adalah 2 maka akan menggunakan pola 08
        {
            pattern_blank();
            pattern_fill();
            for ( j = 0; j < 3; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            pattern_blank();
        }
        for ( j = 0; j < many; j++)
        {
            pattern_blank();
            if (lenword[j] == 1)
            {
                for ( k = 0; k < 2; k++)
                {
                    pattern_blank();
                }
                pattern_fill();
            }
            if (lenword[j] == 0 || lenword[j] == 2 || lenword[j] == 3 || lenword[j] == 5 || lenword[j] == 6 || lenword[j] == 8 || lenword[j] == 9)
            {
                pattern_blank();
                pattern_fill();
                pattern_blank();
            }
            if (lenword[j] == 4)
            {
                pattern_fill();
                pattern_blank();
                pattern_fill();
            }
            if (lenword[j] == 7)
            {
                for ( k = 0; k < 2; k++)
                {
                    pattern_fill();
                }
                pattern_blank();
            }
        }
        printf("\n");
    }
}

void row2(){
    int i, j, k;
    for ( i = 0; i < thick; i++)
    {
        if (mode == 1)
        {
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_blank();
            pattern_fill();
            for ( j = 0; j < 5; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_fill();
        }
        else
        {
            pattern_fill();
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_fill();
        }
        for ( j = 0; j < many; j++)
        {
            pattern_blank();
            if (lenword[j] == 0 || lenword[j] == 4 || lenword[j] == 8 || lenword[j] == 9)
            {
                pattern_fill();
                pattern_blank();
                pattern_fill();
            }
            if (lenword[j] == 1 || lenword[j] == 2 || lenword[j] == 3 || lenword[j] == 7)
            {
                for ( k = 0; k < 2; k++)
                {
                    pattern_blank();
                }
                pattern_fill();
            }
            if (lenword[j] == 5 || lenword[j] == 6)
            {
                pattern_fill();
                for ( k = 0; k < 2; k++)
                {
                    pattern_blank();
                }
            }
        }
        printf("\n");
    }
}

void row3(){
    int i, j, k;
    for ( i = 0; i < thick; i++)
    {
        if (mode == 1)
        {
            for ( j = 0; j < 3; j++)
            {
                pattern_fill();
            }
            pattern_blank();
            pattern_blank();
            pattern_fill();
            for ( j = 0; j < 3; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            for ( j = 0; j < 3; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            pattern_blank();
        }
        else
        {
            pattern_fill();
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_blank();
            pattern_fill();
            pattern_blank();
        }
        for ( j = 0; j < many; j++)
        {
            pattern_blank();
            if (lenword[j] == 0)
            {
                pattern_fill();
                pattern_blank();
                pattern_fill();
            }
            if (lenword[j] == 1 || lenword[j] == 7)
            {
                pattern_blank();
                pattern_blank();
                pattern_fill();
            }
            if (lenword[j] == 2 || lenword[j] == 3 || lenword[j] == 4 || lenword[j] == 5 || lenword[j] == 6 || lenword[j] == 8 || lenword[j] ==9)
            {
                pattern_blank();
                pattern_fill();
                pattern_blank();
            }
        }
        printf("\n");
    }
}

void row4(){
    int i, j, k;
    for ( i = 0; i < thick; i++)
    {
        if (mode == 1)
        {
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_fill();
            for ( j = 0; j < 3; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            pattern_blank();
            pattern_fill();
        }
        else
        {
            pattern_fill();
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_fill();
        }
        for ( j = 0; j < many; j++)
        {
            pattern_blank();
            if (lenword[j] == 0 || lenword[j] == 6 || lenword[j] == 8)
            {
                pattern_fill();
                pattern_blank();
                pattern_fill();
            }
            if (lenword[j] == 1 || lenword[j] == 3 || lenword[j] == 4 || lenword[j] == 5 || lenword[j] == 7 || lenword[j] ==9)
            {
                pattern_blank();
                pattern_blank();
                pattern_fill();
            }
            if (lenword[j] == 2)
            {
                pattern_fill();
                pattern_blank();
                pattern_blank();
            }
        }
        printf("\n");
    }
}

void row5(){
    int i, j, k;
    for ( i = 0; i < thick; i++)
    {
        if (mode == 1)
        {
            for ( j = 0; j < 5; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            for ( j = 0; j < 3; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            for ( j = 0; j < 3; j++)
            {
                pattern_blank();
            }
            pattern_fill();
            pattern_blank();
        }
        else
        {
            pattern_blank();
            pattern_fill();
            pattern_blank();
            pattern_blank();
            pattern_blank();
            pattern_fill();
            pattern_blank();
        }
        for ( j = 0; j < many; j++)
        {
            pattern_blank();
            if (lenword[j] == 0 || lenword[j] == 2 || lenword[j] == 3 || lenword[j] == 5 || lenword[j] == 6 || lenword[j] == 8 || lenword[j] == 9)
            {
                pattern_blank();
                pattern_fill();
                pattern_blank();
            }
            if (lenword[j] == 1 || lenword[j] == 4 || lenword[j] == 7)
            {
                pattern_blank();
                pattern_blank();
                pattern_fill();
            }
        }
        printf("\n");
    }
}