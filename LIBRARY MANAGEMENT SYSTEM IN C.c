#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct reader
    {                  // Define structure reader
        int id;        // id stores reader id
        char name[40]; // name stores reader's name
        char due;      // due stores y/n for if any book is due by particular leader
        int dbid;      // dbid stores due book's id
    } rdr[10] = {0};   // rdr array is initialised with structure of reader

    struct book
    {                  // structure book defined
        int id;        // id here stores book id
        char name[40]; // name stores name of the book
        char name1[40];
        char name2[40];
        char name3[40];
        char author[20]; // author stores name of the author
        char author1[20];
        char avbl;  // avbl stores availability of the book as y/n
        int rid;    // rid stores reader id having the book
    } bk[20] = {0}; // bk array is initialised with structure of book

    int choice, searchid, searchid1, n, m; // some integer variables are declared to be used for performing different functions in program
    int password;
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n");
again:
    printf("\t\t             Enter your password. Hit enter to confirm: ");
    scanf("%d", &password);
    if (password == 12345)
    {
        do
        {
        again1:
            // do-while loop is used to return to main menu after every case is over.i.e.task is done
            system("cls");
            printf("\t\t\t###########################################################################");
            printf("\n\t\t\t############                                                   ############");
            printf("\n\t\t\t############      Library management System Project in C       ############");
            printf("\n\t\t\t############                                                   ############");
            printf("\n\t\t\t###########################################################################");
            printf("\n\n\n\t\t\t\t1. Add new book\t\t2. Search book\n\t\t\t\t3. Add new reader\t4. Search reader\n\t\t\t\t5. Issue book\t\t6. Submit book\n\t\t\t\t7. Delete book\t\t8. Delete reader\n\t\t\t\t9. List of books\t10. Exit\n\n\t\t\t\tEnter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {

            case 1: // Add a book
                for (int i = 0; i < 20; i++)
                {
                    if (bk[i].id == 0)
                    { // to find empty space in bk array
                        int books;
                        while (1)
                        {
                            system("cls");
                        start:
                            system("cls");
                            printf("\n       [Add new book]\n\n");
                            printf("Enter the number of words your book contains (max=3): ");
                            scanf("%d", &books);
                            if (books == 1)
                            {
                                system("cls");
                                printf("Enter the name of your book:");
                                scanf("%s", &bk[i].name1);
                                printf("\n\n\n");
                                break;
                            }
                            else if (books == 2)
                            {
                                printf("Enter the first word of your book:");
                                scanf("%s", &bk[i].name1);
                                printf("Enter the second word of your book:");
                                scanf("%s", &bk[i].name2);
                                printf("\n\n\n");

                                break;
                            }
                            else if (books == 3)
                            {
                                printf("Enter the first word of your book:");
                                scanf("%s", &bk[i].name1);
                                printf("Enter the second word of your book:");
                                scanf("%s", &bk[i].name2);
                                printf("Enter the third word of your book:");
                                scanf("%s", &bk[i].name3);
                                printf("\n\n\n");
                                break;
                            }
                            else
                            {
                                printf("invalid input/max 3 characters!!!\n\n");
                                goto start;
                            }
                        }
                        system("cls");
                        printf("\n      [AUTHOR] \n\n");
                        printf("Enter the first name of Author: ");
                        scanf("%s", &bk[i].author);
                        printf("Enter the last name of Author: ");
                        scanf("%s", &bk[i].author1);
                        system("cls");
                        printf("\n     [ID]\n\n");
                        printf("Enter book ID:\n");
                        scanf("%d", &bk[i].id);
                        bk[i].avbl = 'y'; // set availability to y
                        bk[i].rid = 0;    // set readers id to 0 as default
                        i = 20;           // to exit from for loop
                        system("cls");
                        printf("BOOK ADDED SUCCESSFULLY!\n\n");
                        system("pause");
                    }
                }
                break;

            case 2:
                system("cls");
                printf("\n\t[SEARCH BOOK]\n\n");
                printf("Enter book ID: ");
                scanf("%d", &searchid);
                n = 0;
                for (int i = 0; i < 20; i++)
                {
                    if (searchid == bk[i].id)
                    {
                        system("cls");
                        printf("\n");
                        printf("\n\t[Book Information]\n\nBook ID: %d\t\t\tBook's  Name:%s %s %s\nAuthor Name: %s %s\nAvailable: %c\t\t\tDue by Reader ID: %d\n", bk[i].id, bk[i].name1, bk[i].name2, bk[i].name3, bk[i].author, bk[i].author1, bk[i].avbl, bk[i].rid);
                        n++;
                        printf("\n");
                        system("pause");
                    }
                }
                if (n == 0)
                {
                    system("cls");
                    printf("\n");
                    printf("Book not found.\n\n");
                    printf("\n");
                    system("pause");
                }

                break;

            case 3:
                for (int i = 0; i < 10; i++)
                {
                    if (rdr[i].id == 0)
                    { // to search empty space in rdr array
                        system("cls");
                        printf("\n");
                        printf("\n\t[ADD NEW READER]\n\n");
                        printf("Enter Reader's name: ");
                        scanf("%s", rdr[i].name);
                        printf("Enter Reader id: ");
                        scanf("%d", &rdr[i].id);
                        rdr[i].due = 'n';
                        rdr[i].dbid = 0;
                        i = 10;
                        printf("Reader added successfully.\n\n");
                        printf("\n");
                        system("pause");
                    }
                }
                break;

            case 4:
                system("cls");
                printf("\n\t[SEARCH READER]\n\n");
                printf("Enter Reader ID: ");
                scanf("%d", &searchid);
                n = 0;
                for (int i = 0; i < 10; i++)
                {
                    if (searchid == rdr[i].id)
                    {
                        system("cls");
                        printf("\n\t[Reader Information]\n\nReader ID: %d\tReader Name: %s\nDue      : %c\t\tDue book ID: %d\n", rdr[i].id, rdr[i].name, rdr[i].due, rdr[i].dbid);
                        n++;
                        printf("\n");
                        system("pause");
                    }
                }
                if (n == 0)
                {
                    printf("\n");
                    system("cls");
                    printf("Reader not found.\n\n");
                    printf("\n");
                    system("pause");
                }
                break;

            case 5:
                system("cls");
                printf("\t\n[ISSUE BOOK]\n\n");
                printf("Enter book ID: ");
                scanf("%d", &searchid);
                printf("Enter reader ID: ");
                scanf("%d", &searchid1);
                n = 0;
                m = 0;
                for (int i = 0; i < 20; i++)
                {
                    if (searchid == bk[i].id && bk[i].avbl == 'y')
                    {
                        bk[i].avbl = 'n';
                        bk[i].rid = searchid1;
                        n++;
                        i = 20;
                    }
                }
                for (int i = 0; i < 10; i++)
                {
                    if (searchid1 == rdr[i].id && rdr[i].due == 'n')
                    {
                        rdr[i].due = 'y';
                        rdr[i].dbid = searchid;
                        m++;
                        i = 10;
                    }
                }
                if (n == 1 && m == 1)
                {
                    system("cls");
                    printf("\n");
                    printf("Book issued successfully.\n\n");
                    printf("\n");
                    system("pause");
                }
                else if (n == 1 && m == 0)
                {
                    for (int i = 0; i < 20; i++)
                    {
                        if (searchid == bk[i].id)
                        {
                            bk[i].avbl = 'y';
                            bk[i].rid = 0;
                            i = 20;
                        }
                    }
                    printf("\n");
                    system("cls");
                    printf("Book not issued.\nReader has a due book.\n\n");
                    printf("\n");
                    system("pause");
                }
                break;

            case 6:
                system("cls");
                printf("\n\t[SUBMIT BOOK]\n\n");
                printf("Enter book ID: ");
                scanf("%d", &searchid);
                for (int i = 0; i < 20; i++)
                {
                    if (searchid == bk[i].id)
                    {
                        bk[i].avbl = 'y';
                        searchid1 = bk[i].rid;
                        bk[i].rid = 0;
                    }
                }
                for (int i = 0; i < 10; i++)
                {
                    if (searchid1 == rdr[i].id)
                    {
                        rdr[i].due = 'n';
                        rdr[i].dbid = 0;
                    }
                }
                system("cls");
                printf("\n");
                printf("Book ID %d submitted successfully.\n\n", searchid);
                system("pause");
                break;

            case 7:

                system("cls");
                printf("\n\t[DELETE BOOK]\n\n");
                printf("Enter book ID to be deleted: ");
                scanf("%d", &searchid);
                n = 0;
                for (int i = 0; i < 20; i++)
                {
                    if (searchid == bk[i].id)
                    {
                        for (i = i; i < 20; i++)
                        {
                            bk[i] = bk[i + 1];
                        }
                        n++;
                    }
                }
                if (n != 0)
                {
                    system("cls");
                    printf("\n");
                    printf("Book ID %d deleted.\n\n", searchid);
                    system("pause");
                }
                else
                    system("cls");
                printf("\n");
                printf("Book not found.\n\n");
                system("pause");
                break;

            case 8:

                system("cls");
                printf("\n\t[DELETE READER]\n\n");
                printf("Enter reader ID to be deleted: ");
                scanf("%d", &searchid);
                n = 0;
                for (int i = 0; i < 10; i++)
                {
                    if (searchid == rdr[i].id)
                    {
                        for (i = i; i < 10; i++)
                        {
                            rdr[i] = rdr[i + 1];
                        }
                        n++;
                    }
                }
                if (n != 0)
                {
                    system("cls");
                    printf("Reader ID %d deleted.\n\n", searchid);
                    system("pause");
                }
                else
                    system("cls");
                printf("Reader not found.\n\n");
                system("pause");
                break;

            case 9:

                n = 0;
                for (int i = 0; i < 20; i++)
                {
                    if (bk[i].id != 0)
                    {
                        n++;
                    }
                }
                system("cls");
                printf("\n0x0x0x0x0x0x0x0x0x0x0x0x0x0x0x0x0x0x0[LIST OF BOOKS]0x0x0x0x0x0x0x0x0x0x0x0x0x0x0x0x0x0x0\n");
                printf("\n\t\t\t               [Book list]\n\t\t\t              [Total books] : %d\n\n", n);
                for (int i = 0; i < 20; i++)
                {
                    if (bk[i].id != 0)
                    {
                        printf("\t\t\t\t# ID        : %d\n\t\t\t\t# Name      : %s %s %s\n\t\t\t\t# Author    : %s %s\n\t\t\t\t# Available : %c\n\t\t\t\t# Reader ID : %d\n\n\t\t\t\t", bk[i].id, bk[i].name1,bk[i].name2,bk[i].name3, bk[i].author,bk[i].author1, bk[i].avbl, bk[i].rid);
                    }
                    system("pause");
                    system("cls");
                    goto again1;
                }
                break;

            case 10:

                system("cls");
                printf(">>> Phone Book in C <<< \n\n");
                printf("> Creators: **NIKHIL GUPTA** \n> Creators: **DHRUV SUNDAN**\n> Creators: **NITISH KUMAR**\n");
                printf("> Github: https://github.com/NikhilGupta777/Nikhil-Gupta\n");
                printf("\n\t\tTHANKYOU FOR USING THIS SOFTWARE!\n\n");
                system("pause");
                system("cls");
                exit(0);
                break;
            }

        }

        while (choice != 10);
    }
    else
    {
        printf("WRONG PASSWORD!!!\n\n");
        goto again;
    }
    return 0;
}