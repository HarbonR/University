#include <stdio.h> /// ����������� ���������� ����� ������.
#include <conio.h> /// ���������� ��� ������� ����� ������ � ����������.
#include <stdlib.h> /// ����������� ����������.
#include <locale.h> /// ���������� ��� ����������� ������.
#include <time.h> /// ���������� ��� ������ � ��������.

//====================================================================================================
/// ������� ��� Part 1 exercise 4.

/// ������� ��������� ���������� ���������. �������� ������ ��� ������������ ������ �� N ���������. ���������� ���������.
int* mallocForDynamicArrayTypeInt (int numberElements)
{
    return (int*)malloc(numberElements * sizeof(int));
}

/// ������� ��������� ������ ���� Int, ���������� ���������. ��������� ������ ���������� �������. ������ �� ����������.
void fillArrayTypeIntRandomDigits (int inputArrayTypeInt[], int numberElements)
{
    int i;
    for (i = 0; i < numberElements; i++)
    {
        inputArrayTypeInt[i] = rand() % 9 + 1;
    }
}

/// ������� ��������� ������ ���� Int, ���������� ���������. ������� ������ � �������. ������ �� ����������.
void printArrayTypeInt (int inputArrayTypeInt[], int numberElements)
{
    int i;
    for (i = 0; i < numberElements; i++)
    {
        printf("%d ", inputArrayTypeInt[i]);
    }
    printf("\n");
}

/// ������� ��������� ��������� �� ������ ������� ������� ������������ �������� ������� �����-�������. ������ �� ����������.
void changeArrayTypeInt (int inputArrayTypeInt[], int numberElements)
{
    int i, variableX;
    for (i = 0; i < numberElements/2; i++)
    {
        variableX = inputArrayTypeInt[i]; /// ��������� � ���������� �������� ������� �������� �������.
        inputArrayTypeInt[i] = inputArrayTypeInt[(numberElements - 1 - i)]; /// ����������� �������� ������� ��� �������� i ������� ������� ��� �������� numberElements - 1 - i (��������� �������).
        inputArrayTypeInt[(numberElements - 1 - i)] = variableX; /// ����������� �������� ������� ��� �������� numberElements - 1 - i (��������� �������) �������� ���������� variableX.
    }
}

//====================================================================================================
/// ������� ��� Part 1 exercise 14.

/// ������� ��������� ���������� (number - �����). ���������� 1 ���� ��� �������. ����� 0.
int primeNumber (int number)
{
    int i;
    if (number > 1) /// ���� number ������ 1 ���������
    {
        for (i = 2; i < number; i++)
            if (number % i == 0) /// ���� ������� �� ������� number �� i = 0, ���������
                return 0; /// false
        return 1; /// true
    }
    else
        return 0; /// false
}

/// ������� ��������� ������ ���� Int. ���������� ����� �����, ���������� ������ ������� �������� �������� �������.
int summNumber (int inputArrayTypeInt[], int numberElements)
{
    int i;
    int summ = 0;
    for (i = 0; i < numberElements; i++)
    {
        if (primeNumber(i) == 1)
            summ += inputArrayTypeInt[i];
    }
    return summ;
}

/// ������� ��������� ������ ���� Int, ���������� ���������. ��������� ������ ������� �� 0 �� N. ������ �� ����������.
void fillArrayTypeIntSequenceNNumbers (int inputArrayTypeInt[], int numberElements)
{
    int i;
    for (i = 0; i < numberElements; i++)
    {
        inputArrayTypeInt[i] = i;
    }
}

//====================================================================================================
/// ������� ��� Part 2 exercise 4.

/// ������� ��������� ���������� ����� � ��������. �������� ������ ��� ��������� ������������ ������ �� N ���������. ���������� ���������.
int** mallocForTwoDimensionalDynamicArrayTypeInt (int heightArray, int widthArray)
{
    int i;
    int **varriableForTwoDimensionalDynamicArray = (int**)malloc(heightArray * sizeof(int*));
    for (i = 0; i < heightArray; i++)
    {
        varriableForTwoDimensionalDynamicArray[i] = (int*)malloc(widthArray * sizeof(int));
    }
    return varriableForTwoDimensionalDynamicArray;
}

/// ������� ��������� ��������� �� ��������� ������, ������ � ������ �������. ��������� ��������� ������ ���������� �������. ������ �� ����������.
void fillTwoDimensionalArrayTypeIntRandomDigits (int **inputTwoDimensionalArrayTypeInt, int heightArray, int widthArray)
{
    int i, j;
    for (i = 0; i < heightArray; i++)
    {
        for (j = 0; j < widthArray; j++)
        {
            inputTwoDimensionalArrayTypeInt[i][j] = rand() % 9 + 1;
        }
    }
}

/// ������� ��������� ��������� �� ��������� ������, ������ � ������ �������. ������� ������ � �������. ������ �� ����������.
void printTwoDimensionalArrayTypeIntRandomDigits (int **inputTwoDimensionalArrayTypeInt, int heightArray, int widthArray)
{
    int i, j;
    for (i = 0; i < heightArray; i++)
    {
        for (j = 0; j < widthArray; j++)
        {
            printf("%d ", inputTwoDimensionalArrayTypeInt[i][j]);
        }
        printf("\n");
    }
}

/// ������� ��������� ��������� �� ��������� ������, ������ � ������ �������. ���������� ���������� ������ ��������� � �������� �������.
int countNumberEvenElementsInTwoDimensionalArrayTypeInt (int **inputTwoDimensionalArrayTypeInt, int heightArray, int widthArray)
{
    int i, j;
    int counter = 0;
    for (i = 0; i < heightArray; i++)
        for (j = 0; j < widthArray; j++)
            if (inputTwoDimensionalArrayTypeInt[i][j] % 2 == 0)
                counter++;
    return counter;
}

/// ������� ��������� ��������� �� ��������� ������, ������ � ������ �������. ��������� ��������� �� ������ � ���������� ���������. ��������� ������ ������� ���������� �� ����������� �������. ������ �� ����������.
void fillArrayTypeIntEvenElementsFromTwoDimensionalArrayTypeInt (int **inputTwoDimensionalArrayTypeInt, int heightArray, int widthArray, int *inputArrayTypeInt, int numberElements)
{
    int i, j;
    int k = 0;
    for (i = 0; i < heightArray; i++)
    {
        for (j = 0; j < widthArray; j++)
        {
            if (inputTwoDimensionalArrayTypeInt[i][j] % 2 == 0)
            {
                inputArrayTypeInt[k] = inputTwoDimensionalArrayTypeInt[i][j];
                k++;
            }
        }
    }
}

//====================================================================================================
/// ������� ��� Part 2 exercise 14.

/// ������� ��������� ��������� �� ���������� ������. ���������� ������������ � ����������� ����� ��������. ������� ������� � ����������� � ������������ ������ � �� ����� � �������. ������ �� ����������.
void minMaxSummElemetsArrayTypeInt (int **inputTwoDimensionalArrayTypeInt, int heightArray, int widthArray)
{
    int i, j;
    int summ = 0; /// ���������� ��� ����� �������
    int min = 0; /// ����������� ����� �� ��������
    int indexMin = 0; /// ������ ������� � ����������� ������
    int max = 0; /// ������������ ����� �� ��������
    int indexMax = 0; /// ������ ������� � ������������ ������
    int k = 0;
    for (i = 0; i < widthArray; i++)
    {
        for(j = 0; j < heightArray; j++)
        {
            summ += inputTwoDimensionalArrayTypeInt[j][i]; /// ������������ �������� �� �������
        }
        for (; k < 1; k++) /// ����������� ���������� min � max �������� ����� ������� �������
        {
            min = summ;
            max = summ;
        }
        if (summ <= min)
        {
            min = summ;
            indexMin = i;
        }
        if (summ >= max)
        {
            max = summ;
            indexMax = i;
        }
        summ = 0; /// �������� ����������
    }
    printf("���������� ����� ���������: ");
    for (i = indexMin; i == indexMin; i++)
        for(j = 0; j < heightArray; j++)
            printf("%d ",inputTwoDimensionalArrayTypeInt[j][i]);
    printf("= %d \n", min);
    printf("���������� ����� ���������: ");
    for (i = indexMax; i == indexMax; i++)
        for(j = 0; j < heightArray; j++)
            printf("%d ",inputTwoDimensionalArrayTypeInt[j][i]);
    printf("= %d \n", max);
}

//====================================================================================================

int main ()
{
    setlocale(LC_ALL, "Rus"); /// ���������� ������� ����.
    srand(time(NULL)); /// ���� ��� ������������.
    //====================================================================================================
    /// ���������� ����������.
    char variableForMenu; /// ���������� ��� �������� ������� ��� ����.
    int *pDynamicArrayTypeInt = NULL; /// ��������� �� ������������ ������ ���� int.
    int numberElementsDynamicArray; /// ���������� ��� ���-�� ��������� ������������� �������.
    int **pTwoDimensionalDynamicArrayTypeInt = NULL; /// ��������� �� ��������� ������������ ������ ���� int
    int heightArray; /// ������ ������� (���������� �����).
    int widthArray; /// ������ ������� (���������� ��������).
    int i; /// ���������� ��� ������ for
    //====================================================================================================
    while(variableForMenu != '5')
    {
        printf("==============================Menu Laboratory Work 4==============================\n");
        printf("1. (Part 1 exercise 4) ��� ���������� ������. ����������� �������� ������� �����-�������.\n");
        printf("2. (Part 1 exercise 14) ������ ������������������ N �����. ��������� ����� �����, ���������� ������ ������� �������� �������� �������.\n");
        printf("3. (Part 2 exercise 4) ��� ��������� ������. ������������ ���������� ������ ������ �� ������ ��������� ���������� �������.\n");
        printf("4. (Part 2 exercise 14) ���� ������������� �������. ����� ������� � ���������� � ���������� ������ ���������. ������� �� ������ ��������� ������� � ����� �� ���������.\n");
        printf("5. Exit\n");
        printf("==================================================================================\n");
        variableForMenu = getch(); /// ���������� ������������� ��������� �������� � ����������.
        system("cls"); /// �������� �������.
        if (variableForMenu == '1')
        {
            printf("������� ���������� ��������� �������: ");
            scanf("%d", &numberElementsDynamicArray);
            pDynamicArrayTypeInt = mallocForDynamicArrayTypeInt(numberElementsDynamicArray); /// �������� ������ ��� ������.
            fillArrayTypeIntRandomDigits(pDynamicArrayTypeInt, numberElementsDynamicArray); /// ��������� ������ ���������� �������.
            printf("�������� ������: ");
            printArrayTypeInt(pDynamicArrayTypeInt, numberElementsDynamicArray); /// ������� ������.
            changeArrayTypeInt(pDynamicArrayTypeInt, numberElementsDynamicArray); /// �������� ������.
            printf("���������� ������: ");
            printArrayTypeInt(pDynamicArrayTypeInt, numberElementsDynamicArray); /// ������� ������.
            free(pDynamicArrayTypeInt); /// �������� �����.
            pDynamicArrayTypeInt = NULL; /// �������� ������.
            system("pause");
            system("cls"); /// �������� �������.
        }
        if (variableForMenu == '2')
        {
            printf("������� ���������� �����: ");
            scanf("%d", &numberElementsDynamicArray);
            pDynamicArrayTypeInt = mallocForDynamicArrayTypeInt(numberElementsDynamicArray); /// �������� ������ ��� ������.
            fillArrayTypeIntSequenceNNumbers(pDynamicArrayTypeInt, numberElementsDynamicArray); /// ��������� ������ ������������������� �����
            printf("������������������ �����: ");
            printArrayTypeInt(pDynamicArrayTypeInt, numberElementsDynamicArray); /// ������� ������.
            printf("����� �����, ���������� ������ ������� �������� �������� �������: %d\n", summNumber(pDynamicArrayTypeInt, numberElementsDynamicArray));
            free(pDynamicArrayTypeInt); /// �������� �����.
            pDynamicArrayTypeInt = NULL; /// �������� ������.
            system("pause");
            system("cls"); /// �������� �������.
        }
        if (variableForMenu == '3')
        {
            printf("������� ���������� �����: ");
            scanf("%d", &heightArray);
            printf("������� ���������� ��������: ");
            scanf("%d", &widthArray);
            pTwoDimensionalDynamicArrayTypeInt = mallocForTwoDimensionalDynamicArrayTypeInt(heightArray, widthArray); /// �������� ������ ��� ��������� ������.
            fillTwoDimensionalArrayTypeIntRandomDigits(pTwoDimensionalDynamicArrayTypeInt, heightArray, widthArray); /// ��������� ������������ ��������� ������ ���������� �������.
            printf("�������� ������:\n");
            printTwoDimensionalArrayTypeIntRandomDigits(pTwoDimensionalDynamicArrayTypeInt, heightArray, widthArray); /// ������� ��������� ������������ ������ � �������.
            numberElementsDynamicArray = countNumberEvenElementsInTwoDimensionalArrayTypeInt(pTwoDimensionalDynamicArrayTypeInt, heightArray, widthArray);
            pDynamicArrayTypeInt = mallocForDynamicArrayTypeInt(numberElementsDynamicArray);
            fillArrayTypeIntEvenElementsFromTwoDimensionalArrayTypeInt(pTwoDimensionalDynamicArrayTypeInt, heightArray, widthArray, pDynamicArrayTypeInt, numberElementsDynamicArray);
            printf("������ �� ������ ���������: ");
            printArrayTypeInt(pDynamicArrayTypeInt, numberElementsDynamicArray); /// ������� ������.
            //==================================================
            for (i = 0; i < heightArray; i++)
                free(pTwoDimensionalDynamicArrayTypeInt[i]); /// �������� ������
            free(pTwoDimensionalDynamicArrayTypeInt);
            //==================================================
            pTwoDimensionalDynamicArrayTypeInt = NULL; /// �������� ������.
            free(pDynamicArrayTypeInt); /// �������� �����.
            pDynamicArrayTypeInt = NULL; /// �������� ������.
            system("pause");
            system("cls"); /// �������� �������.
        }
        if (variableForMenu == '4')
        {
            printf("������� ���������� �����: ");
            scanf("%d", &heightArray);
            printf("������� ���������� ��������: ");
            scanf("%d", &widthArray);
            pTwoDimensionalDynamicArrayTypeInt = mallocForTwoDimensionalDynamicArrayTypeInt(heightArray, widthArray); /// �������� ������ ��� ��������� ������.
            fillTwoDimensionalArrayTypeIntRandomDigits(pTwoDimensionalDynamicArrayTypeInt, heightArray, widthArray); /// ��������� ������������ ��������� ������ ���������� �������.
            printf("�������� �������:\n");
            printTwoDimensionalArrayTypeIntRandomDigits(pTwoDimensionalDynamicArrayTypeInt, heightArray, widthArray); /// ������� ��������� ������������ ������ � �������.
            minMaxSummElemetsArrayTypeInt(pTwoDimensionalDynamicArrayTypeInt, heightArray, widthArray);
            //==================================================
            for (i = 0; i < heightArray; i++)
                free(pTwoDimensionalDynamicArrayTypeInt[i]); /// �������� ������
            free(pTwoDimensionalDynamicArrayTypeInt);
            //==================================================
            pTwoDimensionalDynamicArrayTypeInt = NULL; /// �������� ������.
            system("pause");
            system("cls"); /// �������� �������.
        }
    }
}
