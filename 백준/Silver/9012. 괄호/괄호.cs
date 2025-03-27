int n = int.Parse(Console.ReadLine()), openCnt;
for(int i = 0;i<n;i++){
    openCnt = 0;
    var str = Console.ReadLine();
    foreach(var c in str)
        if(c == '(') openCnt++;
        else if(c == ')' && --openCnt < 0)
            break;
    Console.WriteLine(openCnt==0?"YES":"NO");
}