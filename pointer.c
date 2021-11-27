#include <stdio.h>
#include <string.h>

struct Student
{
    char name[21];
    char father_name[21];
    int age;
    int class;
    int role_number;
    char contact[21];
};

void copy_array(char to[], int len_of_to, char from[])
{
    /*
        Can't use strlen here because toothpick.name contains garbage and also includes null character.
        By null character we mean a 0 value. That's why strlen will just return length up-to that first null character.
        So in this case, strlen will not return 20 (which is the size of toothpick.name array).
    */
    //int len_of_to = strlen(to);

    /*
        to is basically a char pointer which is pointing to passed char array. that's why
        sizeof(to) will actually return size of a char pointer. the size of pointer on this machine
        is 8 byte. So sizeof(to) will give 8 and not the actual size of passed char array.
    */
    //int len_of_to = sizeof(to);

    printf("len_of_to=%d\n", len_of_to);
    int i = 0;
    for (i = 0; i < len_of_to - 1; i++)
    {
        to[i] = from[i];
    }
    to[i] = '\0';
}
void print_char_array(char a[], int len)
{
    int i = 0;
    for (i = 0; i < len; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    /*
        Here sizeof(records) will return actual size of recrods array. because we are passing the
        name of the array to sizeof.
    */
//    char records[20];
//    int len_of_records = sizeof(recrods);
//    printf("len_of_records=%d\n", len_of_record);

//    unsigned long long temp = 0xffffffffffffffff;
//    char records[] = "Mrs Syed Mustafa";
//    unsigned long long temp2 = 0xeeeeeeeeeeeeeeee;
//    unsigned long long temp3 = 0xbbbbbbbbbbbbbbbb;
//
//    printf("sizeof(records)=%d\n", sizeof(records));
//    printf("strlen(records)=%d\n", strlen(records));
//    char * first_index_ptr = &records[0];

//    char * first_index_ptr;
//    first_index_ptr = &records[0];
    //printf("address of records: %x, address of temp: %x\n, address of temp2: %x\n", first_index_ptr, &temp, &temp2);
//    int i = 0;
//    for (i = 0; i < 25; i++)
//    {
//        printf("%.2x\n", *ptr);
//        ptr++;
//    }
//    char records2[16] = "Mr Syed Mustafa Raza";
//    printf("sizeof(records2)=%d\n", sizeof(records2));
//    printf("strlen(records2)=%d\n", strlen(records2));


    struct Student toothpick;
    //print_char_array(toothpick.name, 20);

    //copy_array(toothpick.name, sizeof(toothpick.name), "Mustafa Raza Zaidi Syed Thookon Wali Sarkaar");  // toothpick.name = "Mustafa Raza";
    copy_array(toothpick.name, sizeof(toothpick.name), "Mustafa Raza Zaidi");  // toothpick.name = "Mustafa Raza";
    copy_array(toothpick.father_name, sizeof(toothpick.father_name), "Sajjad Raza");
    toothpick.age = 6;
    toothpick.class = 1;
    toothpick.role_number = 12;
    copy_array(toothpick.contact, sizeof(toothpick.contact), "0333123456");

    printf("Name of student toothpick is %s\n", toothpick.name);
    printf("Father's name of student toothpick is %s\n", toothpick.father_name);
    printf("age of student toothpick is %d\n", toothpick.age);

    return 0;
}
