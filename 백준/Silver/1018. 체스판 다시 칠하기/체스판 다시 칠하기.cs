var tmp = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
var cbInfo = new { n = tmp[0], m = tmp[1] };
string[] chessboard = new string[cbInfo.n];

int minCnt = -1, c = 0;
for (int i = 0; i < cbInfo.n; i++)
    chessboard[i] = Console.ReadLine();


for (int y = 0; y < cbInfo.n - 7; y++)
{
    for (int x = 0; x < cbInfo.m - 7; x++)
    {
        int tmpCnt;
        c++;
        
        if ((tmpCnt = getCnt(chessboard, minCnt, x, y)) != -1)
            minCnt = tmpCnt;
    }
}
// Console.Write($"minCnt: {minCnt}, C : {c}");
Console.Write(minCnt);

int getCnt(string[] cb, int min, int x, int y)
{
    int tmp_W = 0, tmp_B = 0;
    bool check = true;
    char fc_W = 'W', fc_B = 'B';
    for (int i = 0+y; i < 8+y; i++)
    {
        for (int j = 0+x; j < 8+x; j++)
        {
            
            if((i - y)%2==0){ // 실제로는 홀수번째 행
                if((j - x)%2==0){ // 실제로는 홀수번째 열
                    if(cb[i][j] != fc_W){
                        // Console.WriteLine($"cb: {cb[i][j]} fcW: {fc_W}");
                        tmp_W++;
                    }
                        
                    if(cb[i][j] != fc_B){
                        // Console.WriteLine($"cb: {cb[i][j]} fcB: {fc_B}");
                        tmp_B++;
                    }
                        
                }
                else{ // 실제로는 짝수번째 열
                    if(cb[i][j] == fc_W){
                        // Console.WriteLine($"cb: {cb[i][j]} fc: {fc_W}");
                        tmp_W++;
                    }
                        
                    if(cb[i][j] == fc_B){
                        // Console.WriteLine($"cb: {cb[i][j]} fcB: {fc_B}");
                        tmp_B++;
                    }
                        
                }
            }
            else{ // 실제로는 짝수번째 행
                if((j-x)%2==0){ // 짝홀
                    if(cb[i][j] == fc_W)
                        tmp_W++;
                    if(cb[i][j] == fc_B){
                        // Console.WriteLine($"cb: {cb[i][j]} fcB: {fc_B}");
                        tmp_B++;
                    }
                        
                }
                else{ // 짝짝
                    if(cb[i][j] != fc_W)
                        tmp_W++;
                    if(cb[i][j] != fc_B){
                        tmp_B++;
                    }
                        
                }
            }
            if (tmp_W >= min && tmp_B >= min && min != -1)
            {
                check = false;
                break;
            }
        }
    }
    if (check){
        // Console.WriteLine($"b : {tmp_B} w: {tmp_W}");
        if(tmp_B < tmp_W)
            return tmp_B;
        else if(tmp_W < tmp_B)
            return tmp_W;
        else
            return tmp_W;
    }
        
    else{
        // Console.WriteLine("return -1");
        return -1;
    }
        
}