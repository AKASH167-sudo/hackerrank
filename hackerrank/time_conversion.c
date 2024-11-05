char* timeConversion(char* s)
{
    char *military=(char*)malloc(8*sizeof(char));

    strncpy(military,s,6);

    military[6]='\0';

    if(s[0]=='1'&&s[1]=='2'&&s[8]=='A')
    {
        military[0]='0';
        military[1]='0';

        return military;
    }

    else if((s[8]=='A'&&(s[0]!='1'||s[1]!='2'))||(s[8]=='P'&&s[0]=='1'&&s[1]=='2'))
    {
        return military;
    }

    else if(s[8]=='P')
    {
        int sum=(s[0]-'0')*10+(s[1]-'0');
        sum+=12;

        military[0]=(sum/10)+'0';
        military[1]=(sum%10)+'0';
        
        return military;
    }

    return military;
}
