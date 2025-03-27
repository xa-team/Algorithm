int n = int.Parse(Console.ReadLine()), openCnt, closedCnt;
for(int i = 0;i<n;i++){
    openCnt = 0;
    closedCnt = 0;
    var str = Console.ReadLine();
    for(int j=0;j<str.Length;j++){
        if(str[j] == '(') openCnt++;
        else if(str[j] == ')'){
            if(--openCnt < 0)
                break;
        }
    }
    Console.WriteLine(openCnt==0?"YES":"NO");
}