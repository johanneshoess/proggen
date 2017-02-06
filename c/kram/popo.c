
char *c[] = {
    "ENTER",
    "NEW",
    "POINT",
    "FIRST",
    "LEON"
};
char **cp[] = {  c+2, c+1, c+3, c+4, c+1, c+2, c };
char ***cpp[] = {cp, cp+3};
int main(void)
{
    printf("%s\n", **cpp[0]-4);
    printf("%s\n", *++*cpp[0]-3);
    printf("%s\n", **cpp[0]+6);
    printf("%s\n",**cpp[0]-6);
    printf("%s\n",cpp[1][2][-1]);
    printf("%s\n",cpp[1][2][-1] += 7);
    printf("%s\n",cpp[1][2][-1]);
    printf("%s\n",--**++cpp[0]);

    cpp[0][3][1] = '3';
    cpp[1][1][(int)(cpp[0][3][1])];
    //**--*++cpp[1]+2 -= 3;
//    printf("%s\n", **cpp[0]+4);
//    printf("%s\n", *++*cpp[0]-- +3);

    return(0);
}
