int i = 0;
    for (char ch : version1 )
    {
        if(ch=='.')  
        break;
        i++;
    }
    version1 = version1.substr(i);
    i = 0;
    for (char ch : version2 )
    {
        if(ch=='.')  
        break;
        i++;
    }
    version2 = version2.substr(i);

    string str1 = "";
    for (char ch : version1)
    {
        if (ch == '.')
            continue;
        
        str1 += ch;
    }
    string str2 = "";
    for (char ch : version2)
    {
        if (ch == '.')
            continue;
        
        
        str2 += ch;
    }
    i = 0;
    while (str1.size() > i && str1[i]  == '0')
    {
        i++;
    }
    str1 = str1.substr(i);

    i = 0;
    while (str2.size() > i && str2[i] == '0')
    {
        i++;
    }
    str2 = str2.substr(i);

    if (str1.empty())
        str1 = "0";
    if (str2.empty())
        str2 = "0";