while (true)
{
    Stack<char> st = new Stack<char>();
    string str = Console.ReadLine();
    bool b = true;

    if (str[0] == '.')
    {
        break;
    }

    foreach (char c in str)
    {
        if (b == false)
        {
            break;
        }
        else
        {
            switch (c)
            {
                case '(':
                    st.Push('(');
                    break;
                case '[':
                    st.Push('[');
                    break;
                case ')':
                    if (st.TryPeek(out char top1) == false | top1 != '(')
                    {
                        b = false;
                    }
                    else
                    {
                        st.Pop();
                    }
                    break;
                case ']':
                    if (st.TryPeek(out char top2) == false | top2 != '[')
                    {
                        b = false;
                    }
                    else
                    {
                        st.Pop();
                    }
                    break;
            }
        }
    }
    Console.WriteLine(b == true && st.Count == 0? "yes" : "no");
}