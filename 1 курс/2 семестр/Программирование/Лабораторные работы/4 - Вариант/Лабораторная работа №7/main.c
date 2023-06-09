#include <stdio.h> /// ���������� �����-������
#include <locale.h> /// ����������� ��� �����������

//====================================================================================================

typedef struct
{
    char name[20]; /// �������� ������
    int cost; /// ��������� ������ �� ��
    int expirationDate; /// ���� �������� � �������
} typeCandy;

/// ������� ��������� ������ ������������� �������. �������� ������ ��� ������������ ������ � ���������� ������ �� ���� ������.
typeCandy* allocateMemoryDynamicArrayCandy (int size)
{
    typeCandy *variablePointer = (typeCandy*) malloc(size * sizeof(typeCandy));
    return variablePointer;
}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. ��������� ������������ ������ �������� � ������������ ������. ������ �� ����������
void fillDynamicArrayCandy (typeCandy *inputDynamicArray, int sizeDynamicArray)
{
    int i;
    for (i = 0; i < sizeDynamicArray; i++)
    {
        printf("������� �������� %d ������: ", i + 1);
        scanf("%s", &inputDynamicArray[i].name);
        printf("������� ��������� %d ������ � ��: ", i + 1);
        scanf("%d", &inputDynamicArray[i].cost);
        printf("������� ���� �������� %d ������ � �������: ", i + 1);
        scanf("%d", &inputDynamicArray[i].expirationDate);
    }
}

/// ������� ��������� ��������� �� ������������ ������, ��� ������ � ������� ���������. ������� � ������� ������� � �������� ���������. ������ �� ����������.
void limitCostCandy (typeCandy *inputDynamicArray, int sizeDynamicArray, int limitFrom, int limitTo)
{
    int i;
    for (i = 0; i < sizeDynamicArray; i++)
    {
        if (limitFrom <= inputDynamicArray[i].cost && inputDynamicArray[i].cost <= limitTo)
            printf("��������: %s \t ���������: %d \t C��� ��������: %d\n", inputDynamicArray[i].name, inputDynamicArray[i].cost, inputDynamicArray[i].expirationDate);
    }
}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. ������� � ������� ������� � ���������� ������ ��������. ������ �� ����������.
void maxExpirationDateCandy (typeCandy *inputDynamicArray, int sizeDynamicArray)
{
    int i;
    int maxExpirationDate = inputDynamicArray[0].expirationDate;
    for (i = 0; i < sizeDynamicArray; i++)
    {
        if (maxExpirationDate <= inputDynamicArray[i].expirationDate)
            maxExpirationDate = inputDynamicArray[i].expirationDate;
    }
    for (i = 0; i < sizeDynamicArray; i++)
    {
        if (maxExpirationDate == inputDynamicArray[i].expirationDate)
            printf("��������: %s \t ���������: %d \t C��� ��������: %d\n", inputDynamicArray[i].name, inputDynamicArray[i].cost, inputDynamicArray[i].expirationDate);
    }

}

//====================================================================================================

typedef struct
{
    char secondName[30]; /// �������
    char stydentClass; /// �����
    char subject[30]; /// �������
    int place; /// �����
} typeStydent;

/// ������� ��������� ������ ������������� �������. �������� ������ ��� ������������ ������ � ���������� ������ �� ���� ������.
typeStydent* allocateMemoryDynamicArrayStydent (int size)
{
    typeStydent *variablePointer = (typeStydent*) malloc(size * sizeof(typeStydent));
    return variablePointer;
}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. ��������� ������������ ������ �������� � ������������ ������. ������ �� ����������
void fillDynamicArrayStydent (typeStydent *inputDynamicArray, int sizeDynamicArray)
{
    int i;
    for (i = 0; i < sizeDynamicArray; i++)
    {
        printf("������� ������� %d �������: ", i + 1);
        scanf("%s", &inputDynamicArray[i].secondName);
        printf("������� ����� %d �������: ", i + 1);
        scanf(" %c", &inputDynamicArray[i].stydentClass); /// ���� �� ��������� ������ �� ������ � ���������� ������������ ���� ������
        printf("������� ������� %d �������: ", i + 1);
        scanf("%s", &inputDynamicArray[i].subject);
        printf("������� ����� %d �������: ", i + 1);
        scanf("%d", &inputDynamicArray[i].place);
    }
}

/// ������� ��������� ��������� �� ������������ ������, ��� ������ � �����. ������� � ������� ���������� � ��������� �������� ������������ �����. ������ �� ����������.
void printStydentCertainPlace (typeStydent *inputDynamicArray, int sizeDynamicArray, int place)
{
    int i;
    for (i = 0; i < sizeDynamicArray; i++)
    {
        if (inputDynamicArray[i].place == place)
            printf("�������: %s \t�����: %c \t�������: %s \t�����: %d\n", inputDynamicArray[i].secondName, inputDynamicArray[i].stydentClass, inputDynamicArray[i].subject, inputDynamicArray[i].place);
    }
}

//====================================================================================================

typedef struct
{
    char secondName[30]; /// �������. [1]
    int growth; /// ����. [2]
    int role; /// ������ [3] ("attack" - ���������� [1][2], "deender" - �������� [3][1], "center" - ��������� [2][3]).
    int number; /// �����. [4]
} typeBasketballTeam;

/// ������� ��������� ������ ������������� �������. �������� ������ ��� ������������ ������ � ���������� ������ �� ���� ������.
typeBasketballTeam* allocateMemoryDynamicArrayBasketballTeam (int size)
{
    typeBasketballTeam *variablePointer = (typeBasketballTeam*) malloc(size * sizeof(typeBasketballTeam));
    return variablePointer;
}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. ��������� ������������ ������ �������� � ������������ ������. ������ �� ����������
void fillDynamicArrayBasketballTeam (typeBasketballTeam *inputDynamicArray, int sizeDynamicArray)
{
    int i;
    for (i = 0; i < sizeDynamicArray; i++)
    {
        printf("������� ������� %d ������: ", i + 1);
        scanf("%s", &inputDynamicArray[i].secondName);
        printf("������� ���� %d ������: ", i + 1);
        scanf("%d", &inputDynamicArray[i].growth);
        printf("������� ������(1 - ��������; 2 - ����������; 3- ���������) %d ������: ", i + 1);
        scanf("%d", &inputDynamicArray[i].role);
        printf("������� ����� %d ������: ", i + 1);
        scanf("%d", &inputDynamicArray[i].number);
    }
}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. ������� ������ � �������. ������ �� ����������.
void printDynamicArrayBasketballTeam (typeBasketballTeam *inputDynamicArray, int sizeDynamicArray)
{
    int i;
    for (i = 0; i < sizeDynamicArray; i++)
    {
        printf(" \t %d \t %s \t \t %d ", i + 1, inputDynamicArray[i].secondName, inputDynamicArray[i].growth);
        switch (inputDynamicArray[i].role)
        {
            case 1:
                printf(" \t \t �������� "); break;
            case 2:
                printf(" \t \t ���������� "); break;
            case 3:
                printf(" \t \t ��������� "); break;
        }
        printf(" \t %d \n", inputDynamicArray[i].number);
    }
}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. ��������� ������. ������ �� ����������.
void sortDynamicArrayBasketballTeam (typeBasketballTeam *inputDynamicArray, int sizeDynamicArray)
{
    int i, j, k, variableSort;
    typeBasketballTeam variableForTypeBasketballTeam;
    printf("������� � ������� ��� ����������: ");
    scanf("%d", &variableSort);
    switch (variableSort)
    {
        case 1:
            for (i = 0; i < sizeDynamicArray - 1; i++) /// ���������� �� �����
            {
                for (j = i + 1; j < sizeDynamicArray; j++)
                {
                    variableForTypeBasketballTeam = inputDynamicArray[i];
                    for (k = 0; variableForTypeBasketballTeam.secondName[k] != '\0' || inputDynamicArray[j].secondName[k] != '\0'; k++)
                    {
                        if (variableForTypeBasketballTeam.secondName[k] < inputDynamicArray[j].secondName[k])
                            break;
                        else if (variableForTypeBasketballTeam.secondName[k] > inputDynamicArray[j].secondName[k])
                        {
                            inputDynamicArray[i] = inputDynamicArray[j];
                            inputDynamicArray[j] = variableForTypeBasketballTeam;
                            break;
                        }
                    }
                }
            }
            break;
        case 2:
            for (i = 0; i < sizeDynamicArray - 1; i++) /// ���������� �� �����
            {
                for (j = i + 1; j < sizeDynamicArray; j++)
                {
                    variableForTypeBasketballTeam = inputDynamicArray[i];
                    if(variableForTypeBasketballTeam.growth > inputDynamicArray[j].growth)
                    {
                        inputDynamicArray[i] = inputDynamicArray[j];
                        inputDynamicArray[j] = variableForTypeBasketballTeam;
                    }
                }
            }
            break;
        case 3:
            for (i = 0; i < sizeDynamicArray - 1; i++) /// ���������� �� ������
            {
                for (j = i + 1; j < sizeDynamicArray; j++)
                {
                    variableForTypeBasketballTeam = inputDynamicArray[i];
                    if(variableForTypeBasketballTeam.role > inputDynamicArray[j].role)
                    {
                        inputDynamicArray[i] = inputDynamicArray[j];
                        inputDynamicArray[j] = variableForTypeBasketballTeam;
                    }
                }
            }
            break;
        case 4:
            for (i = 0; i < sizeDynamicArray - 1; i++) /// ���������� �� ������
            {
                for (j = i + 1; j < sizeDynamicArray; j++)
                {
                    variableForTypeBasketballTeam = inputDynamicArray[i];
                    if(variableForTypeBasketballTeam.number > inputDynamicArray[j].number)
                    {
                        inputDynamicArray[i] = inputDynamicArray[j];
                        inputDynamicArray[j] = variableForTypeBasketballTeam;
                    }
                }
            }
            break;
    }

}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. �������� ������. ������ �� ����������.
void changeDynamicArrayBasketballTeam (typeBasketballTeam *inputDynamicArray, int sizeDynamicArray)
{
    int i, variableNumber;
    printf("������� ����� ������ ��� ���������: ");
    scanf("%d", &variableNumber);
    for (i = 0; i < sizeDynamicArray; i++)
    {
        if (i + 1 == variableNumber)
        {
            printf("������� ������� %d ������: ", i + 1);
            scanf("%s", &inputDynamicArray[i].secondName);
            printf("������� ���� %d ������: ", i + 1);
            scanf("%d", &inputDynamicArray[i].growth);
            printf("������� ������(�������� - 1; ���������� - 2; ��������� - 3) %d ������: ", i + 1);
            scanf("%d", &inputDynamicArray[i].role);
            printf("������� ����� %d ������: ", i + 1);
            scanf("%d", &inputDynamicArray[i].number);
        }
    }
}

//====================================================================================================

typedef struct
{
    char secondName[30]; /// �������.
    char courseName[30]; /// �������� �����.
    char courseDuration[5]; /// ������������ ����� � �������.
} typeCourses;

/// ������� ��������� ������ ������������� �������. �������� ������ ��� ������������ ������ � ���������� ������ �� ���� ������.
typeCourses* allocateMemoryDynamicArrayCourses (int size)
{
    typeCourses *variablePointer = (typeCourses*) malloc(size * sizeof(typeCourses));
    return variablePointer;
}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. ��������� ������������ ������ �������� � ������������ ������. ������ �� ����������
void fillDynamicArrayCourses (typeCourses *inputDynamicArray, int sizeDynamicArray)
{
    int i;
    for (i = 0; i < sizeDynamicArray; i++)
    {
        printf("������� ������� %d ����������: ", i + 1);
        scanf("%s", &inputDynamicArray[i].secondName);
        printf("������� �������� ����� %d ����������: ", i + 1);
        scanf("%s", &inputDynamicArray[i].courseName);
        printf("������� ������������ ����� � ������� %d ����������: ", i + 1);
        scanf("%s", &inputDynamicArray[i].courseDuration);
    }
}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. ������� ������ � �������. ������ �� ����������.
void printDynamicArrayCourses (typeCourses *inputDynamicArray, int sizeDynamicArray)
{
    int i;
    for (i = 0; i < sizeDynamicArray; i++)
    {
        printf("\t %d \t %s \t \t %s \t \t \t %s\n", i + 1, inputDynamicArray[i].secondName, inputDynamicArray[i].courseName, inputDynamicArray[i].courseDuration);
    }
}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. ��������� ������. ������ �� ����������.
void sortDynamicArrayCourses (typeCourses *inputDynamicArray, int sizeDynamicArray)
{
    int i, j, k, variableSort;
    typeCourses variableForTypeCourses;
    printf("������� � ������� ��� ����������: ");
    scanf("%d", &variableSort);
    switch (variableSort)
    {
        case 1:
            for (i = 0; i < sizeDynamicArray - 1; i++) /// ���������� �� �������.
            {
                for (j = i + 1; j < sizeDynamicArray; j++)
                {
                    variableForTypeCourses = inputDynamicArray[i];
                    for (k = 0; variableForTypeCourses.secondName[k] != '\0' || inputDynamicArray[j].secondName[k] != '\0'; k++)
                    {
                        if (variableForTypeCourses.secondName[k] < inputDynamicArray[j].secondName[k])
                            break;
                        else if (variableForTypeCourses.secondName[k] > inputDynamicArray[j].secondName[k])
                        {
                            inputDynamicArray[i] = inputDynamicArray[j];
                            inputDynamicArray[j] = variableForTypeCourses;
                            break;
                        }
                    }
                }
            }
            break;
        case 2:
            for (i = 0; i < sizeDynamicArray - 1; i++) /// ���������� �� �������� �����.
            {
                for (j = i + 1; j < sizeDynamicArray; j++)
                {
                    variableForTypeCourses = inputDynamicArray[i];
                    for (k = 0; variableForTypeCourses.courseName[k] != '\0' || inputDynamicArray[j].courseName[k] != '\0'; k++)
                    {
                        if (variableForTypeCourses.courseName[k] < inputDynamicArray[j].courseName[k])
                            break;
                        else if (variableForTypeCourses.courseName[k] > inputDynamicArray[j].courseName[k])
                        {
                            inputDynamicArray[i] = inputDynamicArray[j];
                            inputDynamicArray[j] = variableForTypeCourses;
                            break;
                        }
                    }
                }
            }
            break;
        case 3:
            for (i = 0; i < sizeDynamicArray - 1; i++) /// ���������� �� ������������ �����.
            {
                for (j = i + 1; j < sizeDynamicArray; j++)
                {
                    variableForTypeCourses = inputDynamicArray[i];
                    for (k = 0; variableForTypeCourses.courseDuration[k] != '\0' || inputDynamicArray[j].courseDuration[k] != '\0'; k++)
                    {
                        if (variableForTypeCourses.courseDuration[k] < inputDynamicArray[j].courseDuration[k])
                            break;
                        else if (variableForTypeCourses.courseDuration[k] > inputDynamicArray[j].courseDuration[k])
                        {
                            inputDynamicArray[i] = inputDynamicArray[j];
                            inputDynamicArray[j] = variableForTypeCourses;
                            break;
                        }
                    }
                }
            }
            break;
    }
}

/// ������� ��������� ��������� �� ������������ ������ � ��� ������. ������� ������ �������� � �������. ������ �� ����������.
void searchInDynamicArrayCourses (typeCourses *inputDynamicArray, int sizeDynamicArray)
{
    int i, j;
    int variableBoolen = 1; /// true
    int variableError = 1; /// true
    char variableForSearch[30];
    printf("�����: ");
    scanf("%s", &variableForSearch);
    for (i = 0; i < sizeDynamicArray; i++)
    {
//====================================================================================================
        for (j = 0; inputDynamicArray[i].secondName[j] != '\0' || variableForSearch[j] != '\0'; j++)
        {
            if (inputDynamicArray[i].secondName[j] != variableForSearch[j])
            {
                variableBoolen = 0; /// false
                break;
            }
        }
        if (variableBoolen == 1)
        {
            printf(" \t �: \t �������: \t �������� �����: \t ������������ �����:\n");
            printf("\t %d \t %s \t \t %s \t \t \t %s\n", i + 1, inputDynamicArray[i].secondName, inputDynamicArray[i].courseName, inputDynamicArray[i].courseDuration);
            variableError = 0; /// false
            break;
        }
        variableBoolen = 1; /// true
//====================================================================================================
        for (j = 0; inputDynamicArray[i].courseName[j] != '\0' || variableForSearch[j] != '\0'; j++)
        {
            if (inputDynamicArray[i].courseName[j] != variableForSearch[j])
            {
                variableBoolen = 0; /// false
                break;
            }
        }
        if (variableBoolen == 1)
        {
            printf(" \t �: \t �������: \t �������� �����: \t ������������ �����:\n");
            printf("\t %d \t %s \t \t %s \t \t \t %s\n", i + 1, inputDynamicArray[i].secondName, inputDynamicArray[i].courseName, inputDynamicArray[i].courseDuration);
            variableError = 0; /// false
            break;
        }
        variableBoolen = 1; /// true
//====================================================================================================
        for (j = 0; inputDynamicArray[i].courseDuration[j] != '\0' || variableForSearch[j] != '\0'; j++)
        {
            if (inputDynamicArray[i].courseDuration[j] != variableForSearch[j])
            {
                variableBoolen = 0; /// false
                break;
            }
        }
        if (variableBoolen == 1)
        {
            printf(" \t �: \t �������: \t �������� �����: \t ������������ �����:\n");
            printf("\t %d \t %s \t \t %s \t \t \t %s\n", i + 1, inputDynamicArray[i].secondName, inputDynamicArray[i].courseName, inputDynamicArray[i].courseDuration);
            variableError = 0; /// false
            break;
        }
        variableBoolen = 1; /// true
//====================================================================================================
    }
    if (variableError == 1)
        printf("������ �� �������\n");
}

//====================================================================================================
main()
{
    setlocale(LC_ALL, "Rus"); /// ���������� ������� ����
//====================================================================================================
    int number, limitFrom, limitTo;
    printf("������� ���������� �������: ");
    scanf("%d", &number);
    typeCandy *assortiment = allocateMemoryDynamicArrayCandy(number); /// �������� ������ ��� ������������ ������.
    fillDynamicArrayCandy(assortiment, number);
    printf("������� ������ ���������:\n��:");
    scanf("%d", &limitFrom);
    printf("��: ");
    scanf("%d", &limitTo);
    limitCostCandy(assortiment, number, limitFrom, limitTo);
    printf("������� � ���������� ������ ��������:\n");
    maxExpirationDateCandy(assortiment, number);
    free(assortiment); /// ����������� ������.
    assortiment = NULL; /// ����������� ������.
    system("pause"); /// ���������� �������. ������ ������� �� �����.
    system("cls"); /// ���������� �������. �������� �������.
//====================================================================================================
    int place; /// �����
    printf("������� ���������� �������: ");
    scanf("%d", &number);
    typeStydent *stydents = allocateMemoryDynamicArrayStydent(number); /// �������� ������ ��� ������������ ������
    fillDynamicArrayStydent(stydents, number);
    printf("������� �����: ");
    scanf("%d", &place);
    printStydentCertainPlace(stydents, number, place);
    free(stydents); /// ����������� ������.
    stydents = NULL; /// ����������� ������.
    system("pause"); /// ���������� �������. ������ ������� �� �����.
    system("cls"); /// ���������� �������. �������� �������.
//====================================================================================================
    char variableForSelect; /// ���������� ��� ������
    int variableForExit = 0; /// ���������� ��� ������
    printf("������� ���������� �������: ");
    scanf("%d", &number);
    typeBasketballTeam *basketballTeam = allocateMemoryDynamicArrayBasketballTeam(number); /// �������� ������ ��� ������������ ������
    fillDynamicArrayBasketballTeam(basketballTeam, number); /// ��������� ������
    system("pause"); /// ���������� �������. ������ ������� �� �����.
    system("cls"); /// ���������� �������. �������� �������.
    printf(" \t �: \t �������: \t ����: \t \t ������: \t �����:\n");
    printDynamicArrayBasketballTeam(basketballTeam, number); /// ������� ������
    while (variableForExit != 1)
    {
        printf("�������� ��������:\n1. �����������\n2. ��������\n3. �����\n");
        variableForSelect = getch();
        switch (variableForSelect)
        {
            case '1':
                sortDynamicArrayBasketballTeam(basketballTeam, number); /// ������� ��� ����������
                system("cls"); /// ���������� �������. �������� �������.
                printf(" \t �: \t �������: \t ����: \t \t ������: \t �����:\n");
                printDynamicArrayBasketballTeam(basketballTeam, number); /// ������� ������
                break;
            case '2':
                changeDynamicArrayBasketballTeam(basketballTeam, number); /// �������� ������
                system("cls"); /// ���������� �������. �������� �������.
                printf(" \t �: \t �������: \t ����: \t \t ������: \t �����:\n");
                printDynamicArrayBasketballTeam(basketballTeam, number); /// ������� ������
                break;
            case '3':
                variableForExit = 1;
                break;
        }
    }
    free(basketballTeam); /// ����������� ������.
    basketballTeam = NULL; /// ����������� ������.
    system("pause"); /// ���������� �������. ������ ������� �� �����.
    system("cls"); /// ���������� �������. �������� �������.
//====================================================================================================
    variableForExit = 0;
    printf("������� ���������� �������: ");
    scanf("%d", &number);
    typeCourses *courses = allocateMemoryDynamicArrayCourses(number); /// �������� ������ ��� ������������ ������
    fillDynamicArrayCourses(courses, number); /// ��������� ������
    system("pause"); /// ���������� �������. ������ ������� �� �����.
    system("cls"); /// ���������� �������. �������� �������.
    printf(" \t �: \t �������: \t �������� �����: \t ������������ �����:\n");
    printDynamicArrayCourses(courses, number); /// ������� ������
    while (variableForExit != 1)
    {
        printf("�������� ��������:\n1. �����������\n2. �����\n3. �����\n");
        variableForSelect = getch();
        switch (variableForSelect)
        {
            case '1':
                sortDynamicArrayCourses(courses, number); /// ������� ��� ����������
                system("cls"); /// ���������� �������. �������� �������.
                printf(" \t �: \t �������: \t �������� �����: \t ������������ �����:\n");
                printDynamicArrayCourses(courses, number); /// ������� ������
                break;
            case '2':
                searchInDynamicArrayCourses(courses, number); /// ������� ��� ������
                system("pause"); /// ���������� �������. ������ ������� �� �����.
                system("cls"); /// ���������� �������. �������� �������.
                printf(" \t �: \t �������: \t �������� �����: \t ������������ �����:\n");
                printDynamicArrayCourses(courses, number); /// ������� ������
                break;
            case '3':
                variableForExit = 1;
                break;
        }
    }
    free(courses); /// ����������� ������.
    courses = NULL; /// ����������� ������.
//====================================================================================================
    return 0;
}
