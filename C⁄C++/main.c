
int main()
{

    int n;
    scanf("%d", &n);
    getchar();

    char String[n][105];

    for (int i = 0; i < n; i++)
    {
        fgets(String[i], sizeof(String[i]), stdin);
        String[i][strcspn(String[i], "\n")] = '\0';
    }

    for (int i = 0; i < n; i++)
    {
        int length = strlen(String[i]);
        if (length <= 10)
        {
            printf("%s\n", String[i]);
        }
        else
        {
            printf("%c%d%c\n", String[i][0], length - 2, String[i][length - 1]);
        }
    } 