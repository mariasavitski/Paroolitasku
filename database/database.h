

struct site
{
    int id;
    char *name;
    char *url;
    char *username;
    char *password;
};


struct site get(char *url);
void save(struct site);