while(true){
    int[] triangleArr = new int[3];
    triangleArr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
    Array.Sort(triangleArr);
    if(triangleArr[0] == 0)
        break;
    else if((Math.Pow(triangleArr[0], 2) + Math.Pow(triangleArr[1], 2)) == Math.Pow(triangleArr[2], 2))
        Console.WriteLine("right");
    else
        Console.WriteLine("wrong");
}