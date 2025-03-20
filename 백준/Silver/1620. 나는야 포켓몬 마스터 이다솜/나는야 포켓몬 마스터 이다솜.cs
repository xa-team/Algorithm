using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int[] n = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
Dictionary<string, string> pokedex = new Dictionary<string, string>();
string id, name;
for(int i = 1; i <= n[0]; i++){
    id = i.ToString();
    name = sr.ReadLine();
    pokedex.Add(id, name);
    pokedex.Add(name, id);
}
for(int i = 0; i < n[1]; i++)
    sw.WriteLine(pokedex[sr.ReadLine()]);