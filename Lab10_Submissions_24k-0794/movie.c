#include<stdio.h>
#include<string.h>
#define mcount 100
typedef struct movie
{
    char title[50];
    char genre[20];
    char director[30];
    int release_year;
    float rating;
}movie;
void add_movies(movie* m,int* ind)
{
    if(*ind>=mcount)
    {
        printf("maximum movies added!");
        return;
    }
    else
    {
    printf("Enter the title of the movie: ");
    scanf(" %[^\n]",m[*ind].title);
    printf("Enter the genre of the movie: ");
    scanf(" %[^\n]",m[*ind].genre);
    printf("Director of the movie: ");
    scanf(" %[^\n]",m[*ind].director);
    printf("Enter the release year of the movie: ");
    scanf("%d",&m[*ind].release_year);
    printf("Enter the ratings of the movie: ");
    scanf("%f",&m[*ind].rating);
    printf("movie added succesfully! ");
    (*ind)++;
    }
}
void display(movie* m,int ind)
{
    int i;
    for(i=0;i<ind;i++)
    {
        printf("\nRecord %d",i+1);
        printf("\nTitle: %s\n",m[i].title);
        printf("Genre: %s\n",m[i].genre);
        printf("Director: %s\n",m[i].director);
        printf("Release Year: %d\n",m[i].release_year);
        printf("Ratings: %f\n",m[i].rating);
    }
}
void updatebygenre(movie* m,int ind)
{
    int i,found;
    char g[20];
    printf("Search by genre: ");
    scanf(" %[^\n]",g);
    for(i=0;i<ind;i++)
    {
        found=0;
        if(strcmp(m[i].genre,g)==0)
        {
            found=1;
        }
    if(found)
    {
        printf("\nRecord %d",i+1);
        printf("\nTitle: %s\n",m[i].title);
        printf("Genre: %s\n",m[i].genre);
        printf("Director: %s\n",m[i].director);
        printf("Release Year: %d\n",m[i].release_year);
        printf("Ratings: %f\n",m[i].rating);
    }
    }
    if(!found)
        printf("Record not found!\n");
}
int main()
{
    int ind=0;
    movie m[mcount];
    int ch;
    while(1)
    {
    printf("Choose from following: \n");
    printf("1. Add Record\n");
    printf("2. Search by Genre\n");
    printf("3. Display all records\n");
    printf("Any other key to exit\n");
    printf("choice: ");
    scanf("%d",&ch);
    if(ch<1 || ch>3)
    {
        break;
    }
    switch(ch)
    {
        case 1:
        add_movies(m,&ind);
        printf("\n\n");
        break;
        case 2:
        updatebygenre(m,ind);
        printf("\n\n");
        break;
        case 3:
        display(m,ind);
        printf("\n\n");
    }
    }
    return 0;
}
