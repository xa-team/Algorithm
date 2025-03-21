int getGongyaksu(int a, int b){
    if(a%b == 0)
        return b;
    else
        return getGongyaksu(b, a%b);
}

int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int x = getGongyaksu(n[0], n[1]);
Console.WriteLine($"{x}\n{n[1]*n[0]/x}");