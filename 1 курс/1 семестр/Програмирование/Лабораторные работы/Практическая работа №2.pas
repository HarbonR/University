﻿{
Program circl; // 1
var l,r : Real; // Создание переменных 
const p = 3.14; // Создание константы (pi)
begin
  writeln ('Чтобы подсчитать длину окружности введите: '); // Выводит текст в консоль
  Write ('Радиус окружности = '); readln(r); // Выводит текст в консоль и ожидает ввод 
  l := 2*p*r; // Считает длину окружности зная радиус
  write ('Длина окружности = ',l) // Выводит ответ в консоль
end.
}
{
Program circl; // 2
var s,r : Real; // Создание переменных 
const p = 3.14; // Создание константы (pi)
begin
  writeln ('Чтобы подсчитать площадь окружности введите: '); // Выводит текст в консоль
  write('Радиус окружности = '); readln(r); // Выводит текст в консоль и ожидает ввод 
  s := p * Sqr(r); // Считает площадь окружности зная радиус
  write ('Площадь окружности = ',s) // Выводит ответ в консоль
end.
}
{
Program triangle; // 3
var a,b,c,y : Real; // Создание переменных 
begin
  writeln('Чтобы найти третью сторону треугольника введите:');
  write ('Сторону a = '); read(a); // Выводит текст в консоль и ожидает ввод
  write ('Сторону b = '); read(b); // Выводит текст в консоль и ожидает ввод
  write ('Угол y в градусах = '); read(y); // Выводит текст в консоль и ожидает ввод
  c := Sqrt(Sqr(a)+Sqr(b)-2*a*b*cos(y*pi/180)); // Считает третью сторону треугольника
  Write ('Сторона с = ', c); // Выводит ответ в консоль
end.
}
{
Program triangle; // 4
var a,b,c : Real; // Создание переменных 
begin
  writeln('Чтобы найти гипотенузу треугольника введите:');
  write ('Катет a = '); read(a); // Выводит текст в консоль и ожидает ввод
  write ('Катет b = '); read(b); // Выводит текст в консоль и ожидает ввод
  c := Sqrt(Sqr(a)+Sqr(b)); // Считает гипотенузу треугольника
  Writeln ('Гипотенуза с = ', c); // Выводит ответ в консоль
end.
}
{
Program triangle; // 5
var a,b,c,p,s : Real; // Создание переменных 
begin
  writeln('Чтобы найти площадь треугольника введите:');
  write ('Сторону a = '); read(a); // Выводит текст в консоль и ожидает ввод
  write ('Сторону b = '); read(b); // Выводит текст в консоль и ожидает ввод
  Write ('Сторона с = '); read(c); // Выводит текст в консоль и ожидает ввод
  p := (a+b+c)/2; // Считает полупериметр
  s := Sqrt(p*(p-a)*(p-b)*(p-c)); // Считает площадь треугольника по формуле Герона
  writeln(s); // Выводит ответ в консоль
end.
}
{
Program arithmetic_mean; // 6
var a,b,c : Real; // Создание переменных
begin
  writeln('Чтобы найти среднеарифметическое 2-х чисел введите:'); // Выводит текст в консоль
  write ('Первое число = '); read(a); // Выводит текст в консоль и ожидает ввод
  write ('Второе число = '); read(b); // Выводит текст в консоль и ожидает ввод
  c:= (a+b)/2; // Считает среднеарифметическое
  write ('Среднеарифметическое = ', c); // Выводит ответ в консоль
end.
}
{
Program volume; // 7
var x,r : Real; // Создание переменных
begin
  read(r);
  x := 4/3 * pi * Exp(3*ln(r)); // Считает объем шара зная радиус
  write(x); // Выводит ответ в консоль
end.
}
{
Program distance; // 8
var x1,x2,y1,y2 : Real; // Создание переменных
begin
  write('Введите координаты первой точки (x1, y1) через пробел: '); // Выводит текст в консоль
  read(x1, y1);
  write('Введите координаты второй точки (x2, y2) через пробел: '); // Выводит текст в консоль
  read(x2, y2);
  write('Расстояние = ', sqrt(sqr(x2-x1)+sqr(y2-y1))); // Выводит ответ в консоль
end.
}
{
Program arithmetic_mean; // 9
var firstNumber,secondNumber,thirdNumber,arithmeticMean : Real; // Создание переменных
begin
  writeln('Чтобы найти среднеарифметическое 3-х чисел введите:'); // Выводит текст в консоль
  write ('Первое число = '); read(firstNumber); // Выводит текст в консоль и ожидает ввод
  write ('Второе число = '); read(secondNumber); // Выводит текст в консоль и ожидает ввод
  write ('Третье число = '); read(thirdNumber); // Выводит текст в консоль и ожидает ввод
  arithmeticMean := (firstNumber + secondNumber + thirdNumber)/3; // Считает среднеарифметическое
  write ('Среднеарифметическое = ', arithmeticMean);
end.
}
{
Program cube; // 10
var a, sGr, sPoln, v : Real; // Создание переменных
begin
  writeln ('Чтобы найти площадь грани, площадь боковой поверхности и объём куба введите'); // Выводит текст в консоль
  write ('Ребро = '); read(a); // Выводит текст в консоль и ожидает ввод
  sGr := Sqr(a); // Считает площадь грани зная ребро
  writeln ('Площадь грани = ', sGr); // Выводит текст в консоль
  sPoln := 6 * sGr; // Считает площадь боковой поверхности зная площадь грани
  writeln ('Площадь боковой поверхности = ', sPoln); // Выводит текст в консоль
  v := Exp(3*ln(a)); // Считает объём куба зная ребро
  writeln ('Объём куба = ', v); // Выводит текст в консоль
end.
}
{
Program table; // 11
var a : integer;
begin
  write('Введите целое число a = '); read(a);
  writeln(a);
  write(Exp(3*ln(a)),' '); writeln(Exp(6*ln(a)));
  write(Exp(6*ln(a)),' '); write(Exp(3*ln(a)),' '); write(a);
end.
}
{
Program calculator; // 12 Чтобы все работало, нужно чтобы ! был выше 0
var firstNumber,secondNumber,answer : Real; // Создание переменных
var sign : char; // Создание переменной
begin
  writeln('Введите знак -, +, /, *'); read(sign); // (!) Выводит текст в консоль и ожидает ввод
  write('Введите первое число = '); read(firstNumber); //(0) Выводит текст в консоль и ожидает ввод
  write('Введите второе число = '); read(secondNumber); //(0) Выводит текст в консоль и ожидает ввод
   case sign of  
    '-' : writeln('Ответ = ', firstNumber - secondNumber); // Выводит на консоль ответ
    '+' :  writeln('Ответ = ', firstNumber + secondNumber); // Выводит на консоль ответ
    '/' :  writeln('Ответ = ', firstNumber / secondNumber); // Выводит на консоль ответ
    '*' :  writeln('Ответ = ', firstNumber * secondNumber); // Выводит на консоль ответ
    else writeln('Действие не возможно так как нет такого знака');
    end;
end.
}
{
Program cube; // 13
var a, sGr, sPoln, v : Real; // Создание переменных
begin
  writeln ('Чтобы найти объём куба и площадь его боковой поверхности введите'); // Выводит текст в консоль
  write ('Ребро = '); read(a); // Выводит текст в консоль и ожидает ввод
  v := Exp(3*ln(a)); // Считает объём куба зная ребро
  writeln ('Объём куба = ', v); // Выводит текст в консоль
  sGr := Sqr(a); // Считает площадь грани зная ребро
  sPoln := 6 * sGr; // Считает площадь боковой поверхности зная площадь грани
  writeln ('Площадь боковой поверхности = ', sPoln); // Выводит текст в консоль
end.
}
{
Program mean; // 14
var firstNumber,secondNumber,arithmeticMean,geometricMean : Real; // Создание переменных
begin
  writeln('Чтобы найти среднеарифметическое и среднегеометрическое 2-х чисел введите:'); // Выводит текст в консоль
  write ('Первое число = '); read(firstNumber); // Выводит текст в консоль и ожидает ввод
  write ('Второе число = '); read(secondNumber); // Выводит текст в консоль и ожидает ввод
  arithmeticMean := (firstNumber + secondNumber)/2; // Считает среднеарифметическое
  writeln ('Среднеарифметическое = ', arithmeticMean);
  geometricMean := Sqrt(firstNumber*secondNumber); // Считает среднегеометрическое
  writeln ('Cреднегеометрическое = ', geometricMean);
end.
}
{
Program triangle; // 15
var a,b,c,s : Real; // Создание переменных 
begin
  writeln('Чтобы найти гипотенузу треугольника введите:');
  write ('Катет a = '); read(a); // Выводит текст в консоль и ожидает ввод
  write ('Катет b = '); read(b); // Выводит текст в консоль и ожидает ввод
  c := Sqrt(Sqr(a)+Sqr(b)); // Считает гипотенузу треугольника
  s := 0.5*a*b; // Считает площадь треугольника
  Writeln ('Гипотенуза с = ', c); // Выводит ответ в консоль
  Writeln ('Площадь s = ', s); // Выводит ответ в консоль
end.
}
{
Program triangle; // 16
var a,s:Real; // Создание переменных
begin
writeln ('Чтобы найти площадь равностороннего треугольника введите:'); // Выводит текст в консоль
write ('Сторона треугольника = '); Read(a); // Выводит текст в консоль и ожидает ввод
s:=(Sqrt(3)/4)*sqr(a); // Считает площадь равностороннего треугольника
Writeln('Площадь треугольника = ', s); // Выводит ответ в консоль
end.
}
{
Program geometric_mean; // 17
var firstNumber,secondNumber,geometricMean : Real; // Создание переменных
begin
  writeln('Чтобы найти среднегеометрическое 2-х чисел введите:'); // Выводит текст в консоль
  write ('Первое число = '); read(firstNumber); // Выводит текст в консоль и ожидает ввод
  write ('Второе число = '); read(secondNumber); // Выводит текст в консоль и ожидает ввод
  geometricMean := Sqrt(firstNumber*secondNumber); // Считает среднегеометрическое
  writeln ('Cреднегеометрическое = ', geometricMean);
end.
}
{
Program triangle; // 18
var hypotenuse,leg1,leg2,radius : Real;
begin
  writeln ('Чтобы найти катет и радиус вписанной окружности введите:');
  write('Гипотенуза = '); read(hypotenuse);
  write('Первый катет = '); read(leg1);
  leg2 := Sqrt(Sqr(hypotenuse)-Sqr(leg1));
  radius := (leg1+leg2-hypotenuse)/2;
  writeln('Второй катет = ', leg2);
  writeln('Радиус вписанной окружности = ',radius);
end.
}
{
Program arithmetic_progression; // 19 Цикл while
var a,n,d,i,summ : Integer;
begin
  writeln ('Чтобы найти сумму членов арифметической прогрессии введите: ');
  write('Число с которого начинается арифметическая прогрессия = '); read(a);
  write('Количество шагов прогрессии = '); read(n);
  write('Шаг = '); read(d);
  write('Члены арифметической прогрессии: ');
  i:=1;
  while i <= n do
  begin
    summ := summ + a;
    write(a + ' ');
    a:= a + d;
    i := i + 1;
  end;
  writeln();
  write('Cумму членов арифметической прогрессии = ', summ);
end.
}
{
Program arithmetic_progression; // 19 Цикл for
var a,d,n,i,summ : Integer;
begin
  writeln ('Чтобы найти сумму членов арифметической прогрессии введите: ');
  write('Число с которого начинается арифметическая прогрессия = '); read(a);
  write('Количество шагов прогрессии = '); read(n);
  write('Шаг = '); read(d);
  write('Члены арифметической прогрессии: ');
  for i:=1 to n do
  begin
    summ:= summ + a;
    write(a + ' ');
    a:=a+d;
  end;
  writeln();
  write('Cумму членов арифметической прогрессии = ', summ);
end.
}
{
Program triangle; // 20
var a,b,c,p,s : Real;
begin 
writeln ('Чтобы найти длины высот треугольника введите: ');
write ('Длина A стороны треугольника = '); Read(a);
write ('Длина B стороны треугольника = '); Read(b);
write ('Длина C стороны треугольника = '); Read(c);
p:=(a+b+c)/2; // Считает периметр треугольника
s:=sqrt(p*(p-a)*(p-b)*(p-c)); // Считает площадь треугольника
writeln('Длины высот: ');
writeln('К стороне А = ', (2*s)/a); // Высота треугольника опущенная с вершины A на сторону BC
writeln('К стороне B = ', (2*s)/b); // Высота треугольника опущенная с вершины B на сторону AC
writeln('К стороне C = ', (2*s)/c); // Высота треугольника опущенная с вершины C на сторону AB
end.
}
{
Program triangle; // 21
var a,b,c : Real;
begin 
writeln ('Чтобы найти длины биссектрис введите: ');
write ('Длина A стороны треугольника = '); Read(a);
write ('Длина B стороны треугольника = '); Read(b);
write ('Длина C стороны треугольника = '); Read(c);
writeln('Длины биссектрис: ');
writeln('К стороне А = ', ( (Sqrt(b*c*(a+b+c)*(b+c-a) ) )/(b+c) ));
writeln('К стороне B = ', ( (Sqrt(a*c*(a+b+c)*(a+c-b) ) )/(a+c) ));
writeln('К стороне C = ', ( (Sqrt(a*b*(a+b+c)*(a+b-c) ) )/(a+b) ));
end.
}
{
Program triangle; // 22
var a,b,c : Real; // Создание переменных
begin 
writeln ('Чтобы найти длины медиан введите: ');
write ('Длина A стороны треугольника = '); Read(a);
write ('Длина B стороны треугольника = '); Read(b);
write ('Длина C стороны треугольника = '); Read(c);
writeln('Длины медиан: ');
writeln('К стороне А = ', (1/2)*Sqrt( 2*Sqr(b) + 2*Sqr(c) - Sqr(a) ) );
writeln('К стороне B = ', (1/2)*Sqrt( 2*Sqr(a) + 2*Sqr(c) - Sqr(b) ) );
writeln('К стороне C = ', (1/2)*Sqrt( 2*Sqr(a) + 2*Sqr(b) - Sqr(c) ) );
end.
}
{
Program triangle; // 23
var a,b,c,p,rv,ro : Real; // Создание переменных
begin 
writeln ('Чтобы найти радиусы вписанной и описанной окружностей введите: ');
write ('Длина A стороны треугольника = '); Read(a);
write ('Длина B стороны треугольника = '); Read(b);
write ('Длина C стороны треугольника = '); Read(c);
p:=(a+b+c)/2; // Считает периметр треугольника
rv:=(Sqrt( (p-a)*(p-b)*(p-c) ))/p; // Считает радиуса вписанной окружности в треугольник
writeln('Радиусы вписанной окружностей = ',rv);
ro:= (a*b*c)/(4*Sqrt(p*(p-a)*(p-b)*(p-c))); // Считает радиуса описанной окружности в треугольник
writeln('Радиусы описанной окружностей = ',ro);
end.
}
{
Program distance; // 24
var x1,x2,y1,y2 : Real; // Создание переменных
begin
  write('Введите координаты первой точки (x1, y1) через пробел: '); // Выводит текст в консоль
  read(x1, y1);
  write('Введите координаты второй точки (x2, y2) через пробел: '); // Выводит текст в консоль
  read(x2, y2);
  write('Расстояние = ', sqrt(sqr(x2-x1)+sqr(y2-y1))); // Выводит ответ в консоль
end.
}
{
Program number; // 25
var x : real; // Создание переменных
begin
write('Введите x = '); read(x);
writeln('Дробная часть х = ', x - trunc(x));
writeln('Округленное Х до ближайшего целого = ', round(x));
writeln('Число Х без дробной части = ', trunc(x));
end.
}
{
program triangle; // 26
var x1, y1, x2, y2, x3, y3, P, p2, S, a, b, c: real; // Создание переменных
begin
  writeln('Чтобы найти периметр и площадь треугольника введите: ');
  write('Координаты первой точки (через пробел) = ');  read(x1, y1);
  write('Координаты второй точки (через пробел) = ');  read(x2, y2);
  write('Координаты третьей точки (через пробел) = ');  read(x3, y3);
  a:=sqrt(sqr(x2-x1)+sqr(y2-y1)); // Формулы длины прямой по координатам
  b:=sqrt(sqr(x3-x2)+sqr(y3-y2)); // Формулы длины прямой по координатам
  c:=sqrt(sqr(x3-x1)+sqr(y3-y1)); // Формулы длины прямой по координатам
  P:=a+b+c; // Формула периметра
  p2:=P/2; // Формула полупериметра
  S:=sqrt(p2*(p2-a)*(p2-b)*(p2-c)); // формула площади треугольника
  writeln('Периметр треугольника = ', P);
  writeln('Площадь треугольника = ', S);
end.
}