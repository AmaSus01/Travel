# include<stdio.h>

typedef struct tour
{
    char *city_name;
    char *type_of_tour;
    char *start_data;
    char *end_data;
    struct tour *next;
} tour;

void display(tour *start){
    tour *i = start;
    for (; i!= NULL ; i = i->next ) {
        printf("Name: %s data: %s-%s\n",i->city_name, i->type_of_tour, i->start_data, i->end_data);
}
}

int main(){
    tour Paris = {"Paris", "touristic", "10.02.2020", "20.02.2020", NULL};
    tour Berlin = {"Berlin", "touristic","13.03.2020", "15.03.2020", NULL};
    tour Moscow = {"Moscow", "skiing", "4.01.2020", "26.01.2020", NULL};
    tour Madrid = {"Madrid", "touristic", "19.05.2020", "1.06.2020", NULL};
    tour Rome = {"Rome", "touristic", "18.06.2020", "20.06.2020", NULL};
    tour New_York ={"New-York", "touristic", "19.07.2020", "29.07.2020", NULL};
    tour Bali = {"Bali", "ocean_rest", "15.09.2020", "23.09.2020", NULL};

    Paris.next = &Berlin;
    Berlin.next = &Moscow;
    Moscow.next = &Madrid;
    Madrid.next = &Rome;
    Rome.next = &New_York;
    New_York.next = &Bali;
    tour Tokyo = {"Tokyo", "culture touristic","14.02.2020", "1.03.2020", NULL};
    Moscow.next = &Tokyo;
    Tokyo.next = &Madrid;
    display(&Paris);
return 0;
}
