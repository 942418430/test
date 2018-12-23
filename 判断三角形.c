int abc(int a, int b, int c)
{
    if ((a + b > c) && (b + c > a) && (a + c > b))
            { // 判断为三角形 
                if ((a == b) && (b == c)) // 判断为等边三角形 
                    return 3;
                if ((a == b) || (b == c) || (a == c)) // 判断为等腰三角形 
                    return 2;
                else // 判断为普通三角形 
                    return 1;
            }
            else
            { // 为非三角形 
                return 0;
            }
}
