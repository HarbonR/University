#include <stdio.h> /// ���������� �����-������.
#include <stdlib.h> /// ����������� ����������.
#include <locale.h> /// ���������� ��� ����������� ������.
#include <conio.h> /// ���������� ������� ��� ������ � ������, �������.
#include <string.h> /// ���������� ��� ������ �� ��������.
#include <time.h> /// ���������� ��� ������ �� ��������.

//====================================================================================================
/// ������� ��� ������� 4 �� 1 �����.

/// ������� ��������� ������ � ����������. ��������� ������ ������������ ������. ������ �� ����������.
void fillStringZeros (char *inputString, int lengthString)
{
    int i;
    for (i = 0; i < lengthString; i++)
        inputString[i] = '\0';
}

/// ������� ��������� ������. ��������� ���� �� � ����� ������ ������. ���� ��� ���������. ������ �� ����������.
void spaseInEndString (char *inputString)
{
    int i;
    int counter = 0;
    for (i = 0; inputString[i] != '\0'; i++)
        counter++;
    if (inputString[counter-1] != ' ')
    {
        inputString[counter] = ' ';
        inputString[counter+1] = '\0';
    }
}

/// ������� ��������� ������ � ��������� �����. ������� � ������� ����� � ���������� ����������� ��������� ����. ������ �� ����������.
void printStringWithMostLetters (char *inputString, char *inputLetters)
{
    int i,j,k;
    char variableString[40]; /// ���������� ������.
    int counterForVariableString = 0; /// ������� ��� ���������� ������.
    fillStringZeros(variableString, 40); /// �������� ������.
    char stringWithMaxNumberLetters[40] = "��� ����� ����";
    int counterMaxLetters = 0; /// ������� ��� ����� � ������������ ����������� ��������� ����.
    int counterLetters = 0; /// ������� ��� �������� ���������� ��������� ���� � �����.
    for (i = 0; inputString[i] != '\0'; i++) /// ���� ������ �� ������� ��� �������� i �� ����� ����� ������������ ���� ���������
    {
        if (inputString[i] == ' ')
        {
            for(j = 0;  inputLetters[j] != '\n'; j++) /// ���� ������ �� ������� ��������� ���� ��� �������� i �� ����� ����� �������� �� ����� ������ ���������
            {
                for (k = 0; k < counterForVariableString; k++)
                {
                    if (inputLetters[j] == variableString[k])
                        counterLetters++;
                }
            }
            if (counterLetters > counterMaxLetters)
            {
                counterMaxLetters = counterLetters;
                strcpy(stringWithMaxNumberLetters, variableString); /// �������� ������ variableString � ������ stringWithMaxNumberLetters.
            }
            counterLetters = 0; /// �������� �������.
            counterForVariableString = 0; /// �������� �������.
            fillStringZeros(variableString, 40); /// �������� ������.
        }
        else
        {
            variableString[counterForVariableString] = inputString[i];
            counterForVariableString++;
        }
    }
    printf("%s\n", stringWithMaxNumberLetters);
}

//====================================================================================================
/// ������� ��� ������� 14 ����� 1.

/// ������� ��������� ������ � ��������� � ��������� ����� ����. ������ �� ����������.
void fillStingThroughOneCharacter (char *inputString)
{
    char variableString[256];
    int i;
    int j = 0;
    int variableX = 1;
    for (i = 0; inputString[i] != '\0'; i++)
    {
        if (variableX == 1)
        {
            variableString[j] = inputString[i];
            j++;
        }
        variableX = (variableX + 1) % 2;
    }
    strcpy(inputString, variableString);
}

//====================================================================================================
/// ������� ��� ������� 4 ����� 2.

/// ������� ��������� ������ � �����. �������� ������������ ������. ���������� ������ �� ���������� ������������ ������.
int* mallocDynamicArrayTypeInt (int numberElements)
{
    return (int*)malloc(numberElements * sizeof(int));
}

/// ������� ��������� ������ � �����. ��������� ������ ���������� �������. ������ �� ����������.
void fillArrayRandomNumbers (int *inputArrayTypeInt, int numberElements)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < numberElements; i++)
        inputArrayTypeInt[i] = rand() % 18 + (-9);
}

/// ������� ��������� ������ � �����. ������� ������ � �������. ������ �� ����������.
void printArrayTypeInt (int *inputArrayTypeInt, int numberElements)
{
    int i;
    for (i = 0; i < numberElements; i++)
        printf("%d ", inputArrayTypeInt[i]);
    printf("\n");
}

/// ������� ��������� ������ � ���������� ���������. ���������� ���������� ��������������� ���������. ���������� ���������� ��������������� ��������� * 2.
int countOppositeNumbers (int *inputArrayTypeInt, int numberElements)
{
    int i,j;
    int counter = 0;
    for (i = 0; i < numberElements - 1; i++)
    {
        for (j = i+1; j < numberElements; j++)
        {
            if(inputArrayTypeInt[i] == (inputArrayTypeInt[j] * (-1)))
            {
                counter += 2;
                break;
            }
        }
    }
    return counter;
}

/// ������� ��������� ������� � ���������� ���������. ��������� ������ ���������������� ����������. ������ �� ����������.
void oppositeNumbers (int *inputArrayTypeInt, int numberElementsInputArray, int *outputArrayTypeInt, int numberElementsOutputArray)
{
    int i,j;
    int k = 0;
    for (i = 0; i < numberElementsInputArray - 1; i++)
    {
        for (j = i+1; j < numberElementsInputArray; j++)
        {
            if(inputArrayTypeInt[i] == (inputArrayTypeInt[j] * (-1)))
            {
                outputArrayTypeInt[k] = inputArrayTypeInt[i];
                k++;
                outputArrayTypeInt[k] = inputArrayTypeInt[j];
                k++;
                break; /// ������� �� ������� �����.
            }
        }
    }
}

//====================================================================================================
/// ������� ��� ������� 14 ����� 2.

/// ������� ��������� ������ � �����. ��������� ������ ���������� �������. ������ �� ����������.
void fillArrayRandomNumbersFrom1To9 (int *inputArrayTypeInt, int numberElements)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < numberElements; i++)
        inputArrayTypeInt[i] = rand() % 8 + 1;
}

/// ������� ��������� ������ � ���������� ���������. ���������� ���������� �� ������� ���������. ���������� ���������� �� ������� ���������.
int countNotMultiples (int *inputArrayTypeInt, int numberElements, int multiples)
{
    int i;
    int counter = 0;
    for (i = 0; i < numberElements; i++)
    {
        if (inputArrayTypeInt[i] % multiples != 0)
            counter++;
    }
    return counter;
}

///
void notMultiples (int *inputArrayTypeInt, int numberElementsInputArray, int multiples, int *outputArrayTypeInt, int numberElementsOutputArray)
{
    int i;
    int j = 0;
    for (i = 0; i < numberElementsInputArray; i++)
    {
        if (inputArrayTypeInt[i] % multiples != 0)
        {
            outputArrayTypeInt[j] = inputArrayTypeInt[i];
            j++;
        }
    }
}

//====================================================================================================

int main()
{
    setlocale(LC_ALL, "Rus"); /// ���������� ������� ����.
    //====================================================================================================
    /// ����������.
    FILE *inputFile;
    FILE *outputFile;
    char string[256];
    char someLetters[10];
    char variableForMenu = '0';
    int i; /// ���������� ��� ������ for
    int *arrayRandomNumbers;
    int variableNumber;
    int *changedArrayRandomNumbers;
    int variableNumberChangedArray = 0;
    int multiples;
    //====================================================================================================
    while (variableForMenu != 'E')
    {
        printf("1. (����� 1. ������� 4) ���� ����, ���������� �����, � ��������� �����. ����� �����,\n");
        printf("���������� ���������� ���������� ��������� ����.\n");
        printf("2. (����� 1. ������� 14) ��� ����, ���������� �����. ���������� � ������ ���� ���� ����� ����� ���� ������\n");
        printf("(�.�. ���� � ���� �������� �������, �� � ������ ����� �������� ����).\n");
        printf("3. (����� 2. ������� 4) �������� � ���� N ����� ��������� �����. ���������� ���������� ��� ��������������� �����\n");
        printf("����� ����������� ����� ����� (4 � - 4 � ��������������� �����) � ������� �� � ������ ����.\n");
        printf("4. (����� 2. ������� 14) �������� � ���� N ����������� ��������� �����. �������� � ������ ����� ��� ���������� �����,\n");
        printf("����� ���, ������� ������ K.\n");
        printf("E. �����\n");
        variableForMenu = getch();
        system("cls");
        //====================================================================================================
        if (variableForMenu == '1')
        {
            while(variableForMenu != 'e')
            {
                printf("1. ������������ ����� � ����\n");
                printf("2. ������� ����� �� �����\n");
                printf("e. ����� �� �������\n");
                variableForMenu = getch();
                system("cls");
                if (variableForMenu == '1')
                {
                    inputFile = fopen ("partOneZ4InputText.txt", "wt"); /// ��������� ��������� ���� ��� ������.
                    if (inputFile == NULL)
                    printf("������, ���� �� ������\n");
                    else
                    {
                        printf("������� �����: ");
                        gets(string); /// ���������� ������ � ���������.
                        fputs(string, inputFile); /// ���������� ������ � ����.
                        fclose(inputFile); /// ��������� ����.
                    }
                    system("cls");
                }
                else if (variableForMenu == '2')
                {
                    inputFile = fopen ("partOneZ4InputText.txt", "rt"); /// ��������� ��������� ���� ��� ������.
                    if (inputFile == NULL)
                    printf("������, ���� �� ������\n");
                    else
                    {
                        fgets(string, 256, inputFile); /// ���������� ������ �� ����� � ������.
                        fclose(inputFile); /// ��������� ����.
                        spaseInEndString(string); /// ��������� ���� �� � ����� ������ ������. ���� ��� �����������.
                        printf("������� �����: ");
                        for (i = 0; someLetters[i-1] != '\n'; i++)
                        {
                            scanf("%c", &someLetters[i]);
                        }
                        printf("��� ������ �� �����: %s\n", string);
                        printf("����� � ���������� ����������� ����: ");
                        printStringWithMostLetters(string, someLetters);
                    }
                    system("pause");
                    system("cls");
                }
            }
        }
        //====================================================================================================
        else if (variableForMenu == '2')
        {
            while(variableForMenu != 'e')
            {
                printf("1. ������������ ����� � ����\n");
                printf("2. ������� ����� �� �����\n");
                printf("e. ����� �� �������\n");
                variableForMenu = getch();
                system("cls");
                if (variableForMenu == '1')
                {
                    inputFile = fopen ("partOneZ4InputText.txt", "wt"); /// ��������� ��������� ���� ��� ������.
                    if (inputFile == NULL)
                    printf("������, ���� �� ������\n");
                    else
                    {
                        printf("������� �����: ");
                        gets(string); /// ���������� ������ � ���������.
                        fputs(string, inputFile); /// ���������� ������ � ����.
                        fclose(inputFile); /// ��������� ����.
                    }
                    system("cls");
                }
                else if (variableForMenu == '2')
                {
                    inputFile = fopen ("partOneZ4InputText.txt", "rt"); /// ��������� ��������� ���� ��� ������.
                    if (inputFile == NULL)
                    printf("������, ���� �� ������\n");
                    else
                    {
                        fgets(string, 256, inputFile); /// ���������� ������ �� ����� � ������.
                        fclose(inputFile); /// ��������� ����.
                        fillStingThroughOneCharacter(string);
                    }
                    outputFile = fopen ("partOneZ14OutputText.txt", "wt"); /// ��������� ��������� ���� ��� ������.
                    if (outputFile == NULL)
                    printf("������, ���� �� ������\n");
                    else
                    {
                        fputs(string, outputFile);
                        fclose(outputFile); /// ��������� ����.
                        printf("%s\n", string);
                    }
                    system("pause");
                    system("cls");
                }
            }
        }
        //====================================================================================================
        else if (variableForMenu == '3')
        {
            while(variableForMenu != 'e')
            {
                printf("1. ������������ ����� � ����\n");
                printf("2. ������� ����� �� �����\n");
                printf("e. ����� �� �������\n");
                variableForMenu = getch();
                system("cls");
                if (variableForMenu == '1')
                {
                    inputFile = fopen ("partTwoZ4InputNumbers.dat", "wb"); /// ��������� �������� ���� ��� ������.
                    if (inputFile == NULL)
                    printf("������, ���� �� ������\n");
                    else
                    {
                        printf("������� ���������� N ����� ��������� �����: ");
                        scanf("%d", &variableNumber);
                        arrayRandomNumbers = mallocDynamicArrayTypeInt(variableNumber);
                        fillArrayRandomNumbers(arrayRandomNumbers, variableNumber);
                        fwrite(arrayRandomNumbers, sizeof(int), variableNumber, inputFile); /// ���������� � ���� �������� �� �������.
                        fclose(inputFile); /// ��������� ����.
                        printf("��������� �����: ");
                        for (i = 0; i < variableNumber; i++)
                        {
                            printf("%d ", arrayRandomNumbers[i]);
                        }
                        printf("\n");
                        free(arrayRandomNumbers); /// �������� ������.
                        arrayRandomNumbers = NULL; /// �������� ������.
                    }
                    system("pause");
                    system("cls");
                }
                else if (variableForMenu == '2')
                {
                    arrayRandomNumbers = mallocDynamicArrayTypeInt(variableNumber); /// �������� ������.
                    inputFile = fopen ("partTwoZ4InputNumbers.dat", "rb"); /// ��������� �������� ���� ��� ������.
                    if (inputFile == NULL)
                        printf("������, ���� �� ������\n");
                    else
                    {
                        fread(arrayRandomNumbers, sizeof(int), variableNumber, inputFile); /// ���������� ������ �� ����� � ������.
                        fclose(inputFile); /// ��������� ����.
                        variableNumberChangedArray = countOppositeNumbers(arrayRandomNumbers, variableNumber);
                        if (variableNumberChangedArray > 0)
                        {
                            changedArrayRandomNumbers = mallocDynamicArrayTypeInt(variableNumberChangedArray); /// �������� ������.
                            oppositeNumbers(arrayRandomNumbers, variableNumber, changedArrayRandomNumbers, variableNumberChangedArray);
                            outputFile = fopen ("partTwoZ4OutputNumbers.dat", "wb"); /// ��������� ���� ��� ������.
                            if (outputFile == NULL)
                                printf("������, ���� �� ������\n");
                            else
                            {
                                fwrite (changedArrayRandomNumbers, sizeof(changedArrayRandomNumbers[0]), variableNumberChangedArray, outputFile);
                                printArrayTypeInt(changedArrayRandomNumbers, variableNumberChangedArray);
                                fclose(outputFile);
                            }
                            free(changedArrayRandomNumbers); /// �������� ������.
                            changedArrayRandomNumbers = NULL; /// �������� ������.
                        }
                    }
                    free(arrayRandomNumbers); /// �������� ������.
                    arrayRandomNumbers = NULL; /// �������� ������.
                    system("pause");
                    system("cls");
                }
            }
        }
        //====================================================================================================
        else if (variableForMenu == '4')
        {
            while(variableForMenu != 'e')
            {
                printf("1. ������������ ����� � ����\n");
                printf("2. ������� ����� �� �����\n");
                printf("e. ����� �� �������\n");
                variableForMenu = getch();
                system("cls");
                if (variableForMenu == '1')
                {
                    inputFile = fopen ("partTwoZ4InputNumbers.dat", "wb"); /// ��������� �������� ���� ��� ������.
                    if (inputFile == NULL)
                    printf("������, ���� �� ������\n");
                    else
                    {
                        printf("������� ���������� N ����� ��������� �����: ");
                        scanf("%d", &variableNumber);
                        arrayRandomNumbers = mallocDynamicArrayTypeInt(variableNumber);
                        fillArrayRandomNumbersFrom1To9(arrayRandomNumbers, variableNumber);
                        fwrite(arrayRandomNumbers, sizeof(int), variableNumber, inputFile); /// ���������� � ���� �������� �� �������.
                        fclose(inputFile); /// ��������� ����.
                        printf("��������� �����: ");
                        for (i = 0; i < variableNumber; i++)
                        {
                            printf("%d ", arrayRandomNumbers[i]);
                        }
                        printf("\n");
                        free(arrayRandomNumbers); /// �������� ������.
                        arrayRandomNumbers = NULL; /// �������� ������.
                    }
                    system("pause");
                    system("cls");
                }
                else if (variableForMenu == '2')
                {
                    arrayRandomNumbers = mallocDynamicArrayTypeInt(variableNumber); /// �������� ������.
                    inputFile = fopen ("partTwoZ4InputNumbers.dat", "rb"); /// ��������� �������� ���� ��� ������.
                    if (inputFile == NULL)
                        printf("������, ���� �� ������\n");
                    else
                    {
                        fread(arrayRandomNumbers, sizeof(int), variableNumber, inputFile); /// ���������� ������ �� ����� � ������.
                        fclose(inputFile); /// ��������� ����.
                        printf("������� �������: ");
                        scanf("%d", &multiples);
                        variableNumberChangedArray = countNotMultiples(arrayRandomNumbers, variableNumber, multiples);
                        if (variableNumberChangedArray > 0)
                        {
                            changedArrayRandomNumbers = mallocDynamicArrayTypeInt(variableNumberChangedArray); /// �������� ������.
                            notMultiples(arrayRandomNumbers, variableNumber, multiples, changedArrayRandomNumbers, variableNumberChangedArray);
                            outputFile = fopen ("partTwoZ4OutputNumbers.dat", "wb"); /// ��������� ���� ��� ������.
                            if (outputFile == NULL)
                                printf("������, ���� �� ������\n");
                            else
                            {
                                fwrite (changedArrayRandomNumbers, sizeof(changedArrayRandomNumbers[0]), variableNumberChangedArray, outputFile);
                                printArrayTypeInt(changedArrayRandomNumbers, variableNumberChangedArray);
                                fclose(outputFile);
                            }
                            free(changedArrayRandomNumbers); /// �������� ������.
                            changedArrayRandomNumbers = NULL; /// �������� ������.
                        }
                    }
                    free(arrayRandomNumbers); /// �������� ������.
                    arrayRandomNumbers = NULL; /// �������� ������.
                    system("pause");
                    system("cls");
                }
            }
        }
        //====================================================================================================
    }
    return 0;
}
