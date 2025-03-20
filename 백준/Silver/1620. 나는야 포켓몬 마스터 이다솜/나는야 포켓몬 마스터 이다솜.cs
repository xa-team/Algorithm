using System;
using System.Collections.Generic;

class BiDictionary<TKey, TValue>
{
    private Dictionary<TKey, TValue> forward = new Dictionary<TKey, TValue>();
    private Dictionary<TValue, TKey> backward = new Dictionary<TValue, TKey>();

    public void Add(TKey key, TValue value)
    {
        forward[key] = value;
        backward[value] = key;
    }

    public TValue GetValue(TKey key) => forward[key];
    public TKey GetKey(TValue value) => backward[value];
}

class Program{
    static void Main(){
        int[] numList = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        BiDictionary<string, int> pokedex = new BiDictionary<string, int>();
        for(int i = 0; i < numList[0]; i++)
            pokedex.Add(Console.ReadLine(), i+1);
        for(int i = 0; i < numList[1]; i++){
            string a = Console.ReadLine();
            if(int.TryParse(a, out int PokemonIndex))
                Console.WriteLine(pokedex.GetKey(PokemonIndex));
            else
               Console.WriteLine(pokedex.GetValue(a));
        }
    }
}
